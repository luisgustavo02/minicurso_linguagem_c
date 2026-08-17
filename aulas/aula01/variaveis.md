# **Variáveis**

Na linguagem C, variáveis são espaços na memória, onde podemos armazenar dados para o nosso programa. Elas possuem atributos fundamentais:

1. Tipo
2. Nome
3. Conteúdo
4. Endereço de memória

## **1. Tipo**

Dentre os principais tipos de variáveis, temos:

- `int`: Usada para representar números inteiros.
- `float`: Usada para representar números de ponto flutuante.
- `double`: Usada para representar números de ponto flutuante com uma precisão muito maior (cerca de 15 casas decimais).
- `char`: Usada para representar caracteres, sejam letras, números ou símbolos.

Ainda é possível adicionar especificidades na declaração de variáveis, como:

- `unsigned`: Considera somente valores inteiros. Aplicado em `int` e `char`.
- `long`: Aumenta o tamanho da variável, dobrando o tamanho original. Aplicado em `int` e `double`.
- `short`: Reduzo tamanho da variável, reduzindo pela metade o tamanho original. Aplicado em `int`.

### `int`

Além de representar números inteiros, as variáveis do tipo `int` armazenam números em um espaço de **4 bytes** (lembrando que $1\,\mathrm{byte} = 8\,\mathrm{bits}$). Em funções de *input* e *output*, são representadas por `%d` ou `%i`.

### `float`

Utilizado para representar números reais não-inteiros, as variáveis do tipo `float` possuem um tamanho de **4 bytes**. Diferente das variáveis inteiras, elas nos permitem trabalhar com valores decimais, sendo a parte decimal representada por ponto ao invés da vírgula. Além disso, possuem uma precisão de 6 casas decimais e são representadas por `%f` em funções de *input* e *output*.

### `double`

Variáveis do tipo `double` são muito similares com as variáveis `float`, com a diferença do tamanho de **8 bytes**, a precisão de 15 casas decimais e serem representados como `%lf` nas funções da bibliotecas `stdio.h`.

### `char`

As variáveis do tipo `char` são utilizadas para armazenar caracteres, sejam eles números, símbolos ou letras. Elas possuem o tamanho de **1 byte**, podem armazenar somente 1 caractere e são representados como `%c`.

## **Resumo**

Podemos verificar esses tamanhos, com base no arquivo [material/cod002.c](material/cod002.c):

```c
#include<stdio.h>

int main(){

    printf("int: %ld\n", sizeof(int));
    printf("long int: %ld\n", sizeof(long int));
    printf("short int: %ld\n", sizeof(short int));
    printf("float: %ld\n", sizeof(float));
    printf("double: %ld\n", sizeof(double));
    printf("long double: %ld\n", sizeof(long double));
    printf("char: %ld\n", sizeof(char));

    return 0;
}
```

Em suma, podemos seguir a tabela abaixo:

| Tipo de variável | Tamanho  | Intervalo |
| --- | :---: | --- |
| `int` | 4 bytes | $-2.147.483.648$ a $2.147.483.647$ |
| `unsigned int` | 4 bytes | $0$ a $4.294.967.296$ |
| `short int` | 2 bytes | $-32.768$ a $32.767$ |
| `long int` | 8 bytes | $-9.223.372.036.854.775.808$ a $9.223.372.036.854.775.807$ |
| `float` | 4 bytes | $\pm 1,2,\,\cdot 10^{-38}$ a $\pm 3,4\,\cdot 10^{38}$|
| `double` | 8 bytes | $\pm 1,7\,\cdot 10^{-308}$ a $\pm 1,7\,\cdot 10^{308}$ |
| `long double` | 16 bytes | $\pm 3,4\,\cdot 10^{-4932}$ a $\pm 1,1\,\cdot 10^{4932}$ |
| `char` | 1 byte | $-128$ a $127$ |
| `unsigned char` | 1 byte | $0$ a $255$ |