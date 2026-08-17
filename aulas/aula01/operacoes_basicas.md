# Operações Básicas

Com o conceito de variáveis, em especial as variáveis numéricas do tipo `int`, `float` e `double`, teremos o conceito das operações básicas. São elas:

1. Adição ou soma
2. Subtração ou diferença
3. Multiplicação ou produto
4. Divisão ou razão
5. Resto da divisão

Um ponto importante para ressaltar é que operações do mesmo tipo de variáveis ressulta nesse mesmo tipo de variável. Por exemplo, em linguagem C, se temos o código abaixo:

```c
#include<stdio.h>

int main(){
    printf("%d", 1/2);

    return 0;
}
```

A saída do programa será:

```output
0
```

Como os valores $1$ e $2$ são inteiros, a resposta convencional $0.5$ não atende aos inteiros e a resposta do programa será $0$. Caso você deseje uma resposta de $0.5$, o código correto pode ser escrito abaixo:

```c
#include<stdio.h>

int main(){
    printf("%f", 1.0/2);

    return 0;
}
```

Logo, a saída do programa será:

```output
0.500000
```

De modo paralelo, se uma variável `int` é operada com uma variável `float`, o resultado será um valor do tipo `float`. Ou seja, os tipos de maior tamanho prevalecem.

Esses códigos podem ser conferidos nos arquivos [material/cod003.c](material/cod003.c) e [material/cod004.c](material/cod004.c).

## 1. Adição ou Soma

Como na matemática, a adição é representada com o sinal `+`, como vemos abaixo e no arquivo [material/cod005.c](material/cod005.c):

```c
#include<stdio.h>

int main(){
    int num1 = 3, num2 = 4;
    float num3 = 6.7, num4 = 9.3;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d + %f = %f\n", num1, num3, num1 + num3);
    printf("%f + %f = %f\n", num3, num4, num3 + num4);

    return 0;
}
```

A saída do programa será:

```output
3 + 4 = 7
3 + 6.700000 = 9.700000
6.700000 + 9.300000 = 16.000000
```

## 2. Subtração ou diferença

## 3. Multiplicação ou produto

## 4. Divisão ou razão

## 5. Resto da divisão