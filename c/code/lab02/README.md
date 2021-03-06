﻿# Programmazione di Sistema - DIEF/UNIMORE

## Esercizi C (Array, stringhe, puntatori, funzioni)
I seguenti esercizi sono pensati per l’utilizzo di array e stringhe allocate automaticamente, senza utilizzare allocazione dinamica con malloc. Per questo si assuma che tutti i puntatori impiegati facciano già riferimento ad aree di memoria valida e di dimensioni appropriate.

---

Esercizio 1. Implementare una funzione *reversei* che inverta l’ordine dei valori di un array di dati interi che rispetti il seguente prototipo:

```c
void reversei(int *dst, const int *src, unsigned size);
```

dove:

   * **dst** è il puntatore all’array dove verrà salvata l’array invertito
   * **src** è il puntatore all’array di input
   * **size** è la dimensione dell’array

---

Esercizio 2. Implementare una funzione *reverses* che inverta l’ordine dei caratteri di una stringa C che rispetti il seguente prototipo:

```c
void reverses(char *dst, const char *src);
```   

dove:

* **dst** è il puntatore all’array dove verrà salvata la stringa C invertita
* **src** è il puntatore alla stringa in input

---

Esercizio 3. Implementare una funzione *rotate13* che trasforma una stringa in un’altra stringa di uguale dimensione, ma in cui ogni carattere della stringa generate è dal carattere alla stessa posizione nella stringa originale "spostato" di 13 caratteri (considerando una successione di caratteri "ciclica", dove la a segue la z).

```c
void rotate13(char *dst, const char *src);
```

dove:

* **dst** è il puntatore alla stringa dove verrà salvata la stringa in output
* **src** è il puntatore alla stringa in input

---

Esercizio 4. Implementare una funzione *findi* che individua la posizione di un valore all’interno di un array di interi. La funzione rispetti il seguente prototipo:

```c
long findi(int t, const int *values, unsigned size);
```

dove:

* **t** è il valore da ricercare
* **values** è il puntatore all’array di input
* **size** è la dimensione dell’array
* **il valore di ritorno** indica la posizione all’interno dell’array, e ha valore speciale -1 se l’elemento non esiste

---

Esercizio 5. Implementare una funzione *capitalize* che, data una stringa C di input, ne generi un’altra in cui tutte le lettere alfabetiche che seguono uno spazio siano maiuscole, mentre tutte le altre minuscole. Assumere che l’input possa avere sia lettere maiuscole sia minuscole sparse, e anche altri simboli.

```c
void capitalize(char *dst, const char *src);
```

dove:

* **dst** è il puntatore alla stringa di output
* **src** è il puntatore alla stringa in input

---

Esercizio 6. Implementare una funzione *frequencies* per il calcolo delle frequenza di caratteri all’interno di una stringa. La funzione conta quante volte compare ogni carattere all’interno di una stringa e memorizza il risultato in un array:

```c
void frequencies(unsigned *freqs, const char *src);
```

dove:

* **freqs** è il puntatore all’array generato con il risultato. Assumere che il puntatore si riferisca a un array di dimensioni 26, che possa contenere il conteggio di tutte le lettere dell’alfabeto inglese
* **src** è il puntatore alla stringa di input

---

Esercizio 7. Implementare una funzione *merge* che dati due array di valori interi ordinati in modo crescente, generi un terzo array che contenga tutti i valori dei precedenti array in modo ordinato. Assumere che all’interno degli array ci possano essere elementi duplicati. La funzione rispetti il seguente prototipo:

```c
void merge(int *dst, const int *a1, unsigned s1, const int *a2, unsigned s2);
```

dove:

* **dst** è il puntatore all’array generato
* **a1** è il puntatore al primo array di input
* **s1** è la dimensione del primo array
* **a2** è il puntatore al secondo array di input
* **s2** è la dimensione del secondo array

---

Esercizio 8. Implementare una funzione *fibonacci* per il calcolo della serie di Fibonacci, in cui si calcolano i primi N valori e li si salvano in un array. La funzione rispetti la seguente interfaccia:

```c
void fibonacci(unsigned *dst, unsigned n);
```

dove:

* **dst** è il puntatore all’array generato
* **n** è il numero di valori della serie da generate

---

Esercizio 9. Implementare una funzione *trova_max* per individuare il valore massimo all’interno di un array di numeri interi che rispetti il seguente prototipo:

```c
void trova_max(int *rmax, const int *values, unsigned size);
```

