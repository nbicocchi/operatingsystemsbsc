# Programmazione di Sistema - DIEF/UNIMORE

## Esercizi C (Matrici e strutture innestate)
Si propongono alcuni esercizi relativi all’utilizzo di matrici (array bi-dimensionali) e strutture (struct).

---

Esercizio 1. Implementare una funzione *matrix_edge* che, data una matrice come input, calcoli la somma di tutti i valori presenti nella sua *cornice*. La funzione deve rispettare il seguente prototipo:

```c
long matrix_edge(unsigned n_rows, unsigned n_cols, int m[][n_cols]);
```

dove:

* **m** è la matrice di input, con **n_rows** righe e **n_cols** colonne;
* la funzione calcola il risultato e restuisce la somma tramite il suo valore di ritorno.

---

Esercizio 2. Implementare una funzione *diagonals* che estrae la diagonale principale e la diagonale secondaria di una matrice quadrata. La funzione deve rispettare il seguente prototipo:

```c
void diagonals(int *rdp, int *rds, unsigned size, const int m[][size]);
```

dove:

* **rdp** è il puntatore in cui viene memorizzata la diagonale principale;
* **rds** è il puntatore in cui viene memorizzata la diagonale secondaria;
* **m** è la matrice di input di dimensione **size** righe e **size** colonne;
* assumere che sia rdp sia rds siano puntatori ad aree di memoria già allocate correttamente.

---

Esercizio 3. Implementare una funzione *tabula_recta* che crei una matrice contenente la tabula recta (vedere wikipedia) dell’alfabeto inglese. Rispettare il seguente prototipo:

```c
void tabula_recta(char t[][26]);
```
dove:

* **t** è la matrice in cui viene salvato la matrice generata.


---

Esercizio 4. Implementatre una funzione *array_stats* per l’individuazione del valore minimo, del valore massimo, della media e della varianza dei valori di un array. La funzione deve rispettare il seguente prototipo:

```c
typedef struct array_info {
    int max;
    int min;
    float mean;
    float variance;
} array_info_t;

array_info_t array_stats(const int *values, unsigned size);
```

dove:

* **array_info_t** è la struct che gestisce la informazioni dell’array;
* **values** è il puntatore all’array;
* **size** è la dimensione dell’array.

---

Esercizio 5. Implementare delle varianti dell’esercizio precedente che implementino le stesse funzionalità con lo stesso tipo di struct, ma che supportino differenti prototipi.

*Variante 1:*

```c
void array_stats(array_info_t *r, const int *values, unsigned size);
```

dove:

* **r** è il puntatore alla struttura dati in cui memorizzare i valori calcolati dalla funzione.

*Variante 2:*

```c
array_info_t *array_stats(const int *values, unsigned size);
```

dove:

* la funzione restituire il puntatore alla struttura dati allocata appositamente dalla funzione, in cui
  sono memorizzati i risultati. Restituisce NULL in caso di errore.

*Variante 3:*

```c
void array_stats(array_info_t **r, const int *values, unsigned size);
```

dove:

* **r** è il puntatore al puntatore della struttura dati allocata appositamente dalla funzione in cui sono
  memorizzati i risultati. Vale NULL in caso di errore.

---

Esercizio 6. Implementare una funzione **merge** che dati due array di valori interi ordinati, generi un terzo array che contenga tutti i valori dei precedenti array in modo ordinato. Assumere che all’interno degli array ci possano essere elementi duplicati. La funzione rispetti il seguente prototipo:

```c
typedef struct int_array {
    int *p;
    unsigned size;
} int_array_t;

void merge(int_array_t **r, const int_array_t *a1, const int_array_t *a2);
```

dove:

* **int_array_t** è la struttura per gestire un array di variabili int. La struttura include la variabile puntatore p, che include l’indirizzo dell’array gestito, e variabile size, che indica la dimensione dell’array;
* **r** è il puntatore alla struct che gestisce l’array generato, da allocare appositamente da parte della funzione;
* **a1** è il puntatore alla struct che gestisce il primo array di input;
* **a2** è il puntatore alla struct che gestisce il secondo array di input
