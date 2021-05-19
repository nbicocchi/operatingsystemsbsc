# Programmazione di Sistema (DIEF, UNIMORE)

Il corso tratta gli aspetti fondamentali della gestione dei sistemi Unix. Utenti, processi, filesystem, comandi principali, ed utilizzo della shell Bash. Il corso inoltre introduce il linguaggio C, frequentemente utilizzato nella programmazione di sistema. Il corso si rivolge a studenti senza esperienze precedenti di programmazione.

## Software
* [VirtualBox](https://www.virtualbox.org/wiki/Downloads)
* [Ubuntu Linux](https://www.ubuntu-it.org/download)
* [CLion](https://www.jetbrains.com/clion/)

## Tutorial, Esercizi Online
* https://www.hackerrank.com/domains/shell
* https://www.tutorialspoint.com/unix/
* https://seankross.com/the-unix-workbench/
* https://explainshell.com/
* https://www.hackerrank.com/domains/c
* http://en.wikipedia.org/wiki/C_(programming_language)
* http://en.wikipedia.org/wiki/C_syntax
* http://en.wikibooks.org/wiki/C_Programming
* http://cppreference.com 

## Libri
* Marco Liverani - Unix introduzione elementare
* Marco Liverani - Programmazione della Shell Bash
* Jason Bacon, Lars Olson - Unix User's Guide
* Chet Ramey, Brian Fox - Bash Reference Manual
* Facchinetti, Larizza, Rubini - Programmare in C
* BlackLight - Il Linguaggio C
* Banahan, Brady, Doran - The C Book
* Burgess - The GNU C Programming Tutorial

## Video
* [YouTube CLion](https://www.youtube.com/playlist?list=PLQ176FUIyIUb_J7ZEi2IDe9132-dq_vQL)
* [YouTube Bash](https://www.youtube.com/watch?v=62-hJarauK4&list=PLhlcRDRHVUzR-5TKDC1VPMtyhEyyQ5uwy)
* [YouTube C]()

## Slack channel
Slack è un'applicazione per condividere idee, files, e lavorare in gruppo. Durante il corso utilizzeremo questo strumento per tenerci in contatto, discutere esercizi e problemi vari. Questo [link](https://join.slack.com/t/dief-pds/shared_invite/zt-niz30yi9-IjZFCmhcQhycAd4aRThtTQ) consente di unirsi al gruppo.

## Materiale didattico
L'intero materiale puo' essere scaricato con il comando seguente:

> git clone https://github.com/nbicocchi/operatingsystemsbsc.git

Il materiale puo' essere aggiornato e/o corretto durante lo svolgimento del corso. Per scaricare la versione piu' recente, entrare nella cartella del materiale e digitare il comando seguente:

> $ git pull (in caso di errori: git reset --hard; git pull)

## Moduli Bash
[M1] Introduzione a Unix
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

[M2] Bash Shell
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

[M4] Comandi Unix
* Filesystem (ls, pwd, basename, dirname, cp, mv, ln, stat, rm, mkdir, rmdir, which, locate, touch, chmod, chown, cmp, diff, find)
* Filtri (cat, grep, sort, head, tail, cut, wc, tr, uniq, sed)
* Processi (ps, top, kill, fg, bg, &)
* Utenti (adduser, deluser, su, sudo)
* Compressione (tar, gzip, bzip2)
* Varie (dd, echo, read, true, false, expr, date, man, apropos)

## Moduli C
[M1] Introduzione al linguaggio C
* Processo di compilazione
* Identificatori
* Parole chiave 
* Variabili
* Espressioni

[M2] Preprocessore
* Introduzione, utilizzo, invocazione
* \#define
* \#include
* \#if
* \#ifdef

[M3] Istruzioni e strutture di controllo
* Costrutto condizionale *if-else*
* Costrutto iterativo *for*
* Costrutto iterativo *while*
* Costrutto iterativo *do-while*
* Costrutto di selezione *switch-case*
* Istruzioni *break, continue*
* Operatori

[M4] Tipi di dati
* Organizzazione in memoria
* Tipi interi
* Tipi in virgola mobile
* Puntatori
* Array
* Stringhe 
* Conversione di tipo (casting implicito, esplicito)
* Funzioni matematiche
* Funzioni I/O console

[M5] Funzioni
* Dichiarazione, definizione, chiamata a funzione
* Variabili locali, globali e static
* Passaggio di parametri (per valore, per riferimento)
* Ricorsione

[M6] Tipi di dati derivati
* Array multi-dimensionali
* Array multi-dimensionali come parametri di funzione
* Matrici
* Strutture dati
* Enumerazioni
* *typedef*

[M7] Puntatori 
* Puntatori a void
* Puntatori e array
* Aritmetica dei puntatori
* Allocazione dinamica della memoria

[M8] File
* File binari e file di testo
* Apertura, chiusura, posizione corrente
* Lettura e scrittura
* I flussi standard (stdin, stdout, stderr)
* Utilizzo di buffer e *buffer overflow*


## Esame
L'esame consiste in 2 esercizi al calcolatore (1x Bash, 1x C). Esempi di esercizi si trovano nelle cartelle bash/code e c/code suddivisi per livello di difficoltà.
