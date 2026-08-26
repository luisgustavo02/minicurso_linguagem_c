# Tabela ASCII

A tabela ASCII foi construída para que houvesse uma padronização quanto a representação de letras, símbolos, algarismos, sinais de pontuação, controle, etc.

A tabela ASCII mais comum varia entre valores decimais de 0 a 127 ($8\,\mathrm{bits}$), também especificados por valores binários e hexadecimais. Vejamos o trecho da tabela referente aos caracteres alfanuméricos:

| Decimal |  Binário  | Hexadecimal | Referência |
| :------ | :-------- | :---------- | :--------: |
| 48      | 00110000  | 30          | 0          |
| 49      | 00110001  | 31          | 1          |
| 50      | 00110010  | 32          | 2          |
| 51      | 00110011  | 33          | 3          |
| 52      | 00110100  | 34          | 4          |
| 53      | 00110101  | 35          | 5          |
| 54      | 00110110  | 36          | 6          |
| 55      | 00110111  | 37          | 7          |
| 56      | 00111000  | 38          | 8          |
| 57      | 00111001  | 39          | 9          |
| 65      | 01000001  | 41          | A          |
| 66      | 01000010  | 42          | B          |
| 67      | 01000011  | 43          | C          |
| 68      | 01000100  | 44          | D          |
| 69      | 01000101  | 45          | E          |
| 70      | 01000110  | 46          | F          |
| 71      | 01000111  | 47          | G          |
| 72      | 01001000  | 48          | H          |
| 73      | 01001001  | 49          | I          |
| 74      | 01001010  | 4A          | J          |
| 75      | 01001011  | 4B          | K          |
| 76      | 01001100  | 4C          | L          |
| 77      | 01001101  | 4D          | M          |
| 78      | 01001110  | 4E          | N          |
| 79      | 01001111  | 4F          | O          |
| 80      | 01010000  | 50          | P          |
| 81      | 01010001  | 51          | Q          |
| 82      | 01010010  | 52          | R          |
| 83      | 01010011  | 53          | S          |
| 84      | 01010100  | 54          | T          |
| 85      | 01010101  | 55          | U          |
| 86      | 01010110  | 56          | V          |
| 87      | 01010111  | 57          | W          |
| 88      | 01011000  | 58          | X          |
| 89      | 01011001  | 59          | Y          |
| 90      | 01011010  | 5A          | Z          |
| 97      | 01100001  | 61          | a          |
| 98      | 01100010  | 62          | b          |
| 99      | 01100011  | 63          | c          |
| 100     | 01100100  | 64          | d          |
| 101     | 01100101  | 65          | e          |
| 102     | 01100110  | 66          | f          |
| 103     | 01100111  | 67          | g          |
| 104     | 01101000  | 68          | h          |
| 105     | 01101001  | 69          | i          |
| 106     | 01101010  | 6A          | j          |
| 107     | 01101011  | 6B          | k          |
| 108     | 01101100  | 6C          | l          |
| 109     | 01101101  | 6D          | m          |
| 110     | 01101110  | 6E          | n          |
| 111     | 01101111  | 6F          | o          |
| 112     | 01110000  | 70          | p          |
| 113     | 01110001  | 71          | q          |
| 114     | 01110010  | 72          | r          |
| 115     | 01110011  | 73          | s          |
| 116     | 01110100  | 74          | t          |
| 117     | 01110101  | 75          | u          |
| 118     | 01110110  | 76          | v          |
| 119     | 01110111  | 77          | w          |
| 120     | 01111000  | 78          | x          |
| 121     | 01111001  | 79          | y          |
| 122     | 01111010  | 7A          | z          |

Na linguagem C, caso um código deseje mostrar um valor inteiro de um caractere, o valor referido será se correspondente da tabela ASCII. Vejamos no código [`material/cod023.c`](material/cod023.c) abaixo:

```c
#include<stdio.h>

int main(){
    char simb1 = 'R', simb2 = 't', simb3 = '3', simb4 = ' ';

    printf("Simbolo\t| Decimal\t| Hexadecimal\t|\n");
    printf("--------|-----------|---------------|\n");
    printf("%c\t\t| %d\t\t| %x\t\t\t|\n", simb1, simb1, simb1);
    printf("%c\t\t| %d\t\t| %x\t\t\t|\n", simb2, simb2, simb2);
    printf("%c\t\t| %d\t\t| %x\t\t\t|\n", simb3, simb3, simb3);
    printf("%c\t\t| %d\t\t| %x\t\t\t|\n", simb4, simb4, simb4);

    return 0;
}
```

A saída do programa será:

```output
Simbolo	| Decimal	| Hexadecimal	|
--------|-----------|---------------|
R		| 82		| 52			|
t		| 116		| 74			|
3		| 51		| 33			|
 		| 32		| 20			|
```

Relacionando com as operações aritméticas, podemos construir um código em que alteramos o valor de uma variável `char`, de acordo com o arquivo [`material/cod024.c`](material/cod024.c) e sua saída.

```c
#include<stdio.h>

int main(){
    char letra = 's';

    printf("letra: %c\n", letra);
    printf("letra + 1: %c\n", letra + 1);
    printf("letra - 1: %c\n", letra - 1);

    return 0;
}
```

```output
letra: s
letra + 1: t
letra - 1: r
```