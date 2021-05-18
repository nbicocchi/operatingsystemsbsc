# Programmazione di Sistema - DIEF/UNIMORE

## Esercizi C (Allocazione dinamica della memoria)
Si propone un gruppo di esercizi per imparare ad utilizzare tecniche di allocazione dinamica della memoria.

---

Esercizio 1. Implementare una funzione *reversei* che inverta l’ordine dei valori di un array di dati interi che rispetti il seguente prototipo:

```c
int *reversei(const int *src, unsigned size);
```

dove:

* **src** è il puntatore all’array di input;
* **size** è la dimensione dell’array;
* la funzione ritorna il puntatore all’array invertito, allocato dalla funzione. Ha valore NULL in caso di errore di allocazione.

---

Esercizio 2. Implementare una funzione *reverses* che inverta l’ordine dei caratteri di una stringa C che rispetti il seguente prototipo:

```c
char *reverses(const char *src);
```

dove:

* **src** è il puntatore alla stringa in input.
* la funzione ritorna il puntatore all’array invertito, allocato dalla funzione. Ha valore NULL in caso di errore di allocazione.


---

Esercizio 3. Implementare una funzione *merge* che dati due array di valori interi ordinati, generi un terzo array che contenga tutti i valori dei precedenti array in modo ordinato. Assumere che all’interno degli array ci possano essere elementi duplicati. La funzione rispetti il seguente prototipo:

```c
void merge(int **dst, const int *a1, unsigned s1, const int *a2, unsigned s2);
```

dove:
* **dst** è il puntatore all’array generato, della dimensione opportuna per contenere il numero opportuno di elementi. Ha valore NULL in caso di errore di allocazione;
* **a1** è il puntatore al primo array di input;
* **s1** è la dimensione del primo array;
* **a2** è il puntatore al secondo array di input;
* **s2** è la dimensione del secondo array.

---

Esercizio 4. Implementare una funzione *array_stats* per l’individuazione del valore minimo, del valore massimo, della media e della varianza dei valori di un array. La funzione deve rispettare il seguente prototipo:

```c
typedef struct array_info {
    int max;
    int min;
    float mean;
    float variance;
} array_info_t;

array_info_t *array_stats(const int *values, unsigned size);
```

dove:

* **values** è il puntatore all’array;
* **size** è la dimensione dell’array;
* **(array_info_t \*)** è un puntatore alla struct che gestisce la informazioni dell’array. 

---

Esercizio 5. Implementare una funzione *split* che, data una stringa contenente una sequenza di parole separate da spazio, crei una lista di stringhe in cui l’ultimo elemento della lista è seguito da un valore NULL (ad esempio, in presenza di una stringa C di N parole, se la variabile char **list punta alla lista, list[N] == NULL). La funzione deve rispettare il seguente prototipo:

```c
char **split(const char *s);
```

dove:

* **s** è il puntatore alla stringa C data in input; 
* la funzione funzione restituisce il puntatore alla lista, e vale NULL in caso di errore di memoria.

---

Esercizio 6. Implementare una funzione *matrix_transpose* che data una matrice, ritorna la sua matrice trasposta (le righe diventano colonne e viceversa). La funzione deve rispettare il seguente prototipo:

```c
struct matrix {
    size_t rows, cols;
    double *data;
};

struct matrix *matrix_transpose(const struct matrix *m);
```

dove:

* **m** è il puntatore alla struttura che rappresenta la matrice originale;
* la funzione deve ritornarne il puntatore alla matrice trasposta, allocata dinamicamente. Il puntatore vale NULL in caso di errore di memoria.

---

Esercizio 7. L'esercizio precedente ha la caratteristica di definire i dati della matrice *(data)* attraverso un array monodimensionale. Questa soluzione semplifica nell'immediato l'allocazione della memoria ma previene la possibilità di accedere al campo *data* utilizzando la notazione *data[][]*. Implementare una versione alternativa dell'esercizio precedente in cui *struct matrix* è definita come segue:

