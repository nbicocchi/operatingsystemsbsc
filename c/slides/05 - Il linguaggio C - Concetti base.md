# Il linguaggio C – Concetti base



## Il linguaggio C

- È un linguaggio di programmazione general-purpose progettato
    inizialmente da Dennis Ritchie dei Bell Laboratories e implementato nel
    1972. Inventato per sopperire ai limiti del linguaggio B e BCPL
- Nel 1983 il comitato X3J11 dell’American National Standard Institute
    (ANSI) sviluppò il cosiddetto ANSI C o C standard
- Lo standard è stato poi aggiornato nel 1999 con l’introduzione di alcune
    varianti e chiarificazioni. In generale non faremo riferimento a queste
    varianti (soprattutto i variablelengtharray). Ulteriore aggiornamento nel
    2011 con il cosiddetto C11.
- Il linguaggio è di alto livello perché non ha una traduzione «diretta»,
    ovvero 1 a 1, ovvero biunivoca, in linguaggio macchina, a differenza
    dell’assembly.
- È però anche di basso livello perché lo si può utilizzare come una specie
    di assemblypoco più evoluto. Questo modo di usarlo è però poco
    lungimirante e decisamente sconsigliato.


## Un programma C

- Un programma in linguaggio C è composto da alcune parti che possono
    o meno essere presenti e più o meno ripetute e alternate tra loro:
       - dichiarazioni/definizioni (di variabili e funzioni)
       - direttive per il preprocessore
- Ignoriamo per il momento le dichiarazioni che non siano definizioni e
    preprocessore e procediamo ad analizzare le definizioni.
- Abbiamo già visto che cos’è una variabile, ovvero una o più celle di
    memoria al cui indirizzo viene dato un nome simbolico.
- In C ogni variabile può occupare uno o più byte. A differenza di quello
    che facevamo con l’Assembly ADE8, nel momento in cui diamo un nome
    alla locazione di memoria, diciamo anche quanti byte occupa e
    soprattutto quale è il suo tipo, ovvero che cosa c’è dentro e come viene
    codificato.


## I tipi di dati numerici interi

- Esistono 8 tipi di dati interi. La loro definizione da standard è molto
    flessibile e consente ai diversi produttori di fare quello che vogliono. Per
    chiarezza però noi faremo riferimento sempre a queste definizioni:
- In realtà le regole sui nomi dei tipi interi sono leggermente più
    complesse, ma le approfondiremo nel seguito, eventualmente.

```
Nome Dimensione Descrizione
char 1 byte intero con segno a 8 bit
unsigned char 1 byte intero senza segno a 8 bit
short 2 byte intero con segno a 16 bit
unsigned short 2 byte intero senza segno a 16 bit
int 4 byte intero con segno a 32 bit
unsigned int 4 byte intero senza segno a 32 bit
long long 8 byte intero con segno a 64 bit
unsigned long long 8 byte intero senza segno a 64 bit
```

## I tipi di dati numerici in virgola mobile

- Esistono 2 tipi di dati numerici in virgola mobile:
- Questi valori numerici sono codificati secondo lo standard IEEE 754-
    1985, ovvero quello che abbiamo utilizzato durante le lezioni iniziali del
    corso.

```
Nome Dimensione Descrizione
float 4 byte numeroin virgola mobile a 32 bit
double 8 byte numeroin virgola mobile a 64 bit
```

## Definizione di variabili

- Con definizione di variabile, si intende il modo con cui in un file che
    segue la sintassi del linguaggio C viene richiesto di riservare memoria
    per contenere un certo dato e gli viene assegnato un nome simbolico.
- La sintassi per definire una variabile in C è:

< _tipo_ > _<nome variabile>_ **;**

- Notate che prima di tutto si esprime il tipo del dato che richiediamo, poi
    gli assegniamo un nome, poi chiudiamo la definizione con un punto e
    virgola.
- In C il punto e virgola viene utilizzato in diversi punti del linguaggio per
    indicare la fine della «cosa» che si sta facendo. In questo caso la fine
    della definizione.
- Il tipo può essere una delle parole riservate indicate precedentemente.
    Vedremo in seguito altri tipi più complessi.


