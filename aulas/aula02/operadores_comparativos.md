# Operadores Comparativos

Junto com os operadores lógicos, os operadores comparativos funcionam para comparar variáveis e controlar o fluxo do código, por meio de condicionais e repetições. A resposta dessa comparação é representada em valores inteiros de `1` (verdadeiro) ou `0` (falso).

## `==`

Esse é o sinal de **igualdade**, utilizado para comparar quaisquer tipos de variáveis. Vejamos alguns exemplos no arquivo [`material/cod014.c`](material/cod014.c).

```c
#include<stdio.h>

int main(){
    printf("%d == %d -> %d\n", 1, 1, 1 == 1);
    printf("%d == %f -> %d\n", 1, 1.0, 1 == 1.0);
    printf("%d == %d -> %d\n", 1, 2, 1 == 2);
    printf("%c == %c -> %d\n", 'c', 'C', 'c' == 'C');

    return 0;
}
```

A saída do programa deve ser o conforme:

```output
1 == 1 -> 1
1 == 1.000000 -> 1
1 == 2 -> 0
c == C -> 0
```

## `!=`

O sinal de **desigualdade** funciona da mesma maneira que o de igualdade, mas com o questionamento oposto, se os valores ou variáveis são diferentes. Vejamos o exemplo do arquivo [`material/cod015.c`](material/cod015.c).

```c
#include<stdio.h>

int main(){
    printf("%d != %d -> %d\n", 1, 1, 1 != 1);
    printf("%d != %f -> %d\n", 1, 1.0, 1 != 1.0);
    printf("%d != %d -> %d\n", 1, 2, 1 != 2);
    printf("%c != %c -> %d\n", 'c', 'C', 'c' != 'C');

    return 0;
}
```

Com essa ideia, temos a saída abaixo:

```output
1 != 1 -> 0
1 != 1.000000 -> 0
1 != 2 -> 1
c != C -> 1
```

## `>`

O sinal `>` indica a operação de **maior que** entre os números e variáveis. Quando isso é aplicado a caracteres, utilizamos a conversão para decimais, por meio da [tabela ASCII](tabela_ascii.md) (lê-se "ASC 2"). Observe as operações conforme o código [`material/cod016.c`](material/cod016.c).

```c
#include<stdio.h>

int main(){
    printf("%d > %d -> %d\n", 1, 1, 1 > 1);
    printf("%d > %f -> %d\n", 1, 1.0, 1 > 1.0);
    printf("%f > %d -> %d\n", 1.0, 1, 1.0 > 1);
    printf("%d > %d -> %d\n", 1, 2, 1 > 2);
    printf("%d > %d -> %d\n", 2, 1, 2 > 1);
    printf("%c > %c -> %d\n", 'c', 'C', 'c' > 'C');
    printf("%c > %c -> %d\n", 'C', 'c', 'C' > 'c');

    return 0;
}
```

Logo, teremos a saída do código mostrada abaixo:

```output
1 > 1 -> 0
1 > 1.000000 -> 0
1.000000 > 1 -> 0
1 > 2 -> 0
2 > 1 -> 1
c > C -> 1
C > c -> 0
```

## `>=`

Similarmente, o sinal `>=` representa **maior ou igual que** entre variáveis. De acordo com o código [`material/cod017.c`](material/cod017.c).

```c
#include<stdio.h>

int main(){
    printf("%d >= %d -> %d\n", 1, 1, 1 >= 1);
    printf("%d >= %f -> %d\n", 1, 1.0, 1 >= 1.0);
    printf("%f >= %d -> %d\n", 1.0, 1, 1.0 >= 1);
    printf("%d >= %d -> %d\n", 1, 2, 1 >= 2);
    printf("%d >= %d -> %d\n", 2, 1, 2 >= 1);
    printf("%c >= %c -> %d\n", 'c', 'C', 'c' >= 'C');
    printf("%c >= %c -> %d\n", 'C', 'c', 'C' >= 'c');

    return 0;
}
```

Assim, a saída do programa deve ser:

```output
1 >= 1 -> 1
1 >= 1.000000 -> 1
1.000000 >= 1 -> 1
1 >= 2 -> 0
2 >= 1 -> 1
c >= C -> 1
C >= c -> 0
```

## `<`

De maneira paralela, temos o sinal `<`, que representa **menor que** entre valores. Siga o exemplo do código [`material/cod018.c`](material/cod018.c).

```c
#include<stdio.h>

int main(){
    printf("%d < %d -> %d\n", 1, 1, 1 < 1);
    printf("%d < %f -> %d\n", 1, 1.0, 1 < 1.0);
    printf("%f < %d -> %d\n", 1.0, 1, 1.0 < 1);
    printf("%d < %d -> %d\n", 1, 2, 1 < 2);
    printf("%d < %d -> %d\n", 2, 1, 2 < 1);
    printf("%c < %c -> %d\n", 'c', 'C', 'c' < 'C');
    printf("%c < %c -> %d\n", 'C', 'c', 'C' < 'c');

    return 0;
}
```

Conforme o código acima, temos o resultado abaixo:

```output
1 < 1 -> 0
1 < 1.000000 -> 0
1.000000 < 1 -> 0
1 < 2 -> 1
2 < 1 -> 0
c < C -> 0
C < c -> 1
```

## `<=`

Por fim, temos os símbolos `<=`, que indica **menor ou igual** entre variáveis. É isso o que mostra o arquivo [`material/cod019.c`](material/cod019.c) abaixo:

```c
#include<stdio.h>

int main(){
    printf("%d <= %d -> %d\n", 1, 1, 1 <= 1);
    printf("%d <= %f -> %d\n", 1, 1.0, 1 <= 1.0);
    printf("%f <= %d -> %d\n", 1.0, 1, 1.0 <= 1);
    printf("%d <= %d -> %d\n", 1, 2, 1 <= 2);
    printf("%d <= %d -> %d\n", 2, 1, 2 <= 1);
    printf("%c <= %c -> %d\n", 'c', 'C', 'c' <= 'C');
    printf("%c <= %c -> %d\n", 'C', 'c', 'C' <= 'c');

    return 0;
}
```

Em seguida, observamos a saída do programa mostrada abaixo:

```output
1 <= 1 -> 1
1 <= 1.000000 -> 1
1.000000 <= 1 -> 1
1 <= 2 -> 1
2 <= 1 -> 0
c <= C -> 0
C <= c -> 1
```