# **Primeiro Programa em C**

É de senso comum na comunidade de programadores que, ao iniciar um código ou projeto, seja realizado um "Hello world" ou "Olá mundo". Assim, vamos criar um programa que mostre na tela a frase "Hello world".

Para isso, dividimos nas seções abaixo:

1. Biblioteca utilizada
2. Função main()
3. Imprimindo texto na tela
4. Código final

## **1. Biblioteca Utilizada**

Para a saída de dados (imprimir texto na tela), necessitamos da biblioteca `stdio.h`. Para isso, utilizamos o operador `#include`, onde ele inclui as bibliotecas desejadas. Por fim, definimos o nome da biblioteca entre os sinais `<>`.

```c
#include<stdio.h>
```

## **2. Função *main()***

Todo código em linguagem C, precisa de uma função chamada `main()`, do inglês "principal". 

A função `main()` é declarada com seu **tipo**, que pode ser inteiro `int` ou vazio `void`, e com os parâmetros, indicando as variáveis utilizadas. Por costume, iniciarei a função como estou habituado, mas fica a critério de cada um.

```c
int main(){

    return 0;
}
```

Dentro das chaves `{}`, escrevemos as intruções, comando ou operações que nossa função irá executar. Por fim, temos o `return`, uma vez que é uma função do tipo `int`, ela retorna um valor inteiro (neste caso, o zero). Mas há diversas maneiras de escrever isso.

## **3. Imprimindo Texto na Tela**

Na biblioteca `stdio.h`, temos uma função chamada `printf()`. Essa função nos permite escrever um texto como parâmetro, entre aspas duplas `""`. Vejamos o trecho:

```c
int main(){
    printf("Hello world");

    return 0;
}
```

## **4. Código Final**

Ao final, temos o nosso código:

```c
#include<stdio.h>

int main(){
    printf("Hello world");

    return 0;
}
```

A saída do programa deve ser:

```output
Hello world
```

Você pode ver esse código no arquivo [material/cod001.c](material/cod001.c).