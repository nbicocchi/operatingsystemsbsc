# Programmazione di Sistema - DIEF/UNIMORE

## Esercizi C (Allocazione dinamica memoria)
Si propone un gruppo di esercizi per imparare ad utilizzare tecniche di allocazione dinamica della memoria.

---

Esercizio 1. Implementare una funzione *reversei* che inverta l’ordine dei valori di un array di dati interi che rispetti il seguente prototipo:

```c
int* reversei(const int *src, unsigned size);
```

dove:

* **src** è il puntatore all’array di input;
* **size** è la dimensione dell’array;
* la funzione ritorna il puntatore all’array invertito, allocato dalla funzione. Ha valore NULL in caso di errore di allocazione.

---

Esercizio 2. Implementare una funzione *reverses* che inverta l’ordine dei caratteri di una stringa C che rispetti il seguente prototipo:

```c
void reverses(char **dst, const char *src);
```

dove:

* **dst** gestisce il puntatore per memorizzare la stringa C invertita, ha valore NULL in caso di errore di allocazione;
* **src** è il puntatore alla stringa in input.

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