## Esempi di definizioni

- Vediamo alcune definizioni di variabili:

char c;

short s;

int i;

long long numero;

float f;

double radice;

- Come vedete, deciso il tipo, bisogna scegliere un nome per fare
    riferimento alla variabile.
- Quali sono i nomi validi?


## Identificatori

- In C gli identificatori utilizzabili per dare un «nome» a qualcosa possono
    contenere qualsiasi combinazione di:
       - lettere maiuscole e minuscole
       - numeri
       - il carattere «_», detto underscoreo sottotratto.
- L’unico ulteriore vincolo è che non possono cominciare con un numero.
- Infatti le sequenze che iniziano con un numero sono costantio letterali
    numeriche. Le costanti numeriche possono essere:
       - decimali: cominciano con una cifra da 1 a 9 e proseguono con altre cifre da 0
          a 9.
       - ottali: cominciano con 0 e proseguono con altre cifre da 0 a 7.
       - esadecimali: cominciano con «0x» o «0X» e proseguono con altre cifre da 0
          a 9 e con le lettere (maiuscole o minuscole) da «A» a «F».
- Identificatori corretti: test, mia_var, var001, var002, _pippo, a_3f4_5.
- Valori corretti: 23, 45, 065 (questo è il numero 53), 0xff (questo è il
    numero 255), 0X32 (questo è il numero 50).


## Letterali numerici

- Col termine letterale si intende un valore costante del C.
- Per i tipi numerici esistono i letterali di tipo int che abbiamo appena visto:
    - Decimali: 123, 245681, ecc...
    - Ottali: 0123, 02456, ecc...
    - Esadecimali: 0x123, 0x245abc, ecc...
- Ma con il suffisso «u» è possibile specificare che il loro tipo è unsigned
    int, quindi 123u è di tipo unsigned int.
- Esistono inoltre i letterali di tipo double, definiti dalla presenza di un
    punto decimale:
       - 123. è un double, come anche 123.0 e come 123.
- È inoltre possibile utilizzare la notazione esponenziale o scientifica e
    aggiungere al numero una «E» o «e», seguita dall’esponente:
       - 1.23e2, oppure 123.e-2 oppure 12e
- Se si vuole un letterale di tipo float, è necessario usare il suffisso «f»:
    - 1.23e2f, oppure 12.f, oppure 0.12345f


## Altri letterali

- Come già visto nel processore ADE8, i caratteri della tabella ASCII sono
    scomodi da utilizzare col loro valore numerico.
- Anche il C permette di inserire quei numeri come simboli digitati
    direttamente da tastiera includendoli in apici singoli:
       - Il valore 0x30 si può scrivere '0',
       - il valore 0x41 si può scrivere 'A',
       - oppure il valore 0x61 si può scrivere 'a'.
- Tutte le espressioni tra '(singolo apice) sono ancora di tipo int (non
    sono char!).
- E se voglio inserire un carattere non presente sulla tastiera? Oppure un
    "a capo"?
- Bisogna utilizzare un codice di escapeovvero un carattere speciale che
    indica un caso particolare.
- Nei letterali tra singoli apici il codice di escapeè il carattere \(backslash),
    che viene poi seguito da codici specifici.
- Vediamo quali sono questi codici.


## Sequenze di escape

- Ecco le principali sequenze di escape:
- È interessante notare ad esempio che il valore 10 può essere scritto
    come 10, 012, 0x0a, '\n', '\12', o anche '\x0a'.
- Il charche vale 0 (NUL nella tabella ASCII) può essere scritto come 0,
    0x0, 0x00, 0x000, ..., 0x00000000, '\0', '\00', '\000', ‘\0x0', ‘\0x00', ...

```
Sequenza di escape Valore Significato
\t 0x09 Tabulazione
\n 0x0A A capo (LF)
\r 0x0D Torna a inizio riga (CR)
\" 0x22 Doppie virgolette
\' 0x27 Singolo apice
\\ 0x5C Backslash
\ num Qualsiasi Il numero num interpretato come ottale
\x num Qualsiasi Il numero num interpretato come esadecimale
```

