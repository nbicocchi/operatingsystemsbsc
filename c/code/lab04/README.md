# Programmazione di Sistema - DIEF/UNIMORE

## Esercizi C (Matrici e strutture innestate)
Si propongono alcuni esercizi relativi all’utilizzo di matrici (array bi-dimensionali) e strutture innestate (liste di array tramite puntatori di puntatori).

---

Esercizio 1. Implementare una funzione che, data una matrice come input, calcoli la somma di tutti i valori presenti nella sua *cornice*. La funzione deve rispettare il seguente prototipo:

```c
long matrix_edge(unsigned n_rows, unsigned n_cols, int m[][n_cols]);
```

dove:

* **m** è la matrice di input, con n_rows righe e n_cols colonne;
* la funzione calcola il risultato e restuisce la somma tramite il suo valore di ritorno.

---

Esercizio 2. Implementare una funzione che estrae la diagonale principale e la diagonale secondaria di una matrice quadrata. La funzione deve rispettare il seguente prototipo:

```c
void diagonals(int *rdp, int *rds, unsinged size, const int m[][size]);
```

dove:

* **m** è la matrice di input di dimensione size righe e size colonne;
* **rdp** è il puntatore in cui viene memorizzata la diagonale principale;
* **rds** è il puntatore in cui viene memorizzata la diagonale secondaria.
* assumere che sia rdp sia rds siano puntatori ad aree di memoria già allocate correttamente.

---

Esercizio 3. Implementare una funzione che crei una matrice contenente la tabula recta (vedere wikipedia) dell’alfabeto inglese. Rispettare il seguente prototipo:

```c
void tabula_recta(char t[][26]);
```
dove:

* **t** è la matrice in cui viene salvato la matrice generata.
```