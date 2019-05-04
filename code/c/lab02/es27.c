#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include "utils.h"

void child(int index, int argc, char **argv) {
	char **argv_child;
	int i;

	/* set up new argv for child */
	argv_child = (char **)malloc(sizeof(char *) * argc);
	for (i = 1; i <= argc; i++) {
		argv_child[i - 1] = argv[i];
	}

	/* command execution */
	zprintf(1, "[%d] Child %d started...\n", getpid(), index);
	zprintf(1, "[%d] executing %s...\n", getpid(), argv_child[0]);
	execvp(argv_child[0], argv_child); 
	zprintf(2, "error: exec()\n");
	exit(EXIT_FAILURE);
}

int main(int argc, char **argv) {
	char *usage = "usage: %s cmd [opt]\n";
	int pid, status;

	if (argc < 2) {
        zprintf(2, usage, argv[0]);
        exit(EXIT_FAILURE);
    } 

	pid = fork();
	switch (pid) {
		case -1: /* error */
			zprintf(2, "error: fork()\n");
			exit(EXIT_FAILURE);
		case 0: /* child */
			child(0, argc, argv);
	}
	
	/* father */
	zprintf(1, "[%d] Father started...\n", getpid());
	if ((pid = wait(&status)) == -1) {
		zprintf(2, "error: wait()\n");
		exit(EXIT_FAILURE);
	}
	if (!WIFEXITED(status)) {
		zprintf(1, "[%d] Child %d exited abnormally\n", pid);
		exit(EXIT_FAILURE);
    }
    zprintf(1, "[%d] Child pid=%d exit=%d\n", getpid(), pid, WEXITSTATUS(status));
    exit(EXIT_SUCCESS);
}

