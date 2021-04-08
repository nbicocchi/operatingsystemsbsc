---
author: Nicola Bicocchi
title: Funzioni
institute: DIEF - UNIMORE
theme: Madrid
fontsize: 10pt
colortheme: crane
aspectratio: 169
---

# Risorse di riferimento

* Libro di testo “Programmare in C”
  * Cap. 6 (sezioni 6.1 – 6.5) – Funzioni
  * Cap. 12 (sezioni 12.3, 12.7) – Visibilità e tempo di vita delle variabili
    
# Definizione

* Il C è un *linguaggio procedurale*, basato su procedure o funzioni.
* Una funzione è un un'unità di modularizzazione, un insieme di codice identificata da un nome, che accetta degli input e che restituisce un output.

# Utilizzo

* Attraverso una o un gruppo di funzioni, è possibile: 
  * Distribuire codice a terze parti (librerie)
  * Creare interfacce che disaccoppiano parti di software
  * Riutilizzare lo stesso codice in più parti del programma
  
# Definizione

```c
float area_rettangolo(float base, float altezza) {
    return base * altezza;
}
```

* È necessario definire:
  * il nome della funzione
  * i parametri di input
  * il valore di ritorno
