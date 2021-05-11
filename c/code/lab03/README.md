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
struct array_info {
    int max;
    int min;
    float mean;
    float variance;
};

struct array_info array_stats(const int *values, unsigned size);
```

dove:

* **array_info_t** è la struct che gestisce la informazioni dell’array;
* **values** è il puntatore all’array;
* **size** è la dimensione dell’array.

---

Esercizio 5. Implementare una variante dell’esercizio precedente che implementi le stesse funzionalità con lo stesso tipo di struct, ma che supporti un prototipo diverso.

```c
void array_stats(struct array_info *r, const int *values, unsigned size);
```

dove:

* **r** è il puntatore alla struttura dati in cui memorizzare i valori calcolati dalla funzione;
* **values** è il puntatore all’array;
* **size** è la dimensione dell’array.

---

Esercizio 6. Implementare una funzione per calcolare il prodotto di due numeri complessi che rispetti il seguente prototipo:

```c
struct complex {
    double real;
    double imaginary;
};

void complex_product (struct complex *r, const struct complex *c1, const struct complex *c2);
```

dove:

* **r** è il puntatore alla struttura dati in cui memorizzare i valori calcolati dalla funzione;
* **c1** rapresenta il primo numero da moltiplicare;
* **c2** rapresenta il secondo numero da moltiplicare.

---

Esercizio 7. Implementare una funzione per il calcolo dell’area di un poligono irregolare date le coordinate dei suoi vertici (https://arachnoid.com/area_irregular_polygon/index.html). La funzione supporti il seguente prototipo:

```c
typedef struct point {
   float x;
   float y;
} point_t;

typedef struct polygon {
    unsigned n;
    point_t *vertices;
} polygon_t;
   
float compute_area(const polygon_t *p);
```

dove:

* **point_t** rappresenta un punto sul piano con coordinate x e y; 
* **polygon_t** rappresenta il poligono con n vertici, ognuno identificato come un punto sul piano;
* **compute_area** è la funzione per il calcolo dell’area:
   * accetta il puntatore alla struttura che rappresenta il poligono;
   * restituisce l’area del poligono.