---
author: Nicola Bicocchi
title: Variabili
institute: DIEF - UNIMORE
theme: Madrid
fontsize: 10pt
colortheme: crane
aspectratio: 169
---

# I tipi di dati numerici interi

*  Esistono 8 tipi di dati interi. La loro definizione da standard è molto flessibile e consente ai diversi produttori di fare quello che vogliono. Per chiarezza, faremo riferimento a queste definizioni.

  | **Nome** | **Dimensione** | **Descrizione** |
  | -------- | -------------- | --------------- |
  |    char      | 1 byte | intero con segno 8bit |
  | unsigned char | 1 byte | intero senza segno 8bit |
  | short | 2 byte | intero con segno 16bit |
  | unsigned short | 2 byte | intero senza segno 16bit |
  | int | 4 byte | intero con segno 32bit |
  | unsigned int | 4 byte | intero senza segno 32bit |
  | long long | 8 byte | intero con segno 64bit |
  | unsigned long long | 8 byte | intero senza segno 64bit |


# Variabili

```c
#include<stdio.h>
int main() {
	int base = 5; int altezza = 4; int area;

	area = base * altezza / 2;
	printf(“Area: %d”, area);
	return 0;
}
```
**int base = 5; int altezza = 4; int area = 0;**

* È una dichiarazione. base, altezza, area sono nomi di variabili. Le variabili
rappresentano simbolicamente i dati all’interno dei programmi.
* Una variabile identifica una locazione (posizione) della memoria in cui può essere memorizzato un dato a cui il programma può accedere.


# Proprietà delle Variabili

**int area = 0;**

* **Nome**: identifica la variabile. E’ un identificatore C: sequenza di lettere, cifre, _ che non inizia con una cifra (es. a123b e _as_231 lo sono, 1ab no).
* **Tipo**: specifica il tipo del dato. Esempio: int area specifica il fatto che area rappresenta un valore intero.
* **Indirizzo**: della cella di memoria che contiene il dato. Se il dato occupa più celle, questo è memorizzato in celle consecutive e l’indirizzo è quello della prima cella.
* **Valore**: dato rappresentato dalla variabile in certo momento dell’esecuzione. Può cambiare (variabile) durante l’esecuzione.