## Inizializzazione di variabili

- Di default, le variabili non hanno un valore predefinito, quindi bisognerà
    successivamente eseguire comandi per assegnargli qualcosa.
- È possibile anche inizializzare una variabile, in modo che all’avvio del
    programma (o meglio all’inizio della loro «vita») abbia un valore preciso:

< _tipo_ > _<nome-varibile>_ **=** < _espressione_ > **;**

- Notate la differenza concettuale con quello che accade nell’assembly di
    ADE8: qui la definizione riserva uno spazio di memoria ed è opzionale
    inizializzare con un valore.
- In ADE8 invece il numero veniva messo in memoria e quindi aveva un
    suo indirizzo ed era opzionale dargli un nome.
- Che cosa si intende con espressione in C?


## Espressioni del linguaggio C

- Uno degli elementi fondamentali del C sono le sue espressioni. Ne
    esistono diverse, ma le più semplici possono essere descritte con poche
    regole:
       - Un <letterale>è un’espressione.
       - Un <identificatore>è un’espressione.
       - La combinazione
          <espressione> <operatore-binario> <espressione>
          è un’espressione.
       - La combinazione
          <operatore-unario-prefisso> <espressione>
          è un’espressione.
       - La combinazione
          <espressione> <operatore-unario-postfisso>
          è un’espressione.
       - La combinazione **(** <espressione> **)** è un’espressione.
- Queste regole non sono esaustive, ma ci consentono di proseguire e di
    analizzare diverse combinazioni.


## Tipo e valore di un’espressione

- Le espressioni possono avere un valore e in questo caso hanno anche
    un tipo associato. Quindi ci si può chiedere: «Quanto valequesta
    espressione?»
- Le espressioni possono anche avere un effetto, ovvero ci si può chiedere
    «Che cosa faquesta espressione?».
- (Purtroppo) il C consente di avere tutte le combinazioni. Partiamo dal
    caso semplice, ovvero espressioni che valgono qualcosa e non fanno
    niente. Le tre espressioni seguenti:
       21 numero 3.7f
hanno un valore (e un tipo), ma non «fanno» nulla. La prima è di tipo
int, la seconda (facendo riferimento alla definizione data a pag. 7) è di
tipo long long, mentre la terza è di tipo float.


## Esempi di definizioni con inizializzazione

- Vediamo di aggiungere una inizializzazione alle definizioni precedenti:

char c = 21;

short s = 0xffff;

int i = '7';

long long numero = 1234567890123;

float f = 3.141592f;

double radice = 1.4142135623730950488016887242097;

- In questo modo la memoria allocata per la variabile viene anche riempita
    con un valore iniziale durante la sua creazione (detta anche allocazione).
- Notate che per ora abbiamo utilizzato solo espressioni composte da
    letterali.


## Variabili di sola lettura

- È possibile specificare che la variabile in memoria potrà essere solo letta,
    ovvero che è una variabile read-only, tramite la parola riservata const.

**const** < _tipo_ > _<nome-varibile>_ **=** < _espressione_ > **;**

- Questa variabile è identica alle altre (ha un tipo, una locazione di
    memoria e viene inizializzata), se non per il fatto che nessun comando
    successivo potrà modificarne il valore.
- Tecnicamente la parola chiave constpotrebbe anche essere posta dopo
    il tipo, ma è molto inusuale e sconsigliabile per gli studenti.
- Attenzione! Questa non è una costante(nonostante il nome lo ricordi
    chiaramente). Non può essere usata dove è indispensabile avere una
    espressione costante. Semplicemente non è possibile assegnare a
    questa variabile un valore diverso durante l’esecuzione del programma.
- Ad esempio:

const double pi_greco = 3.141592653589793238462643383;


## Definizione di più variabili nella stessa linea

- È possibile anche definire più variabili assieme per avere una scrittura
    più compatta. La sintassi è:

< _tipo_ > _<nome-var- 1 >, <nome-var-2>,_ ... _, <nome-var-N>_ **;**

- In pratica, si scrive il tipo una sola volta e si elencano di seguito le
    variabili che si intende definire. È inoltre possibile aggiungere o meno
    una inizializzazione ad ogni variabile.
