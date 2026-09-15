# Strings

Na aula anterior, vimos que vetores armazenam vários valores de um mesmo tipo e comentamos que vetores de caracteres funcionam de um jeito um pouco diferente. Chegou a hora de entender o porquê.

Uma *string* é um texto, ou seja, uma cadeia (sequência) de caracteres. Enquanto um caractere é escrito entre aspas simples (`'R'`), uma string é escrita entre aspas duplas (`"Recife"`). A linguagem C não possui um tipo próprio para strings: internamente, **uma string é um vetor de `char`**.

## Declaração e o caractere `'\0'`

Para declarar uma string, usamos a mesma ideia dos vetores:

```
char <nome_da_string>[TAMANHO];
char <nome_da_string>[] = "texto";
```

Vejamos como a string `"Recife"` fica armazenada na memória:

| Posição  |   0   |   1   |   2   |   3   |   4   |   5   |   6    |
| -------- | :---: | :---: | :---: | :---: | :---: | :---: | :----: |
| Conteúdo | `'R'` | `'e'` | `'c'` | `'i'` | `'f'` | `'e'` | `'\0'` |

Repare que a palavra tem 6 letras, mas o vetor ocupa 7 posições. Toda string termina com o caractere especial `'\0'` (caractere nulo, de valor $0$ na [tabela ASCII](../aula02/tabela_ascii.md)), que indica ao computador onde o texto acaba. Por isso, **uma string de tamanho $N$ comporta no máximo $N-1$ caracteres**.

Como o fim é marcado pelo `'\0'`, podemos percorrer a string com um `while` até encontrá-lo, conforme o código [`material/cod036.c`](material/cod036.c):

```c
#include<stdio.h>

int main(){
    char cidade[] = "Recife";
    int i = 0;

    // Percorre a string ate encontrar o caractere nulo
    while (cidade[i] != '\0'){
        printf("cidade[%d] = '%c' (ASCII %d)\n", i, cidade[i], cidade[i]);
        i++;
    }

    printf("cidade[%d] = '\\0' (ASCII %d)\n", i, cidade[i]);
    printf("A string \"%s\" ocupa %d bytes na memoria\n", cidade, (int) sizeof(cidade));

    return 0;
}
```

Assim, nossa saída é:

```output
cidade[0] = 'R' (ASCII 82)
cidade[1] = 'e' (ASCII 101)
cidade[2] = 'c' (ASCII 99)
cidade[3] = 'i' (ASCII 105)
cidade[4] = 'f' (ASCII 102)
cidade[5] = 'e' (ASCII 101)
cidade[6] = '\0' (ASCII 0)
A string "Recife" ocupa 7 bytes na memoria
```

Um cuidado importante: a atribuição com `=` só funciona **na declaração**. Depois disso, o compilador acusa erro:

```c
char cidade[10];
cidade = "Recife";   // ERRO! Nao e possivel atribuir uma string assim
```

Para alterar o conteúdo de uma string já declarada, usamos a função `strcpy()`, que veremos a seguir.

## Funções da biblioteca `string.h`

Na [aula 01](../aula01/bibliotecas_basicas.md), listamos as funções da biblioteca `string.h`. As mais utilizadas são:

- `strlen(str)`: Retorna a quantidade de caracteres da string, **sem contar** o `'\0'`.
- `strcpy(destino, origem)`: Copia a string `origem` para `destino`, apagando o que havia antes.
- `strcat(destino, origem)`: Concatena (cola) `origem` no final de `destino`.
- `strcmp(str1, str2)`: Compara as duas strings, caractere por caractere.

O retorno da `strcmp()` segue a regra abaixo:

| Retorno       | Significado                                         |
| ------------- | --------------------------------------------------- |
| `0`           | As strings são iguais                               |
| Menor que `0` | `str1` vem antes de `str2` na ordem da tabela ASCII  |
| Maior que `0` | `str1` vem depois de `str2` na ordem da tabela ASCII |

