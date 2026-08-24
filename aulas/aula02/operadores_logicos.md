# Operadores Lógicos:

Na programação, temos o conceito da álgebra e lógica booleana, fundamental para compreender os próximos passos. Baseado na linguagem binária, interpretaremos os sinais como `1` e `0`, `true` e `false`, ligado e desligado.

Para isso, temos os seguintes operadores:

## **AND** ou `&&`

O operador **AND** realiza comparações entre certos questionamentos, por exemplo:

```
(você está na UFPE e você está em uma atividade extracurricular?)
(SIM e SIM)
(SIM)

(você está no DES e você está em aula de uma disciplina?)
(SIM e NÃO)
(NÃO)
```

Obedecemos a seguinte tabela da verdade:

**Tabela da verdade da porta lógica AND:**

|  A  |  B  | A && B |
| --- | --- | -----: |
|  0  |  0  |      0 |
|  0  |  1  |      0 |
|  1  |  0  |      0 |
|  1  |  1  |      1 |

Veja o exemplo do código [`material/cod020.c`](material/cod020.c) abaixo junto com sua saída:

```c
#include<stdio.h>

int main(){
    int num1 = 2, num2 = 3, num3 = 1, num4 = 2;

    printf("(%d < %d) && (%d < %d) -> %d\n", num1, num2, num3, num4, (num1 < num2 && num3 < num4));
    printf("(%d == %d) && (%d > %d) -> %d", num1, num4, num2, num3, (num1 == num4 && num3 > num2));

    return 0;
}
```

```output
(2 < 3) && (1 < 2) -> 1
(2 == 2) && (3 > 1) -> 1
```

## **OR** ou `||`

Analogamente, o operador **OR** indica que apenas um dos questionamentos precisa ser afirmativo para o resultado ser afirmativo. Vejamos o exemplo:

```
(você está no CTG ou você está no CCEN?)
(SIM ou NÃO)
(SIM)
```

A partir dessa ideia, podemos montar uma tabela da verdade, assim como feito anteriormente:

**Tabela da verdade da porta lógica OR:**

|  A  |  B  | A \|\| B |
| --- | --- | -------: |
|  0  |  0  |        0 |
|  0  |  1  |        1 |
|  1  |  0  |        1 |
|  1  |  1  |        1 |

Também podemos observar isso no código [`material/cod021.c`](material/cod021.c) e na sua saída, mostrados abaixo.

```c
#include<stdio.h>

int main(){
    int num1 = 2, num2 = 3, num3 = 1, num4 = 2;

    printf("(%d < %d) || (%d < %d) -> %d\n", num1, num2, num3, num4, (num1 < num2 || num3 < num4));
    printf("(%d == %d) || (%d > %d) -> %d\n", num1, num4, num2, num3, (num1 == num4 || num2 < num3));
    printf("(%d != %d) || (%d > %d) -> %d", num1, num4, num2, num3, (num1 != num4 || num2 < num3));

    return 0;
}
```

```output
(2 < 3) || (1 < 2) -> 1
(2 == 2) || (3 < 1) -> 1
(2 != 2) || (3 < 1) -> 0
```

## **NOT** ou `!`

Por fim, temos o operador **NOT**, utilizado para negar a entrada e devolver o sinal oposto. De maneira bem simples, temos a tabela abaixo.

**Tabela da verdade da porta lógica NOT:**

|  A  |       !A |
| --- | -------: |
|  0  |       1  |
|  1  |       0  |

Assim, temos o código e saída do arquivo [`material/cod022.c`](material/cod022.c) a seguir:

```c
#include<stdio.h>

int main(){
    int num1 = 2, num2 = 3;

    printf("%d > %d -> %d\n", num1, num2, num1 > num2);
    printf("!(%d > %d) -> %d", num1, num2, !(num1 > num2));

    return 0;
}
```

```output
2 > 3 -> 0
!(2 > 3) -> 1
```

Também é possível trabalhar com uma biblioteca que nos auxilia com operações lógica, criando uma variável do tipo `bool`. A biblioteca se chama `stdbool.h` e pode ser incluída nos códigos.