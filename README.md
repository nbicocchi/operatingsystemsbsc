# Algoritmi e linguaggi di programmazione

Il corso tratta gli aspetti fondamentali della gestione dei sistemi Unix. 

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

[M3] Gestione sistema
* Bash (builtins, auto-completamento)
* Manuale di sistema (man)
* Editor di testo (vim, nano)
* Gestione utenti (adduser, rmuser, whoami, id, su, sudo, chmod, chown)
* Gestione filesystem (mount, umount, mkfs)
* Gestione pacchetti (apt-get)

[M4] Gestione dei flussi
* Escaping
* Globbing
* Ridirezione (>, <)
* Pipe (|)

[M5] Comandi principali
* Filesystem (ls, cp, mv, rm, mkdir, rmdir, locate, which, find, cat, touch)
* Processi (ps, top, kill, esecuzione foreground/background, &)
* Operazioni aritmetiche (expr)
* Trattamento flussi (echo, cat, grep, sort, head, tail, cut)

[M6-8] Scripting Bash
* shebang
* variabili linea di comando ($#, $n) 
* variabili locali
* variabili d'ambiente
* variabile PATH
* Strutture di controllo (if, test, for, case)
* Ricerca ricorsiva
