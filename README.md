# Algoritmi e linguaggi di programmazione

Il corso tratta gli aspetti fondamentali della gestione dei sistemi Unix. Utenti, processi, filesystem, comandi principali, e scripting Bash. Si rivolge a studenti senza esperienza precedente.

## Software
* [VirtualBox](https://www.virtualbox.org/wiki/Downloads)
* [Ubuntu Linux](https://www.ubuntu-it.org/download)

## Risorse Web
* https://explainshell.com/
* https://www.unixtutorial.org/commands
* https://seankross.com/the-unix-workbench/

## Testi Consigliati
* Jason Bacon, Lars Olson - Unix User's Guide
* Machtelt Garrels - La guida di Bash per principianti
* Marco Liverani - Programmazione della Shell Bash
* Marco Liverani - Unix introduzione elementare
* Chet Ramey, Brian Fox - Bash Reference Manual

## Video
* [YouTube](https://www.youtube.com/watch?v=mWjhPDmyV-w&list=PLhlcRDRHVUzR-5TKDC1VPMtyhEyyQ5uwy)

## Slides, esempi, esercizi
L'intero materiale puo' essere scaricato con il comando seguente:

> git clone https://github.com/nbicocchi/operatingsystemsbsc.git

Il materiale puo' essere aggiornato e/o corretto durante lo svolgimento del corso. Per scaricare la versione piu' recente, entrare nella cartella del materiale e digitare il comando seguente:

> $ git pull (in caso di errori: git reset --hard; git pull)

## Moduli 
[M1] Concetti base
* Installazione OS virtualizzato (VirtualBox)
* Kernelspace/Userspace
* Utenti (gruppi, permessi)
* Gestione utenti (adduser, rmuser, whoami, id, sudo, chmod, chown)
* Filesystem (struttura interna, file, directory, devices)
* Gestione filesystem (mount, umount, mkfs)
* Processi (sequenza di boot, processo init, stdin/stdout/stderr)
* Manuale di sistema (man)
* Editor di testo (vim, nano)
* Gestione pacchetti (apt-get)

[M2] Shell Bash
* Bash (builtins, auto-completamento)
* Escaping
* Globbing
* Redirection (>, <)
* Pipes (|)

[M3] Comandi principali
* Filesystem (ls, cp, mv, ln, rm, mkdir, rmdir, locate, which, find, cat, touch)
* Processi (ps, top, kill, esecuzione foreground/background, &)
* Operazioni aritmetiche (expr)
* Flussi dati (echo, cat, grep, sort, head, tail, cut)

[M4] Scripting Bash I
* Shebang
* Variabili locali
* Variabili d'ambiente
* Variabili speciali ($#, $N, $\*, $@, $?, $$) 
* Variabile PATH

[M5] Scripting Bash II
* Strutture di controllo (if, test, for, case)
* Funzioni Bash
* Ricerca ricorsiva

## Esame
L'esame consisterà di tre esercizi al calcolatore di difficoltà crescente. La scrittura corretta dei 2 più semplici supera la soglia della sufficienza. Esempi di esercizi di difficoltà intermedia  completi di soluzioni si trovano nella cartella code/bash/lab02.