```c
struct matrix {
    size_t rows, cols;
    double **data;
};

struct matrix *matrix_transpose(const struct matrix *m);
```

---

Esercizio 8. Implementare una funzione *matrix_swap_diagonals* che accetta come parametro un puntatore ad una matrice quadrata e deve restituire un puntatore a una nuova matrice allocata dinamicamente che contenga la matrice ottenuta scambiando la diagonale principale con l’antidiagonale, ovvero la diagonale che va dall’angolo in alto a destra all’angolo in basso a sinistra. La funzione deve rispettare il seguente prototipo:

```c
struct matrix {
    size_t rows, cols;
    double *data;
};

struct matrix *matrix_swap_diagonals(const struct matrix *m);
```

dove:

* **m** è il puntatore alla struttura che rappresenta la matrice originale;
* la funzione deve ritornarne il puntatore alla matrice con le diagonali invertite, allocata dinamicamente. Il puntatore vale NULL in caso di errore di memoria.

---

Esercizio 9. L'esercizio precedente ha la caratteristica di definire i dati della matrice *(data)* attraverso un array monodimensionale. Questa soluzione semplifica nell'immediato l'allocazione della memoria ma previene la possibilità di accedere al campo *data* utilizzando la notazione *data[][]*. Implementare una versione alternativa dell'esercizio precedente in cui *struct matrix* è definita come segue:

```c
struct matrix {
    size_t rows, cols;
    double **data;
};

struct matrix *matrix_swap_diagonals(const struct matrix *m);
```

---

Esercizio 10. Implementare una funzione *matrix_product* che accetta come parametri due puntatori a matrice e restituisce un puntatore a una nuova matrice allocata dinamicamente che contenga il prodotto matriciale delle due passate come parametro. La funzione deve rispettare il seguente prototipo:

```c
struct matrix {
    size_t rows, cols;
    double *data;
};

struct matrix *matrix_product(const struct matrix *m1, const struct matrix *m2);
```

dove:

* **m1** è il puntatore alla struttura che rappresenta la prima matrice;
* **m2** è il puntatore alla struttura che rappresenta la seconda matrice;
* la funzione deve ritornarne il puntatore alla matrice prodotto, allocata dinamicamente. Il puntatore vale NULL in caso di errore di memoria.

---

Esercizio 11. L'esercizio precedente ha la caratteristica di definire i dati della matrice *(data)* attraverso un array monodimensionale. Questa soluzione semplifica nell'immediato l'allocazione della memoria ma previene la possibilità di accedere al campo *data* utilizzando la notazione *data[][]*. Implementare una versione alternativa dell'esercizio precedente in cui *struct matrix* è definita come segue:

```c
struct matrix {
    size_t rows, cols;
    double **data;
};

struct matrix *matrix_product(const struct matrix *m1, const struct matrix *m2);
```

---

Esercizio 12. Implementare una funzione *matrix_compare* che accetta come parametri due puntatori a matrice e restituisce un numero intero da interpretare come un booleano. La funzione deve rispettare il seguente prototipo:

```c
struct matrix {
    size_t rows, cols;
    double **data;
};

int matrix_compare(const struct matrix *m1, const struct matrix *m2);
```

dove:

* **m1** è il puntatore alla struttura che rappresenta la prima matrice
* **m2** è il puntatore alla struttura che rappresenta la seconda matrice
* la funzione ritorna un numero intero (0 se le due matrici sono uguali, 1 se le due matrici sono diverse)

---

Esercizio 13. Implementare una funzione *invert_all* che accetta come parametro una lista (zero-terminata) di stringhe (zero-terminate) ed inverte sia l'ordine delle stringhe che dei caratteri all'interno di ogni stringa. La funzione deve rispettare il seguente prototipo:

```c
char **invert_all(char *strings[]);
```

dove:

* **list** è il puntatore alla lista di stringhe
* la funzione ritorna una nuova lista di stringhe (allocata dinamicamente) in cui sia l'ordine delle stringhe che dei caratteri all'interno di ogni stringa è invertito.

---
