# Funções

Desde a primeira aula, já utilizamos várias funções: `main()`, `printf()`, `scanf()`, `sqrt()`, `strlen()`... Agora vamos aprender a criar as nossas.

Uma boa forma de enxergar uma função é como uma **prestadora de serviço**: quem a chama entrega algo (os argumentos) e recebe algo de volta (o retorno). É a mesma ideia de uma função matemática: em $f(x) = 2x$, ao "entregar" $x = 7$, recebemos $f(7) = 14$.

Dividir o programa em funções traz várias vantagens:

- **Modularização:** cada função resolve um pedaço do problema ("dividir para conquistar").
- **Reutilização:** escrevemos o código uma vez e o chamamos quantas vezes for preciso.
- **Leitura e correção:** fica mais fácil entender o código e encontrar erros.

## Estrutura de uma função

Uma função segue o pseudocódigo abaixo:

```
<tipo_de_retorno> <nome_da_funcao>(<tipo1> <parametro1>, <tipo2> <parametro2>, ...){
    Bloco de comando
    return <valor>;
}
```

- **Tipo de retorno:** o tipo do valor devolvido (`int`, `float`, `char`, uma struct...). Quando a função não devolve nada, usamos `void`.
- **Nome:** segue as mesmas regras e [boas práticas](../aula00/recomendacoes_e_dicas.md) dos nomes de variáveis.
- **Parâmetros:** os valores que a função recebe. Uma função pode ter zero ou mais parâmetros.
- **`return`:** encerra a função e devolve o valor para quem a chamou. Uma função retorna **apenas um valor**.

Os valores entregues na chamada são chamados de **argumentos** e devem seguir a mesma ordem e os mesmos tipos dos parâmetros. Vejamos o código [`material/cod044.c`](material/cod044.c):

```c
#include<stdio.h>

// Funcao que recebe um inteiro e retorna o seu quadrado
int quadrado(int x){
    return x * x;
}

// Funcao sem parametros e sem retorno (void)
void linha(){
    printf("--------------------\n");
}

int main(){
    int n;

    printf("Digite um numero: ");
    scanf(" %d", &n);

    linha();
    printf("%d ao quadrado = %d\n", n, quadrado(n));
    printf("%d ao quadrado = %d\n", n+1, quadrado(n+1));
    linha();

    return 0;
}
```

Exemplo de execução:

```output
Digite um numero: 4
--------------------
4 ao quadrado = 16
5 ao quadrado = 25
--------------------
```

Quando o `main()` chama `quadrado(n)`, ele fica parado esperando. O computador cria uma nova variável `x` exclusiva da função, copia o valor de `n` para ela, executa o bloco e devolve o resultado no lugar da chamada. Ao terminar, a variável `x` é apagada da memória.

## Protótipos

O compilador lê o código de cima para baixo, então uma função precisa ser conhecida **antes** de ser usada. Até agora, resolvemos isso escrevendo as funções acima do `main()`. Outra opção é declarar apenas a **assinatura** (ou **protótipo**) da função no início e escrever sua definição depois:

```c
float media(float n1, float n2, float n3);   // Prototipo (termina com ;)
```

Funções também podem chamar outras funções. No código [`material/cod045.c`](material/cod045.c), o `main()` usa `media()` e `aprovado()`, que estão definidas depois dele:

```c
#include<stdio.h>

// Prototipos: avisam ao compilador que as funcoes existem
float media(float n1, float n2, float n3);
int aprovado(float m);

int main(){
    float n1, n2, n3;

    printf("Digite as 3 notas: ");
    scanf(" %f %f %f", &n1, &n2, &n3);

    float m = media(n1, n2, n3);
    printf("Media: %.2f\n", m);

    if (aprovado(m)){
        printf("Aprovado!\n");
    }
    else{
        printf("Reprovado!\n");
    }

    return 0;
}

// Definicoes das funcoes (depois do main)
float media(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}

int aprovado(float m){
    // Retorna 1 (verdadeiro) ou 0 (falso)
    return m >= 7;
}
```

Exemplo de execução:

```output
Digite as 3 notas: 8 6.5 7
Media: 7.17
Aprovado!
```

Repare que `aprovado()` retorna diretamente o resultado da comparação `m >= 7`, que vale $1$ (verdadeiro) ou $0$ (falso), como vimos em [operadores comparativos](../aula02/operadores_comparativos.md).

## Escopo de variáveis

O **escopo** de uma variável é a região do programa em que ela pode ser utilizada:

- **Variáveis locais:** são declaradas dentro de uma função e só existem dentro dela. São criadas quando a função é chamada e apagadas quando ela termina.
- **Variáveis globais:** são declaradas fora de todas as funções e podem ser usadas em qualquer parte do programa.

Vejamos a diferença no código [`material/cod046.c`](material/cod046.c):

```c
#include<stdio.h>

int contador = 0; // Variavel global (evite!)

void incrementa(){
    int local = 0; // Variavel local: nasce e morre a cada chamada

    local++;
    contador++;

    printf("local = %d | contador = %d\n", local, contador);
}

int main(){
    incrementa();
    incrementa();
    incrementa();

    // printf("%d", local); -> Erro: local nao existe dentro do main

    return 0;
}
```

Saída:

```output
local = 1 | contador = 1
local = 1 | contador = 2
local = 1 | contador = 3
```