- Vediamo qualche esempio:

int i, j, k;

char a = 9, b = 23, c = 12;

short s1, s2 = 33, s3;


## Le funzioni

- Un programma C è costituito di tanti sottoprogrammi detti funzioni. Una
    funzione è l’unico «posto» in cui è possibile mettere comandi in
    linguaggio C.
- La forma più generale di una definizione di funzione è:

_<tipo-di-ritorno> <nome-funzione>_ **(** _<parameteri>_ **) {**

```
<comandi>
```
**}**

- In questa definizione è importante notare due elementi: le parentesi
    tonde aperte e chiuse e le parentesi graffe aperte e chiuse.
- Le parentesi tonde permettono di distinguere tra la definizione di una
    funzione e quella di una variabile: appena in una definizione si vede
    aprire una parentesi tonda, sappiamo che questa è una funzione.
- Le parentesi graffe invece segnalano la presenza di un blocco di
    comandi. Devono essere obbligatoriamente presenti.


## Le funzioni

- Con parametrisi intendono delle variabili temporanee che nascono con
    la funzione e servono per fornire informazioni alla funzione. I parametri
    dovranno poi essere inizializzati esternamente per utilizzare la funzione.
- La più semplice (e raramente utilizzata) definizione di una funzione è la
    seguente:

**void** _nomeFunzione_ **( void ) {**

```
<comandi>
```
**}**

- La parola riservata void indica una «assenza» e in particolare l’assenza
    di un tipo di ritorno (cioè la funzione non restituisce nulla) e l’assenza di
    parametri (la funzione non riceve informazioni dall’esterno).


## La funzione main

- Noi lavoreremo sempre con programmi scritti in linguaggio C in un
    ambiente «ospitato» (hosted), ovvero con un Sistema Operativo che si
    occupa di gestire il caricamento del nostro programma.
- Per questo motivo è importante che sia chiaro al Sistema Operativo
    quale è la prima funzione da eseguire all’interno di un programma C.
- La funzione si chiama main e deve avere la seguente forma:

**int main(void)**

**{**

```
< comandi >
```
**}**

- Esiste anche un’altra forma standard del mainche consente di ricevere i
    parametri dalla linea di comando, ma la vedremo successivamente.
- All’interno di questa funzione, come nelle altre, è possibile utilizzare dei
    comandi C, in inglese statement.


## Il return statement

- Come visto, una funzione può restituire un valore (del tipo specificato
    prima del nome) oppure no (in questo caso si indica void).
- Il primo statement (il primo comando C) che vediamo è return.
- La sintassi è

```
return <espressione> ;
```
- Se la funzione restituisce un valore, questo deve essere passato come
    parametro del comando return(l’espressione indicata). Se la funzione
    non restituisce nulla (void), l’espressione può essere omessa:
       **return ;**
- Quando viene eseguito il comando return, la funzione termina e ritorna al
    chiamante (analogo all’istruzione RET di ADE8).
- Se una funzione raggiunge la } esegue un return implicito senza
    parametri. Ovviamente questo ha senso solo nelle funzioni che hanno
    tipo di ritorno void.


## Il primo programma in C

- Ecco il nostro primo programma, che è anche il programma minimo che
    si possa realizzare in C:

int main(void)

{

```
return 0;
```
}

- Questo programma non fa ovviamente nulla, ma non ha errori: contiene
    la funzione main, questa è correttamente definita (non accetta parametri
    e ritorna un int), contiene il comandoreturn che imposta il valore di
    ritorno (in questo caso a 0, un valore classico per dire «programma
    terminato correttamente»).
- Notate che non è possibile terminare la funzione senza che venga
    impostato il valore di ritorno.
- Iniziamo ora a vedere altri comandi per fare qualcosa di utile!


## Expression Statement

- Esistono numerosi comandi in C e li introdurremo progressivamente
    durante il corso.
- Lo statement più comune è quello costituito da una espressione seguita
    da un punto e virgola, che ne indica la fine.

```
< espressione > ;
```
- Dice che l’espressione deve essere valutata, ovvero che bisogna
    eseguire quanto indicato.
