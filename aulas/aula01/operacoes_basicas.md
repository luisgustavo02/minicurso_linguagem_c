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

Esses códigos podem ser conferidos nos arquivos [material/cod004.c](material/cod004.c) e [material/cod005.c](material/cod005.c).

## 1. Adição ou Soma

Como na matemática, a adição é representada com o sinal `+`, como vemos abaixo e no arquivo [material/cod006.c](material/cod006.c):

```c
#include<stdio.h>

int main(){
    int num1 = 3, num2 = 4;
    float num3 = 6.7, num4 = 9.3;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d + %f = %f\n", num1, num3, num1 + num3);
    printf("%f + %f = %f", num3, num4, num3 + num4);

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

Também na matemática, podemos representar a subtração com o sinal `-`. Vamos ver um exemplo conforme o arquivo [material/cod007.c](material/cod007.c).

```c
#include<stdio.h>

int main(){
    int num1 = -3, num2 = 7;
    float num3 = -12.4, num4 = 1.345;

    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d - %f = %f\n", num1, num3, num1 - num3);
    printf("%f - %f = %f", num3, num4, num3 - num4);

    return 0;
}
```

Assim, a saída do programa será:

```output
-3 - 7 = -10
-3 - -12.400000 = 9.400000
-12.400000 - 1.345000 = -13.745000
```

## 3. Multiplicação ou produto

Para a operação de multiplicação, utilizamos o asterisco `*` na linguagem C. Vejamos o exemplo no arquivo [material/cod008.c](material/cod008.c).

```c
#include<stdio.h>

int main(){
    int num1 = -3, num2 = 7;
    float num3 = -12.4, num4 = 1.345;

    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d * %f = %f\n", num1, num3, num1 * num3);
    printf("%f * %f = %f", num3, num4, num3 * num4);

    return 0;
}
```

Com isso, a saída desse programa será:

```output
-3 * 7 = -21
-3 * -12.400000 = 37.200000
-12.400000 * 1.345000 = -16.678000
```

Em caso de diferenças na exatidão do resultado, isso se deve ao erro numérico, pela conversão de binário para decimal.

## 4. Divisão ou razão

## 5. Resto da divisão