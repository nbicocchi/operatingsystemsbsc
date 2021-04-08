---
date: Aprile 2021
author: Nicola Bicocchi
institute: DIEF/UNIMORE
title: Compilazione e Makefile
subtitle: Corso di Programmazione di Sistema
section-titles: true
theme: Madrid
colortheme: crane
fontsize: 12pt
aspectratio: 1610
lang: it
---

# makefile

* Per gestire la compilazione di un progetto C complesso si fa uso di tool ausiliari (e.g., make).
* Il comando make cerca all'intero della directory corrente un file di nome makefile o Makefile.
* make evita di eseguire operazioni inutili: il codice viene compilato solo se vengono rilevate modifiche ai sorgenti.

```cmake
helloworld: helloworld.c
    gcc -Wall -g -o helloworld helloworld.c
```

# makefile

```cmake
CC=gcc
CFLAGS=-Wall -g

helloworld: helloworld.c
    $(CC) $(CFALGS) -o $@ $^
```
* make supporta l'utilizzo di variabili e simboli speciali.
* $(CC) : variabile che contiene il comando di compilazione (default: cc)
* $(CFLAGS): variabile che contiene le opzioni di invocazione del compilatore
* $@ : metacarattere che viene sostituito con il target (helloworld)
* $^ : metacarattere che viene sostituito con le dipendenze (helloworld.c)

# makefile

```cmake
CC=gcc
CFLAGS=-Wall -g

clean:
    rm -rf helloworld

helloworld: helloworld.c
    $(CC) $(CFALGS) -o $@ $^
```
* Di solito si imposta un target speciale *clean* per pulire il sistema

# CMakeLists.txt

...

# make e cmake riga di comando

...