- Sintatticamente l’espressione può essere qualsiasi, ma di norma, perché
    questo comando abbia senso, deve essere un’espressione con un effetto
    sulle variabili coinvolte (side effect), altrimenti si esegue un calcolo il cui
    risultato viene buttato.
- Per fare questo, iniziamo a vedere alcuni operatori, che ci consentono di
    comporre espressioni che oltre a valere qualcosa, facciano qualcosa.


## L’assegnamento

- L’operatore più utilizzato è certamente l’assegnamento, ovvero un
    operatore binario che prende il valore a destra e lo scrive in memoria in
    quello di sinistra.
- La forma più generale di assegnamento è

< _lvalue_ > **=** < _rvalue_ >

- rvaluee lvalue sono due espressioni, ovvero due sequenze di simboli
    che rispettano la grammatica del C e che hanno un significato logico
    all’interno del programma.
- La sintassi del C prevede diverse regole per la scrittura di espressioni,
    ma quello che dobbiamo intanto distinguere è che alcune espressioni
    hanno uno spazio di memoria associato, mentre altre no. Le espressioni
    che hanno uno spazio di memoria associato sono dette lvalue. Ogni
    lvalue può essere utilizzato dove è previsto un rvalue, dato che da una
    espressione in memoria si può leggere il corrispondente valore.


## Esempi elementari di assegnamento

- Ecco alcuni esempi elementari di assegnamento utilizzati in un
    programma C:

char x;

char y;

char z;

int main(void) {

x = 3;
y = x;
z = 0xf5;
x = z;
return 0;
}

```
Questo è un expressionstatement:
l’espressione è «x = 3», seguita dal
«;» che indica la fine dello statement.
L’assegnamento è un operatore che
ha un effetto su x, infatti ne cambia il
valore.
```
```
Tre definizioni di variabili
Definizione di una funzione
```
```
x è un lvalue, possiede infatti un
indirizzo in memoria in cui possiamo
inserire valori.
3 invece è un rvalueperché vale 3, ma
non corrisponde ad una cella di
memoria.
Sarebbe un grave errore scrivere «3 =
x», perché tenteremmo di leggere il
Questo è un return statement. contenuto di x e metterlo in 3!?
```

## Operatori

- Il C è particolarmente ricco di operatori, ovvero di simboli che vengono
    tradotti in istruzioni del processore per cui realizziamo il codice
    macchina, ovvero il nostro programma.
- Vediamo quelli aritmetici elementari che potremo usare sui tipi di dato
    interi e in virgola mobile:
- Gli operatori aritmetici binari fondamentali sono:
    - Somma: **+**
    - Sottrazione: **-**
    - Prodotto: *****
    - Quoziente: **/**
    - Resto o Modulo: **%** (solo per numeri interi)
- Ci sono due operatori unari (o monadici) aritmetici:
    - Segno positivo: **+** (implicito e sostanzialmente inutile)
    - Segno negativo: **-**


## Esempi di assegnamento ed espressioni

- Ecco alcuni esempi utilizzati in un programma C:

int x;

int y;

int z;

int t = 5;

int main (void) {

x = 3;
y = x + 5;
z = y * 3 + 2;
x = 2 + y * 3;
y = x / -t;
z = x % -t;
return 0;
}


## Precedenza degli operatori

- Nelle espressioni precedenti, abbiamo visto due espressioni equivalenti:

```
y * 3 + 2
2 + y * 3
```
- Entrambe eseguono prima la moltiplicazione del valore di y per 3 e poi la
    somma con due. Questo non ci sorprende, dato che è anche quello che
    avviene nella usuale notazione matematica utilizzata in analisi.
- La motivazione è che l’operatore * ha precedenza più alta rispetto al +.
- È possibile fare una tabella delle precedenze che consenta di risolvere
    eventuali incertezze:
- Per questo motivo ha senso anche l’espressione x/-tche indica di
    effettuare prima il negato di t e poi la divisione tra x e questo valore.

```
Precedenza Operatori
1 + -(unari)
2 * / %
3 + -(binari)
```
