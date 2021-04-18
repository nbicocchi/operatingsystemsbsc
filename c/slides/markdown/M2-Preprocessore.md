---
date: Aprile 2021
author: Nicola Bicocchi
institute: DIEF/UNIMORE
title: Preprocessore
subtitle: Corso di Programmazione di Sistema
section-titles: true
theme: Madrid
colortheme: crane
fontsize: 12pt
aspectratio: 1610
lang: it
---


# Hello World! Direttiva include
Linea 1: **#** introduce una direttiva del pre-processore che **include (importa)** un file (**stdio.h**) da un percorso standard (**< >**)

```c
#include <stdio.h>

int main(){
    printf("Hello, World!\n");
    return 0;
}
```


# Direttive preprocessore
* Il simbolo **#** (diesis, cancelletto, o hash) precede tutte le operazioni che vengono gestite dal *preprocessore*
* Sono operazioni eseguite staticamente durante il processo di compilazione
* Servono a manipolare il codice sorgente prima della compilazione vera e propria. In particolare, sono utilizzate per aggiungere, modificare ed escludere parti di codice sorgente


# Processo di compilazione
![Processo di compilazione](./images/compilazione2.png)

# Preprocessore
* Non è un comando o programma aggiuntivo, ma solo un termine con cui si definisce questa fase del processo di compilazione
* La si può immaginarla come una procedura di manipolazione di testo
* L’input è codice sorgente l’output è codice sorgente
* Le direttive al preprocessore non esistono più nel codice sorgente che viene effettivamente compilato nè tantomento nel codice compilato. Si tratta di uno *stratagemma* per manipolare il codice sorgente prima della compilazione
* Per mostrare/salvare solo l’output del preprocessore si può usare:
  * *$ gcc -E filename.c*


# Direttive rilevanti
**\#include** aggiunta di codice

**\#define** modifica del codice

**\#ifdef \#else \#endif** esclusione/scelte di codice

# Direttiva #include
* Aggiunge codice sorgente presente in file esterni
* Utilizzato di solito con file header con estensione .h

```make
#include <stdio.h>
```

* Il preprocessore genera un file sorgente intermedio in cui la direttiva \#include <stdio.h> è sostituita dal contenuto dell'intero file indicato (/usr/include, /usr/local/include)
* *$ cat /usr/include/stdio.h*

# Progetto composto di più file

* Mettiamo i nostri header in percorsi di sistema (e.g., /usr/include, /usr/local/include). Approccio utile solo per la distribuzione di librerie, non durante lo sviluppo
* Indichiamo al compilatore gcc di cercare in percorsi arbitrari con l’opzione di compilazione -I
* Indichiamo al compilatore gcc di cercare localmente il file

# Esempio
bla bla...


# Esempio (mymath.h e mymath.c)

* All'interno del file .h posizioniamo i prototipi delle funzioni

```c
unsigned mypow(unsigned base, unsigned exp);
```

* All'interno del file .c posizioniamo le implementazioni delle funzioni

```c
#include "mymath.h"

unsigned mypow(unsigned base, unsigned exp){
    unsigned result;
    for(result=1; exp>0 ; exp--){
        result*=base;
    }
    return result;
}
```

# Esempio (main.c)
```c
#include <stdio.h>
#include "mymath.h"

int main(){
    unsigned base=3,exp=5;
    printf("3^5=%u\n", mypow(base,exp));
    return 0;
}
```

```cmake
cmake_minimum_required(VERSION 3.15)
project(mymath C)
set(CMAKE_C_STANDARD 99)

add_executable(main main.c mymath.c)
```

# Direttiva #define
* La direttiva \#define modifica il codice sorgente sostituendo tutte le occorrenze di INPUT con OUTPUT
* Attenzione: \#define non definisce variabili globali!

```c
#define INPUT OUTPUT
```

```c
#include <stdio.h>
#define MAX 10
int main() {
    printf("Il valore massimo è %d\n", MAX);
    return 0; 
}
```

# Direttiva #define parametrica

* Il valore di sostituzione può anche essere parametrico 

```c
#define N(x) (10*(x))
int main(){
    int a=N(5);
    return 0; 
}
```

* **Attenzione!** N non è una funzione!
* Il preprocessore crea un nuovo codice sorgente sostituendo tutte le occorrenze di N(argomento) con (10 * (argomento)) senza effettuare alcun controllo!
* E' importante utilizzare in modo opportuno le parentesi per evitare problemi di priorità!

# Parentesi

* Una definizione robusta si ottiene mettendo tra parentesi sia gli argomenti da sostituire che la macro stessa

```c
#define SQUARE(a) a*a

SQUARE(3);  // Output:9
SQUARE(1+2) // Sostituito in s = 1+2*1+2 -> Output:5 
```

* Definizione robusta

```c
#define SQUARE(a) ((a)*(a))
```

# Direttiva #undef
* La direttiva \#define non scope 
* Il preprocessore non conosce le funzioni o altri costrutti di aggregazione/visibilità del linguaggio. Legge i sorgenti e opera **sequenzialmente** dall’inizio alla fine del file sorgente
* Per eliminare una definizione è necessario utilizzare la direttiva \#undef in modo esplicito

```c
#define MAX 128 

// ... codice C ...

#undef MAX
```

# Direttiva #if
* E' possibile abilitare o disabilitare porzioni di codice attraverso l'uso del preprocessore e la direttiva \#if
* Il preprocessore non può valutare il contenuto di variabili o di codice a runtime
* Le uniche *variabili* nel preprocessore sono quelle definite attraverso la direttiva \#define (macro)
* Utile per: (a) scegliere tipi diversi di implemtazione, (b) stabilire tipi di dati utilizzati, (c) stabilire comportamenti speciali per la fase di sviluppo (debug)

```c
#define MAX 10 \
#if (MAX==1024)
    // implementazione 1
#else
    // implementazione 2
#endif
```

# Direttiva #if (Esempi)

```c
#ifndef DEBUG
#define message(S) printf(S) \
#else
#define message(S)
#endif
```

```c
#ifndef MYMATH_H
#define MYMATH_H

unsigned mypow(unsigned, unsigned); 

#endif // MYMATH_H
```