dove:

* **rmax** è il puntatore alla variabile che conterrà il valore massimo trovato;
* **values** è il puntatore all’array;
* **size** è la dimensione dell’array.

Si assuma che il puntatore all’array sia valido, che la dimensione indicata dalla variabile size sia sempre maggiore di 0 e consistente con i valori effettivamente presenti nell’array

---

Esercizio 10. Implementare una funzione *trova_minmax* simile a quella indicata nell’esercizio precedente, ma che individui sia il valore minimo, sia il valore massimo. La funzione deve rispettare il seguente prototipo:

```c
void trova_minmax(int *rmin, int *rmax, const int *values, unsigned size);
```

dove:

* **rmin** è il puntatore alla variabile che conterrà il valore minimo trovato;
* **rmax** è il puntatore alla variabile che conterrà il valore massimo trovato;
* **values** è il puntatore all’array;
* **size** è la dimensione dell’array.
---

Esercizio 11. Implementare una funzione *compute_mean_variance* per il calolo della media aritmetica e della varianza di un insieme di valori, che rispetti il seguente prototipo:

```c
void compute_mean_variance(float *rmean, float *rvariance, float *values, unsigned size);
```

dove:

* **rmean** è il puntatore alla variabile dove viene memorizzata la media;
* **rvariance** è il puntatore alla variabile dove viene memorizzata la varianza;
* **values** è il puntatore all’array;
* **size** è la dimensione dell’array.

---

Esercizio 12. Implementare una funzione *my_strcpy*, ispirata alla funzione *strcpy* dichiarata all'interno di string.h, che copia il contenuto di una stringa all'interno di un'altra stringa. La funzione deve rispettare il seguente prototipo:

```c
void my_strcpy(char *dst, const char *src);
```

dove:

* **dst** è il puntatore al vettore di caratteri verso cui effettuare la copia;
* **src** è il puntatore al vettore di caratteri da cui effettuare la copia.

---

Esercizio 13. Implementare una funzione *my_strcat*, ispirata alla funzione *strcat* dichiarata all'interno di string.h, che concatena il contenuto di una stringa con quello di un'altra stringa. La funzione deve rispettare il seguente prototipo:

```c
void my_strcat(char *dst, const char *src);
```

dove:

* **dst** è il puntatore al vettore di caratteri a cui concatenare;
* **src** è il puntatore al vettore di caratteri da concatenare a **dst**.

---

Esercizio 14. Implementare una funzione *my_strlen*, ispirata alla funzione *strlen* dichiarata all'interno di string.h, che determina la lunghezza di una stringa zero-terminata. La funzione deve rispettare il seguente prototipo:

```c
unsigned my_strlen(const char *src);
```

dove:

* **src** è il puntatore al vettore di caratteri di cui si vuole calcolare la lunghezza;
* la funzione ritorna la lunghezza della stringa, escluso il carattere di terminazione.

---

Esercizio 15. Implementare una funzione *my_strcmp*, ispirata alla funzione *strcmp* dichiarata all'interno di string.h, che confronta due stringhe. La funzione deve rispettare il seguente prototipo:

```c
int my_strcmp(const char *s1, const char *s2);
```

dove:

* **s1** è il puntatore al primo vettore di caratteri;
* **s2** è il puntatore al secondo vettore di caratteri;
* la funzione ritorna 0 in caso le stringhe siano uguali, 1 in caso siano diverse.

---

Esercizio 16. Implementare una funzione *bubble_sort* che ordini un vettore di interi in modo crescente utilizzando l'algoritmo Bubble Sort (https://en.wikipedia.org/wiki/Bubble_sort). La funzione deve rispettare il seguente prototipo.

```c
void bubble_sort(int arr[], int n);
```

dove:

* **arr** è il vettore da ordinare, composto da **n** elementi.

---

Esercizio 17. *(Approfondimento, non richiesto all'esame)*. Implementare una funzione *merge_sort* che ordini un vettore di interi in modo crescente utilizzando l'algoritmo Merge Sort (https://en.wikipedia.org/wiki/Merge_sort). La funzione deve rispettare il seguente prototipo.

```c
void merge_sort(int arr[], int l, int r);
```

dove:

* **arr** è il vettore da ordinare;
* **l** è l'indice di sinistra del blocco da ordinare, tipicamente l = 0;
* **r** è l'indice di destra del blocco da ordinare, tipicamente r = sizeof(arr) - 1.

