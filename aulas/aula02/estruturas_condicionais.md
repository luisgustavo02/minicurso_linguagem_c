# Estruturas Condicionais

Visto os conceitos de operações, o primeiro passo para evoluir no código é compreender e aplicar as estruturas condicionais. Dentre as possibilidades, existem 3 tipos de estruturas condicionais na linguagem C.

## Estrutura do `if`

A estrutura condicional do `if` pode ser segmentada em 3 partes: `if`, `else if` e `else`. Para que a estrutura seja iniciada, necessariamente um `if` tem que ser inserido, mas não é necessário haver um `else if` ou um `else`.

### `if`

`if` é bem simples. Dada uma operação ou um valor dentro dos parênteses, o código executa ou não o escopo do código. Vejamos esse pseudocódigo abaixo:

```pseudo
leia (idade)

se (idade é maior ou igual que 18)
    
    imprimir (faça sua habilitação)
```

Podemos transcrever para o arquivo [`material/cod025.c`](material/cod025.c) e analisar a saída.

```c
#include<stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf(" %d", &idade);

    if (idade >= 18){
        printf("Parabens! Agora voce pode tirar a CNH!\n");
    }

    return 0;
}
```

### `else if`

O `else if` é um pouco diferente. Ele funciona de maneira similar ao `if`, porém a condição do `if` não pode ser atendida e sua própria condição precisa ser verdadeira. Observe o código do arquivo [`material/cod026.c`](material/cod026.c):

```c
#include<stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf(" %d", &idade);

    if (idade >= 18 && idade <= 70){
        printf("Voce vai votar por bem ou por mal!\n");
    }
    else if (idade > 70){
        printf("Boa tarde, meu senhor! Deseja votar?");
    }
    else if (idade >= 16){
        printf("Eae muleque? Vai votar esse ano?");
    }
}
```

Observe que não é necessário ter somente 1 `else if`, na verdade podem haver quantos forem necessários. Mas cuidado para não fazer um código como o da imagem abaixo.

<img src="material/meme_if.png" height=400 alt="if and else chess programming meme">

### `else`

Por fim, temos o `else`, que executa um escopo de código para todos os casos em que a condição não é favorável nos `if` e `else if`. Por exemplo, no arquivo [`material/cod027.c`](material/cod026.c).

```c
#include<stdio.h>

int main(){
    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf(" %f", &nota1);

    printf("Digite a segunda nota: ");
    scanf(" %f", &nota2);

    if (nota1 < 0 || nota1 > 10){
        printf("Nota1 invalida.");
    }

    if (nota2 < 0 || nota2 > 10){
        printf("Nota2 invalida.");
    }

    float media = (nota1 + nota2) / 2;

    if (media >= 7){
        printf("Parabens! Voce foi aprovado");
    }
    else if (media >= 3){
        printf("Voce vai para a final! Estude mais!");
    }
    else{
        printf("Voce foi reprovado!");
    }
}
```

## Estrutura do `switch` e `case`

Analogamente às estruturas condicionais do `if`, temos o operador `switch`, feito para comparar o conteúdo de uma variável com valores pré-definidos, junto com o `case`. Vejamos um escopo:

```c
#include<stdio.h>

int main(){
    int var;

    scanf(" %d", &var);

    switch (var){
        case value1:
            // Escopo 1
            break;
        
        case value2:
            // Escopo 2
            break;
        
        // ...

        default:
            // Escopo default
            break;

    }
    return 0;
}
```

Vamos mostrar um exemplo mostrado no arquivo [`material/cod027.c`](material/cod027.c), fazendo uma análise do meses do ano:

```c
#include<stdio.h>

int main(){
    int mes;

    printf("Digite um numero inteiro referente a um mes: ");
    scanf(" %d", &mes);

    switch (mes){
        
        case 1:
            printf("Janeiro");
            break;
        
        case 2:
            printf("Fevereiro");
            break;
        
        case 3:
            printf("Marco");
            break;
        
        case 4:
            printf("Abril");
            break;
        
        case 5:
            printf("Maio");
            break;
        
        case 6:
            printf("Junho");
            break;
        
        case 7:
            printf("Julho");
            break;
        
        case 8:
            printf("Agosto");
            break;
        
        case 9:
            printf("Setembro");
            break;
        
        case 10:
            printf("Outubro");
            break;
        
        case 11:
            printf("Novembro");
            break;
        
        case 12:
            printf("Dezembro");
            break;
    
        default:
            printf("Valor invalido");
            break;
    }
    return 0;
}
```

Então, nesse caso, teremos um mês a depender do valor de entrada.

## Estrutura do operador ternário

O operador ternário funcina de uma forma peculiar, em um comando de uma única linha, com o seguinte padrão:

```
condicao ? verdadeiro : falso
```

Vejamos o arquivo [`material/cod028.c`](material/cod028.c):

```c
#include<stdio.h>

int main(){
    int num1 = 1, num2 = 3;

    num1 < num2 ? printf("Sim") : printf("Nao");

    return 0;
}
```