A variável `local` volta a valer $0$ a cada chamada, enquanto `contador` mantém seu valor. Apesar de parecer prático, **evite variáveis globais**: qualquer função pode alterá-las, o que dificulta entender e corrigir o programa.

## Passagem por valor

Em C, os argumentos são passados **por cópia**: a função recebe uma cópia do valor e trabalha somente com ela. Isso vale tanto para variáveis simples quanto para structs, como mostra o código [`material/cod047.c`](material/cod047.c):

```c
#include<stdio.h>

typedef struct{
    float x, y;
} Ponto;

void dobra_numero(int n){
    n = n * 2;
    printf("Dentro da funcao: n = %d\n", n);
}

void move_ponto(Ponto p){
    p.x = p.x + 10;
    p.y = p.y + 10;
    printf("Dentro da funcao: p = (%.1f, %.1f)\n", p.x, p.y);
}

int main(){
    int n = 5;
    Ponto p = {1, 2};

    dobra_numero(n);
    printf("No main: n = %d\n\n", n);

    move_ponto(p);
    printf("No main: p = (%.1f, %.1f)\n", p.x, p.y);

    return 0;
}
```

Saída:

```output
Dentro da funcao: n = 10
No main: n = 5

Dentro da funcao: p = (11.0, 12.0)
No main: p = (1.0, 2.0)
```

As alterações feitas dentro das funções não afetaram as variáveis do `main()`. Para obter o resultado, uma opção é **retorná-lo**:

```c
Ponto move_ponto(Ponto p){
    p.x = p.x + 10;
    p.y = p.y + 10;
    return p;
}

// No main:
p = move_ponto(p);
```

E se a função precisar devolver mais de um valor, ou alterar diretamente uma variável do `main()`? Para isso, usaremos [ponteiros](ponteiros.md).

## Vetores e strings como parâmetros

Para receber um vetor, escrevemos o parâmetro com colchetes vazios (`float v[]`). Como a função não sabe o tamanho do vetor, é comum passá-lo como um parâmetro extra. Já as strings dispensam isso, pois o `'\0'` indica onde terminam.

Há uma diferença importante: **vetores não são copiados**. Se a função alterar o vetor, o vetor original do `main()` também será alterado (o motivo também está em [ponteiros](ponteiros.md)). Vejamos o código [`material/cod048.c`](material/cod048.c), que trata as leituras de um sensor, descartando os valores negativos:

```c
#include<stdio.h>

// Vetores precisam do tamanho como parametro extra
float media_vetor(float v[], int tamanho){
    int i;
    float soma = 0;

    for (i=0; i<tamanho; i++){
        soma += v[i];
    }

    return soma / tamanho;
}

// Vetores NAO sao copiados: a funcao altera o vetor original
void zera_negativos(float v[], int tamanho){
    int i;

    for (i=0; i<tamanho; i++){
        if (v[i] < 0){
            v[i] = 0;
        }
    }
}

// Strings nao precisam do tamanho: o '\0' indica o fim
int conta_caracteres(char texto[]){
    int i = 0;

    while (texto[i] != '\0'){
        i++;
    }

    return i;
}

int main(){
    float leituras[] = {3.3, -0.2, 5.0, 4.8, -1.1};
    char curso[] = "Linguagem C";

    printf("Media antes: %.2f\n", media_vetor(leituras, 5));

    zera_negativos(leituras, 5);
    printf("Media depois: %.2f\n", media_vetor(leituras, 5));

    printf("\"%s\" tem %d caracteres\n", curso, conta_caracteres(curso));

    return 0;
}
```

Saída:

```output
Media antes: 2.36
Media depois: 2.62
"Linguagem C" tem 11 caracteres
```

Para matrizes, é obrigatório informar a quantidade de colunas no parâmetro, como em `void imprime(int m[][3], int linhas)`.

## Recursão

Uma função pode chamar a si mesma. Essa técnica é chamada de **recursão** e é útil para problemas que podem ser divididos em versões menores de si mesmos. O exemplo clássico é o fatorial:

$n! = n \times (n-1)!$, com $1! = 1$ e $0! = 1$

Toda função recursiva precisa de um **caso base**, que encerra as chamadas. Sem ele, a função se chamaria infinitamente até o programa travar. Vejamos o código [`material/cod049.c`](material/cod049.c):

```c
#include<stdio.h>

int fatorial(int n){
    // Caso base: encerra a recursao
    if (n <= 1){
        return 1;
    }

    // Chamada recursiva: n! = n * (n-1)!
    return n * fatorial(n - 1);
}

int main(){
    int n;

    printf("Digite um numero: ");
    scanf(" %d", &n);

    printf("%d! = %d\n", n, fatorial(n));

    return 0;
}
```

Exemplo de execução:

```output
Digite um numero: 5
5! = 120
```

Por baixo dos panos, a chamada `fatorial(5)` acontece assim:

```
fatorial(5) = 5 * fatorial(4)
            = 5 * 4 * fatorial(3)
            = 5 * 4 * 3 * fatorial(2)
            = 5 * 4 * 3 * 2 * fatorial(1)
            = 5 * 4 * 3 * 2 * 1
            = 120
```

Teste o programa com $13$ e observe o resultado estranho. Como vimos em [variáveis](../aula01/variaveis.md), o `int` ocupa 4 bytes e armazena no máximo $2.147.483.647$, enquanto $13! = 6.227.020.800$. Esse estouro de capacidade é chamado de *overflow*.