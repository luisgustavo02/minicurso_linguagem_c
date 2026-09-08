# Estruturas de Repetição

Dado os conceitos de estruturas condicionais, vemos agora as estruturas de repetição, com o intuito de evitar a escrita excessiva de linhas. Ambas as estrutras podem se combinar para formar um código poderosíssimo.

Para isso, temos 3 estruturas de repetição na linguagem C:

- `for`
- `while`
- `do while`

## Estrutura do `for`

O funcionamento do `for` se dá por meio da definição, condição de continuidade e operação com um ou mais variáveis. Usualmente é feito da seguinte forma:

```
for (definição; condição de continuidade; acréscimo ou decréscimo){
    Bloco de comando
}
```

Vamos pegar o código [`material/cod029.c`](material/cod029.c) como exemplo, onde o objetivo é mostrar na tela números de $1$ até $N$.

```c
#include<stdio.h>

int main(){
    int i, N;

    printf("Digite um numero N: ");
    scanf(" %d", &N);

    // A operacao i++ aumenta 1 unidade por iteração ou ciclo
    for (i=0; i<N; i++){
        printf("%d\n", i+1);
    }
    return 0;
}
```

O `for` é bastante utilizado quando temos um começo e fim bem definido, seja para ciclos crescentes ou decrescentes.

## Estrutura do `while`

Diferente do `for`, o `while` é mais simples e necessita somente da condição de continuidade, como podemos observar no pseudocódigo abaixo:

```
while (condicao){
    Bloco de comando
}
```

É importante notar que, caso ocorra uma falta de atenção, o ciclo `while` pode se tornar um ciclo infinito, ocasionando um erro de ciclo infinito.

Assim, como material de exemplo, temos o código [`material/cod030.c`](material/cod030.c), mostrado abaixo:

```c
#include<stdio.h>

int main(){
    int i=0, N;

    printf("Digite um numero inteiro: ");
    scanf(" %d", &N);

    while (i<N){
        printf("%d\n", i+1);
        i++;
    }

    return 0;
}
```

## Estrutura do `do while`

O `do while` funciona de uma forma muito similar ao `while`, com uma única diferença: Enquanto no `while` a condição de continuidade é verificada no início do ciclo, no `do while` a condição é verificada ao final. Assim, temos o pseudocódigo:

```
do{
    Bloco de comando
}while (Condição de parada);
```

Podemos construir o código com mesma saída no arquivo [`material/cod031.c`](material/cod031.c):

```c
#include<stdio.h>

int main(){
    int N;

    printf("Digite um numero N: ");
    scanf(" %d", &N);

    int i=0;
    do{
        printf("%d\n", i+1);
    }while (i<N);
    return 0;
}
```

## `break` para quebrar ciclos

A função do `break` é finalizar os ciclos, normalmente com condições específicas, vindas com estruturas condicionais. Vejamos o exemplo abaixo:

```c
#include<stdio.h>

int main(){
    int i;
    while (1){
        int num;
        printf("Digite um numero: ");
        scanf(" %d", &num);

        if (num % 2 == 0){
            printf("Voce digitou um numero par!");
            break;
        }
    }

    return 0;
}
```

O código abaixo pode ser conferido no arquivo [`material/cod032.c`](material/cod032.c).