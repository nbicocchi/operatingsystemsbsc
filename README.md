# Algoritmi e linguaggi di programmazione

Il corso tratta gli aspetti fondamentali della gestione dei sistemi Unix. Utenti, processi, filesystem, comandi principali, e scripting Bash. Si rivolge a studenti senza esperienza precedente.

## Software, Tutorial, Esercizi

### Bash/C
* [VirtualBox](https://www.virtualbox.org/wiki/Downloads)
* [Ubuntu Linux](https://www.ubuntu-it.org/download)
* [Sublime Text](https://www.sublimetext.com/)

### Misc
* https://explainshell.com/
* https://seankross.com/the-unix-workbench/
* https://www.tutorialspoint.com/unix/
* http://en.wikipedia.org/wiki/C_(programming_language)
* http://en.wikipedia.org/wiki/C_syntax
* http://it.wikibooks.org/wiki/C
* http://en.wikibooks.org/wiki/C_Programming
* http://cppreference.com http://cplusplus.com
* http://cppreference.com http://cplusplus.com

## Libri
* Jason Bacon, Lars Olson - Unix User's Guide
* Machtelt Garrels - La guida di Bash per principianti
* Marco Liverani - Programmazione della Shell Bash
* Marco Liverani - Unix introduzione elementare
* Chet Ramey, Brian Fox - Bash Reference Manual
* Facchinetti, Larizza, Rubini - Programmare in C
* BlackLight - Il Linguaggio C
* Banahan, Brady, Doran - The C Book
* Burgess - The GNU C Programming Tutorial

## Video
* [YouTube](https://www.youtube.com/watch?v=mWjhPDmyV-w&list=PLhlcRDRHVUzR-5TKDC1VPMtyhEyyQ5uwy)

## Slides, esempi, esercizi
L'intero materiale puo' essere scaricato con il comando seguente:

> git clone https://github.com/nbicocchi/operatingsystemsbsc.git

Il materiale puo' essere aggiornato e/o corretto durante lo svolgimento del corso. Per scaricare la versione piu' recente, entrare nella cartella del materiale e digitare il comando seguente:

> $ git pull (in caso di errori: git reset --hard; git pull)

## Moduli Bash
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

[M2] Bash Basics
* Bash (builtins, auto-completamento, ricerca comandi)
* Flussi dati standard (input, output, error)
* Ridirezione flussi dati (>, <)
* Composizione comandi (|)
* Variabili locali
* Variabili d'ambiente
* Variabile PATH
* Metacaratteri
* Espansione ed inibizione

[M3] Bash Scripting
* Shebang
* Variabili speciali ($#, $N, $\*, shift, $@, $?, $$)
* Strutture di controllo (if, test, for, case)
* Funzioni
* Arrays
* Gestione argomenti linea di comando con getopts
* Buone pratiche

[M4] Comandi principali
* Filesystem (ls, pwd, basename, dirname, cp, mv, ln, stat, rm, mkdir, rmdir, which, locate, touch, chmod, chown, cmp, diff, find)
* Filtri (cat, grep, sort, head, tail, cut, wc, tr, uniq, sed)
* Processi (ps, top, kill, fg, bg, &)
* Utenti (adduser, deluser, su, sudo)
* Compressione (tar, gzip, bzip2)
* Varie (dd, echo, read, true, false, expr, date, man, apropos)

## Moduli C
[M1] Variabili, costanti, tipi fondamentali

[M2] Funzioni

[M3] Il processo di compilazione

[M4] Istruzioni di controllo

[M5] Puntatori

[M6] Array

[M7] Strutture

[M8] La libreria standard del C

## Esame
L'esame consisterà di sei esercizi al calcolatore di difficoltà crescente. La scrittura corretta dei 4 più semplici supera la soglia della sufficienza. Esempi di esercizi si trovano nelle cartelle bash/code e c/code suddivisi per livello di difficoltà.

* lab01/ introduttivi
* lab02/ semplici
* lab03/ intermedi
* lab04/ difficili
