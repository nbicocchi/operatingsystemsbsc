# Algoritmi e linguaggi di programmazione

Il corso tratta gli aspetti fondamentali della gestione dei sistemi Unix. Utenti, processi, filesystem, comandi principali, e scripting Bash.

## Come usare il materiale

L'intero materiale puo' essere scaricato con il comando seguente:

-   git clone  [https://github.com/nbicocchi/operatingsystemsbsc.git](https://github.com/nbicocchi/operatingsystemsbsc.git)

Il materiale puo' essere aggiornato e/o corretto durante lo svolgimento del corso. Per scaricare la versione piu' recente, entrare nella cartella del materiale e digitare il comando seguente:

-   $ git pull (in caso di errori: git reset --hard; git pull)

## Moduli 

[M1] Organizzazione OS
* Installazione OS virtualizzato (VirtualBox)
* Kernelspace/Userspace
* Utenti (gruppi, permessi)
* Filesystem (struttura interna, file, directory, devices)
* Processi (sequenza di boot, init, stdin/stdout/stderr)

[M2] Gestione sistema
* Bash (builtins, auto-completamento)
* Manuale di sistema (man)
* Editor di testo (vim, nano)
* Gestione utenti (adduser, rmuser, whoami, id, su, sudo, chmod, chown)
* Gestione filesystem (mount, umount, mkfs)
* Gestione pacchetti (apt-get)

[M3] Comandi composti
* Escaping
* Globbing
* Redirection (>, <)
* Pipes (|)

[M4] Comandi principali
* Filesystem (ls, cp, mv, rm, mkdir, rmdir, locate, which, find, cat, touch)
* Processi (ps, top, kill, esecuzione foreground/background, &)
* Operazioni aritmetiche (expr)
* Flussi dati (echo, cat, grep, sort, head, tail, cut)

[M5] Scripting Bash I
* Shebang
* Variabili linea di comando ($#, $n) 
* Variabili locali
* Variabili d'ambiente
* Variabile PATH

[M6] Scripting Bash II
* Strutture di controllo (if, test, for, case)
* Ricerca ricorsiva