Alguns materiais afirmam que o retorno é exatamente `-1` ou `1`, mas a linguagem só garante o **sinal** do valor. Por isso, sempre compare com `< 0` e `> 0`. Além disso, como a comparação usa a tabela ASCII, `"Zebra"` vem antes de `"abacaxi"`, já que `'Z'` ($90$) é menor que `'a'` ($97$).

Vejamos essas funções em ação no código [`material/cod037.c`](material/cod037.c):

```c
#include<stdio.h>
#include<string.h>

int main(){
    char nome[30] = "Linguagem";
    char complemento[] = " C";
    char copia[30];

    // strlen: quantidade de caracteres (sem contar o '\0')
    printf("strlen(\"%s\") = %d\n", nome, (int) strlen(nome));

    // strcpy: copia a segunda string para a primeira
    strcpy(copia, nome);
    printf("copia = %s\n", copia);

    // strcat: cola a segunda string no final da primeira
    strcat(nome, complemento);
    printf("nome = %s\n", nome);

    // strcmp: compara as strings caractere por caractere (tabela ASCII)
    char fruta1[] = "abacaxi";
    char fruta2[] = "banana";
    int resultado = strcmp(fruta1, fruta2);

    if (resultado < 0){
        printf("%s vem antes de %s\n", fruta1, fruta2);
    }
    else if (resultado > 0){
        printf("%s vem depois de %s\n", fruta1, fruta2);
    }
    else{
        printf("As strings sao iguais\n");
    }

    return 0;
}
```

Saída:

```output
strlen("Linguagem") = 9
copia = Linguagem
nome = Linguagem C
abacaxi vem antes de banana
```

Dois alertas sobre essas funções:

- `strcpy()` e `strcat()` **não verificam** se o destino tem espaço suficiente. Garantir isso é responsabilidade de quem programa. Por isso, declaramos `nome[30]` mesmo guardando apenas `"Linguagem"`. As versões `strncpy()` e `strncat()` permitem limitar a quantidade de caracteres copiados.
- Não use `==` para comparar strings. `if (fruta1 == fruta2)` compila, mas **não compara o texto** (entenderemos o motivo em [ponteiros](ponteiros.md)). Use sempre `strcmp()`.

## Leitura de strings

Ler textos do teclado é uma das partes que mais gera dúvidas. Temos três formas principais:

- `scanf("%s", texto)`: Lê somente até o primeiro espaço. Se o usuário digitar `Maria Silva`, apenas `Maria` será armazenado.
- `scanf(" %[^\n]", texto)`: Lê tudo até o `ENTER`, incluindo espaços. O trecho `[^\n]` significa "qualquer caractere, exceto a quebra de linha".
- `fgets(texto, tamanho, stdin)`: Também lê a linha inteira, mas **guarda o `'\n'`** no final da string.

Perceba que, no `scanf()`, **não usamos `&`** antes do nome da string. Isso também será explicado em [ponteiros](ponteiros.md).

Para evitar que o usuário digite mais caracteres do que a string comporta, podemos limitar a leitura: para `char nome[20]`, usamos `%19s` ou `%19[^\n]`, reservando a última posição para o `'\0'`.

Vejamos o código [`material/cod038.c`](material/cod038.c):

```c
#include<stdio.h>
#include<string.h>

int main(){
    char primeiro_nome[20];
    char nome_completo[50];
    char cidade[30];

    // %s le somente ate o primeiro espaco
    printf("Digite seu primeiro nome: ");
    scanf(" %19s", primeiro_nome);

    // %[^\n] le tudo ate o ENTER (inclusive espacos)
    printf("Digite seu nome completo: ");
    scanf(" %49[^\n]", nome_completo);

    // Descarta o ENTER que o scanf deixou para tras
    getchar();

    // fgets tambem le a linha inteira, mas guarda o '\n' no final
    printf("Digite sua cidade: ");
    fgets(cidade, 30, stdin);

    // Remove o '\n' trocando-o por '\0'
    int tamanho = strlen(cidade);
    if (tamanho > 0 && cidade[tamanho - 1] == '\n'){
        cidade[tamanho - 1] = '\0';
    }

    printf("\nPrimeiro nome: %s\n", primeiro_nome);
    printf("Nome completo: %s\n", nome_completo);
    printf("Cidade: %s\n", cidade);

    return 0;
}
```

