# Esercitazione UNIX #4 - ALP DIEF UNIMORE 
Per utilizzare questa guida con vim utilizzare i seguenti due comandi 

>:set wrap 
>
>:set linebreak
>
>:set number

## Esercizi
02. (es42.sh) Scrivere uno script che prevede 2 parametri. Il primo parametro deve essere il nome assoluto di una directory (D), il secondo deve essere una stringa (S). Lo script cerca ricorsivamente in D tutte le directory che contengono almeno un file che contiene S. Lo script riporta il nome assoluto delle directory trovate su stdout e la somma globale dei file identificati. 

02. (es43.sh) Scrivere uno script che prevede 2 parametri. Il primo parametro deve essere il nome assoluto di una directory (D), il secondo (E) deve essere una stringa che può assumere due valori [EQ|NE]. Lo script cerca ricorsivamente in D tutte le directory in cui il numero di file contenuti e il numero di sotto directory contenute sia uguale (se E=EQ) o diverso (se E=NE). 

04. (es44.sh) Scrivere uno script che prevede un numero variabile di parametri. Il primo parametro deve essere un nome relativo semplice (F), mentre gli altri devono essere nomi assoluti di directory (D1, ..., Dn). Per ognuna delle n directory, lo script cerca al loro interno tutti i file leggibili di nome F. Lo script stampa su stdout la somma delle dimensioni dei file trovati sia per ogni directory che globalmente.

05. (es45.sh) La parte in Shell deve prevedere un numero variabile di parametri (maggiore o uguale a 3): il primo parametro deve essere il nome relativo semplice D di una directory, mentre gli altri N devono essere nomi assoluti di direttori (G1, G2, ..., Gn). Per ognuna della N gerarchie Gi, il programma deve cercare tutte le directory con nome relativo D. Per ognuna di tali directory, il programma deve cercare tutti i file leggibili F. Per ogni file F, il programma deve identificare la terzultima linea e riportarla all'interno di un nuovo file (F.line). In caso il file F abbia meno di tre linee, il programma deve creare un file vuoto (F.noline). Al termine della ricerca ricorsiva, va riportato su stdout il numero complessivo dei file creati seguito dal suo contenuto. In caso il file sia vuoto (.noline) va riportata, al posto del contenuto, la stringa "empty".

06. (es46.sh) La parte in Shell deve prevedere un numero variabile di parametri (maggiore o uguale a 3): il primo parametro deve essere un numero strettamente positivo M, mentre gli altri N devono essere nomi assoluti di direttori (G1, G2, ..., Gn). Per ognuna della N gerarchie Gi, il programma deve cercare tutte le directory che contengono almeno un file con un numero di linee pari ad M. Per ognuna di tali directory, il programma deve cercare tutti i file leggibili F. Per ogni file F, il programma deve identificare la terzultima linea e riportarla all'interno di un nuovo file (F.line). In caso il file F abbia meno di tre linee, il programma deve creare un file vuoto (F.noline). Al termine della ricerca ricorsiva, va riportato su stdout il numero complessivo dei file creati seguito dal suo contenuto. Il caso il file sia vuoto (.noline) va riportata, al posto del contenuto, la stringa "empty". 

07. (es47.sh) La parte in Shell deve prevedere un numero variabile di parametri (maggiore o uguale a 3): il primo parametro deve essere il nome relativo semplice F di un file, mentre gli altri N devono essere nomi assoluti di direttori (G1, G2, ..., Gn) all'interno del file system. Per ognuna della N gerarchie Gi, il programma deve esplorare la gerarchia corrispondente e cercare tutti i file leggibili il cui nome sia F ed il cui contenuto sia di almeno 5 lineee. Il programma deve salvare la lista dei file trovati e il loro numero di linee in un file temporaneo (e.g., nomefile;nlinee). Al termine della ricerca ricorsiva, il programma deve mostrare il numero totale di file trovati e l'ultima linea di tutti i file con un numero di linee maggiore di 5.
