# Programmazione di Sistema - DIEF/UNIMORE

## Esercizi C (Puntatori e funzioni)

---

Esercizio 1. Implementare una funzione per individuare il valore massimo all’interno di un array di numeri interi che rispetti il seguente prototipo:

```c
void trova_max(int *rmax, int *values, unsigned size);
```

dove:

* **values** è il puntatore all’array
* **size** è la dimensione dell’array
* **rmax** è il puntatore all’elemento dell’array che rappresenta il valore massimo

Si assuma che il puntatore all’array sia valido, che la dimensione indicata dalla variabile size sia sempre maggiore di 0 e consistente con i valori effettivamente presenti nell’array

---

Esercizio 2. Implementare una funzione simile a quella indicata nell’esercizio precedente, ma che individui sia il valore minimo, sia il valore massimo. La funzione deve rispettare il seguente prototipo:

```c
void trova_minmax(int *rmin, int *rmax, int *values, unsigned size);
```

dove:

* **values** è il puntatore all’array
* **size** è la dimensione dell’array
* **rmin** è il puntatore all’elemento dell’array che rappresenta il valore minimo • rmax è il puntatore all’elemento dell’array che rappresenta il valore massimo

---

Esercizio 3. Implementare una funzione per il calolo della media aritmetica e della varianza di un insieme di valori, che rispetti il seguente prototipo:

```c
void compute_mean_variance(float *rmean, float *rvariance, float *values, unsigned size);
```

dove:

* **values** è il puntatore all’array
* **size** è la dimensione dell’array
* **rmean** è il puntatore alla variabile dove viene memorizzata la media
* **rvariance** è il puntatore alla variabile dove viene memorizzata la varianza