Exemplo de execução:

```output
Digite seu primeiro nome: Maria
Digite seu nome completo: Maria Clara Souza
Digite sua cidade: Jaboatao dos Guararapes

Primeiro nome: Maria
Nome completo: Maria Clara Souza
Cidade: Jaboatao dos Guararapes
```

Algumas observações sobre o código:

- O espaço antes do `%` (como já fizemos nas aulas anteriores) descarta espaços e `ENTER`s que sobraram no teclado.
- O `scanf()` deixa o `ENTER` para trás. O `fgets()` leria esse `ENTER` e terminaria sem esperar o usuário, por isso usamos `getchar()` para descartá-lo antes.
- Em alguns materiais, você verá `fflush(stdin)` para "limpar o teclado". Isso funciona em alguns compiladores do Windows, mas não faz parte do padrão da linguagem C e não funciona em outros sistemas. Prefira o espaço antes do `%` e o `getchar()`.

## Manipulando caracteres

Como uma string é um vetor, podemos acessar e alterar cada caractere individualmente. Lembrando da [tabela ASCII](../aula02/tabela_ascii.md), as letras minúsculas e maiúsculas estão separadas por $32$ posições (`'a'` é $97$ e `'A'` é $65$). Assim, para converter uma letra para maiúscula, podemos fazer:

```c
if (letra >= 'a' && letra <= 'z'){
    letra = letra - 32;   // ou letra - ('a' - 'A')
}
```

A biblioteca `ctype.h` já oferece as funções `toupper()` e `tolower()` para isso. No código [`material/cod039.c`](material/cod039.c), convertemos uma frase para maiúsculas e contamos suas vogais:

```c
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char frase[100];
    int i, vogais = 0;

    printf("Digite uma frase: ");
    scanf(" %99[^\n]", frase);

    int tamanho = strlen(frase);

    for (i=0; i<tamanho; i++){
        char letra = tolower(frase[i]);

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            vogais++;
        }

        // Converte cada caractere para maiusculo
        frase[i] = toupper(frase[i]);
    }

    printf("Em maiusculas: %s\n", frase);
    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}
```

Exemplo de execução:

```output
Digite uma frase: Linguagem C no DADES
Em maiusculas: LINGUAGEM C NO DADES
Quantidade de vogais: 7
```

## Vetor de strings

Se uma string é um vetor de `char`, então um vetor de strings é uma **matriz** de `char`. Na declaração `char nomes[3][20]`, temos 3 strings, cada uma com até 19 caracteres. Para acessar a string inteira, usamos apenas o primeiro índice (`nomes[i]`); para acessar um caractere específico, usamos os dois (`nomes[i][j]`).

Também é possível inicializar na declaração:

```c
char dias[][10] = {"domingo", "segunda", "terca"};
```

Vejamos o código [`material/cod040.c`](material/cod040.c):

```c
#include<stdio.h>
#include<string.h>

int main(){
    char nomes[3][20];
    int i;

    for (i=0; i<3; i++){
        printf("Digite o nome %d: ", i+1);
        scanf(" %19[^\n]", nomes[i]);
    }

    printf("\nNomes cadastrados:\n");
    for (i=0; i<3; i++){
        printf("%d. %s (%d caracteres)\n", i+1, nomes[i], (int) strlen(nomes[i]));
    }

    return 0;
}
```

Exemplo de execução:

```output
Digite o nome 1: Ana
Digite o nome 2: Joao Pedro
Digite o nome 3: Luiza

Nomes cadastrados:
1. Ana (3 caracteres)
2. Joao Pedro (10 caracteres)
3. Luiza (5 caracteres)
```