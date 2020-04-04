# Esercitazione UNIX #4 - ALP DIEF UNIMORE 
Per utilizzare questa guida con vim utilizzare i seguenti due comandi 

>:set wrap 
>
>:set linebreak
>
>:set number

## Esercizi
01. (es41.sh) Scrivere uno script che prevede 2 parametri. Il primo parametro deve essere il nome assoluto di una directory (D), il secondo (E) deve essere una stringa che può assumere due valori [EQ|NE]. Lo script cerca ricorsivamente in D tutte le directory in cui il numero di file contenuti e il numero di sotto directory contenute sia uguale (se E=EQ) o diverso (se E=NE). 

02. (es42.sh) Scrivere uno script che prevede un numero variabile di parametri. Il primo parametro deve essere un nome relativo semplice (F), mentre gli altri devono essere nomi assoluti di directory (D1, ..., Dn). Per ognuna delle n directory, lo script cerca al loro interno tutti i file leggibili di nome F. Lo script stampa su stdout la somma delle dimensioni dei file trovati sia per ogni directory che globalmente.

03. (es43.sh) Scrivere uno script che prevede un numero variabile di parametri. Il primo parametro deve essere un nome relativo semplice (F), mentre gli altri devono essere nomi assoluti di directory (D1, ..., Dn). Per ognuna delle n directory, lo script cerca al loro interno tutti i file leggibili di nome F la cui dimensione in linee sia maggiore o uguale di 10. Per ogni file trovato, lo script ne riporta la penultima linea all'interno del file /tmp/script.log.

04. (es44.sh) Scrivere uno script che prevede un numero variabile di parametri. Il primo parametro deve essere un nome relativo semplice (F), mentre gli altri devono essere nomi assoluti di directory (D1, ..., Dn). Per ognuna delle n directory, lo script cerca al loro interno tutti i file leggibili di nome F. Per ogni file trovato, lo script ne riporta il nome e la dimensione in bytes e linee all'interno del file /tmp/script.log. Formalismo: nomefile:bytes:linee.

05. (es45.sh) Scrivere uno script che prevede un numero variabile di parametri che rappresentano nomi assoluti di directory (D1, ..., Dn). Per ognuna delle n directory, lo script cerca al loro interno tutti i file leggibili modificati nelle ultime 24h. Per ogni file trovato, lo script ne riporta il nome su stdout e ne crea un link simbolico all'interno della cartella /tmp/links. Per evitare omonimie i link hanno come nomi F.1, F.2, ... ,F.N.
