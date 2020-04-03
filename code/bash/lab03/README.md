# Esercitazione UNIX #3 - ALP DIEF UNIMORE 
Per utilizzare questa guida con vim utilizzare i seguenti due comandi 

>:set wrap 
>
>:set linebreak
>
>:set number

## Esercizi
01. (es31.sh) Scrivere uno script che prevede 1 parametro che deve essere il nome assoluto di una directory (D). Lo script deve esplorare ricorsivamente D e stampare, per ogni sottocartella, il livello di profondità raggiunto. D avrà livello 0, le sottocartelle di D avranno livello 1, e così via. Da risolvere sia utilizzando una funzione ricorsiva, che utilizzando il comando find. Nel caso di find, l'opzione -printf può essere utile (vedi manuale).

02. (es32.sh) Scrivere uno script che prevede 2 parametri. Il primo parametro deve essere il nome assoluto di una directory (D), il secondo deve essere una stringa (F), il terzo (N1) ed il quarto (N2) vanno trattati come numeri interi positivi. Lo script cerca ricorsivamente in D tutti i file di nome F la cui lunghezza in linee è compresa fra N1 e N2. 

03. (es33.sh) Scrivere uno script che prevede 2 parametri. Il primo parametro deve essere il nome assoluto di una directory (D), mentre il secondo è un singolo carattere numerico (N). Lo script cerca ricorsivamente in D tutti i file che contengono sia nel nome che nel contenuto N.  

05. (es34.sh) Scrivere uno script che prevede 2 parametri. Il primo parametro deve essere il nome assoluto di una directory (D), mentre il secondo va trattato come un numero intero positivo (N). Lo script cerca ricorsivamente in D tutte le directory che contengono un numero di file (solo file non directory) compreso fra 1 e N. 

06. (es35.sh) Scrivere uno script che prevede 2 parametri. Il primo parametro deve essere il nome assoluto di una directory (D), mentre il secondo va trattato come un numero intero positivo (N). Lo script cerca ricorsivamente in D tutte le directory che contengono almeno un file (solo file non directory) con dimensione in byte maggiore di N. Ordinare (in modo decrescente) le directory trovate in base numero di file che rispettano il criterio specificato sopra.





