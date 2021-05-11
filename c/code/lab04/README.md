# Programmazione di Sistema - DIEF/UNIMORE

## Esercizi C (Allocazione dinamica memoria)
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

Esercizio 3. Implementare una funzione che dati due array di valori interi ordinati, generi un terzo array che contenga tutti i valori dei precedenti array in modo ordinato. Assumere che all’interno degli array ci possano essere elementi duplicati. La funzione rispetti il seguente prototipo:

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

Esercizio 4. Implementare una funzione per l’individuazione del valore minimo, del valore massimo, della media e della varianza dei valori di un array. La funzione deve rispettare il seguente prototipo:

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

Esercizio 5. Implementare una funzione che, data una stringa contenente una sequenza di parole separate da spazio, crei una lista di stringhe in cui l’ultimo elemento della lista è seguito da un valore NULL (ad esempio, in presenza di una stringa C di N parole, se la variabile char **list punta alla lista, list[N] == NULL). La funzione deve rispettare il seguente prototipo:

```c
char **split(const char *s);
```

dove:

* **s** è il puntatore alla stringa C data in input; 
* la funzione funzione restituisce il puntatore alla lista, e vale NULL in caso di errore di memoria.