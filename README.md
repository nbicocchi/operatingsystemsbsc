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
* Filesystem (ls, cp, mv, ln, rm, mkdir, rmdir, locate, which, find, cat, touch)
* Processi (ps, top, kill, esecuzione foreground/background, &)
* Operazioni aritmetiche (expr)
* Flussi dati (echo, cat, grep, sort, head, tail, cut)

[M5] Scripting Bash I
* Shebang
* Variabili locali
* Variabili d'ambiente
* Variabili speciali ($#, $N, $\*, $@, $?, $$) 
* Variabile PATH

[M6] Scripting Bash II
* Strutture di controllo (if, test, for, case)
* Ricerca ricorsiva

## Esame

L'esame consisterà di tre esercizi al calcolatore di difficoltà crescente. La scrittura corretta dei 2 più semplici supera la soglia della sufficienza. Esempi di esercizi di difficoltà intermedia  completi di soluzioni si trovano nella cartella code/bash/lab02.

## Testi Consigliati

* Jason Bacon, Lars Olson - Unix User's Guide
* Machtelt Garrels - La guida di Bash per principianti
* Marco Liverani - Programmazione della Shell Bash
* Marco Liverani - Unix introduzione elementare
* Chet Ramey, Brian Fox - Bash Reference Manual

## Risorse Web

* https://explainshell.com/
* https://www.unixtutorial.org/commands
* https://wiki.ubuntu-it.org/Programmazione/LinguaggioBash
* https://seankross.com/the-unix-workbench/
