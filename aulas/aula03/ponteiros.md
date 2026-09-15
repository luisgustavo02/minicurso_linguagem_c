# Ponteiros

Na [aula 01](../aula01/variaveis.md), vimos que toda variável possui quatro atributos: tipo, nome, conteúdo e **endereço de memória**. Chegou a vez de trabalhar com o último deles.

Podemos imaginar a memória do computador como um grande armário de gavetas numeradas. Cada gaveta tem um número de fábrica (o endereço), que não conseguimos alterar, mas conseguimos usar. Um **ponteiro** é uma variável que armazena justamente um desses endereços. Quando um ponteiro `p` guarda o endereço de uma variável `x`, dizemos que **`p` aponta para `x`**.

Com ponteiros, conseguimos:

- Permitir que uma função altere variáveis de quem a chamou.
- "Retornar" mais de um resultado de uma função.
- Trabalhar com vetores de forma eficiente.
- Reservar memória durante a execução do programa (alocação dinâmica).

## Declaração

Um ponteiro é declarado com um asterisco `*` antes do nome:

```
<tipo> *<nome_do_ponteiro>;
```

Na declaração `int *p;`, `p` **não é** um inteiro: ele armazena um endereço, e nesse endereço haverá um inteiro. Cuidado com declarações múltiplas: em `int *p, q;`, apenas `p` é ponteiro, enquanto `q` é um `int` comum.

## Operadores `&` e `*`

Dois operadores são fundamentais:

| Operador | Nome                 | Exemplo | Significado                                    |
| :------: | -------------------- | ------- | ---------------------------------------------- |
| `&`      | Operador de endereço | `&x`    | O endereço da variável `x`                     |
| `*`      | Operador de conteúdo | `*p`    | O valor guardado no endereço para onde `p` aponta |

Após `p = &x;`, escrever `*p` é o mesmo que escrever `x`: podemos tanto ler quanto alterar o valor de `x` por meio de `p`. Para imprimir endereços, usamos o especificador `%p`, convertendo o ponteiro para `(void *)`.

Vejamos o código [`material/cod050.c`](material/cod050.c):

```c
#include<stdio.h>

int main(){
    int x = 10;
    int *p;     // p e um ponteiro para inteiro

    p = &x;     // p recebe o endereco de x

    // %p imprime enderecos (convertidos para void *)
    printf("x  = %d\n", x);
    printf("&x = %p\n", (void *) &x);
    printf("p  = %p\n", (void *) p);
    printf("*p = %d\n", *p);
    printf("&p = %p\n\n", (void *) &p);

    // Altera o valor guardado no endereco para onde p aponta
    *p = 25;

    printf("Depois de *p = 25:\n");
    printf("x  = %d\n", x);

    return 0;
}
```

Saída:

```output
x  = 10
&x = 0x7ffd9bfb42cc
p  = 0x7ffd9bfb42cc
*p = 10
&p = 0x7ffd9bfb42d0

Depois de *p = 25:
x  = 25
```

Os endereços mudam a cada execução e de um computador para outro, mas o valor de `p` sempre será igual ao de `&x`. Podemos representar a memória assim (com endereços simplificados):

| Variável | Endereço | Conteúdo         |
| :------: | :------: | :--------------: |
| `x`      | `1000`   | `10` → `25`      |
| `p`      | `1004`   | `1000`           |

Um alerta importante: um ponteiro declarado sem valor aponta para um endereço qualquer ("lixo"). Usar `*p` nessa situação pode travar o programa. Quando ainda não houver um endereço para guardar, inicialize o ponteiro com `NULL`:

```c
int *p = NULL;
```

## Passagem por referência

Em [funções](funcoes.md), vimos que os argumentos são passados por cópia. Então, como escrever uma função que troca os valores de duas variáveis do `main()`? A resposta é passar os **endereços** das variáveis, e não os seus valores. Vejamos o código [`material/cod051.c`](material/cod051.c):

```c
#include<stdio.h>

// Recebe copias: NAO altera as variaveis do main
void troca_errada(int a, int b){
    int aux = a;
    a = b;
    b = aux;
}

// Recebe enderecos: altera as variaveis do main
void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int x, y;

    printf("Digite 2 numeros: ");
    scanf(" %d %d", &x, &y);

    troca_errada(x, y);
    printf("Apos troca_errada: x = %d, y = %d\n", x, y);

    troca(&x, &y);
    printf("Apos troca:        x = %d, y = %d\n", x, y);

    return 0;
}
```

Exemplo de execução:

```output
Digite 2 numeros: 3 8
Apos troca_errada: x = 3, y = 8
Apos troca:        x = 8, y = 3
```

Na chamada `troca(&x, &y)`, o ponteiro `a` recebe o endereço de `x` e `b` recebe o endereço de `y`. Dentro da função, `*a` **é** a variável `x` do `main()`, então alterar `*a` altera `x`.

## Retornando mais de um valor

Uma função só pode ter um `return`, mas pode receber vários ponteiros e escrever os resultados nos endereços recebidos. No código [`material/cod052.c`](material/cod052.c), a função `divide()` usa o `return` para indicar se a operação deu certo e os ponteiros para devolver o quociente e o resto:

```c
#include<stdio.h>

// Retorna 1 se a divisao foi possivel e 0 caso contrario.
// Os resultados sao "devolvidos" pelos ponteiros.
int divide(int dividendo, int divisor, int *quociente, int *resto){
    if (divisor == 0){
        return 0;
    }

    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;

    return 1;
}

int main(){
    int a, b, q, r;

    printf("Digite o dividendo e o divisor: ");
    scanf(" %d %d", &a, &b);

    if (divide(a, b, &q, &r)){
        printf("%d / %d = %d, com resto %d\n", a, b, q, r);
    }
    else{
        printf("Nao e possivel dividir por zero!\n");
    }

    return 0;
}
```

Exemplos de execução:

```output
Digite o dividendo e o divisor: 17 5
17 / 5 = 3, com resto 2
```

```output
Digite o dividendo e o divisor: 17 0
Nao e possivel dividir por zero!
```

Agora faz sentido o `&` que usamos no `scanf()` desde a primeira aula: o `scanf()` precisa do **endereço** da variável para guardar nela o valor lido, exatamente como a nossa função `divide()`.

## Ponteiros e vetores

O nome de um vetor, sozinho, representa o **endereço do seu primeiro elemento**. Ou seja, `v` é o mesmo que `&v[0]`. Além disso, ao somar um inteiro a um ponteiro, avançamos **elementos**, e não bytes: `p + 1` aponta para o próximo elemento do vetor. Dessa forma, `*(p + i)` é o mesmo que `v[i]`.

Vejamos o código [`material/cod053.c`](material/cod053.c):

```c
#include<stdio.h>

int main(){
    int v[] = {10, 20, 30, 40};
    int *p = v;   // O mesmo que p = &v[0]
    int i;

    printf("v     = %p\n", (void *) v);
    printf("&v[0] = %p\n\n", (void *) &v[0]);

    for (i=0; i<4; i++){
        printf("v[%d] = %d | *(p + %d) = %d | endereco: %p\n", i, v[i], i, *(p + i), (void *) (p + i));
    }

    return 0;
}
```

Saída:

```output
v     = 0x7fffbcead820
&v[0] = 0x7fffbcead820

v[0] = 10 | *(p + 0) = 10 | endereco: 0x7fffbcead820
v[1] = 20 | *(p + 1) = 20 | endereco: 0x7fffbcead824
v[2] = 30 | *(p + 2) = 30 | endereco: 0x7fffbcead828
v[3] = 40 | *(p + 3) = 40 | endereco: 0x7fffbcead82c
```

Os endereços avançam de $4$ em $4$ porque cada `int` ocupa 4 bytes. Esse conceito explica três comportamentos que vimos nesta aula:

- **`scanf("%s", nome)` não usa `&`:** o nome da string já é um endereço.
- **Funções alteram o vetor original:** a função recebe o endereço do vetor, e não uma cópia. Nos parâmetros, `float v[]` e `float *v` são equivalentes.
- **`==` não compara strings:** `fruta1 == fruta2` compara os **endereços** dos dois vetores, que são sempre diferentes. Por isso usamos `strcmp()`.

## Ponteiros para structs

Também podemos criar ponteiros para structs, o que permite que funções alterem structs do `main()` e evita copiar structs grandes. Para acessar um campo por meio do ponteiro, escrevemos `(*c).saldo`. Os parênteses são obrigatórios, pois o `.` tem prioridade sobre o `*`. Como essa escrita é muito comum, a linguagem oferece um atalho, o operador seta `->`:

```c
c->saldo   // o mesmo que (*c).saldo
```

Vejamos o código [`material/cod054.c`](material/cod054.c), que simula uma conta bancária:

```c
#include<stdio.h>

typedef struct{
    char titular[50];
    float saldo;
} Conta;

void deposita(Conta *c, float valor){
    c->saldo += valor;   // O mesmo que (*c).saldo += valor
}

int saca(Conta *c, float valor){
    if (valor > c->saldo){
        return 0;
    }

    c->saldo -= valor;
    return 1;
}

int main(){
    Conta conta = {"Maria", 100.0};

    printf("Saldo inicial de %s: R$ %.2f\n", conta.titular, conta.saldo);

    deposita(&conta, 50.0);
    printf("Apos deposito de R$ 50.00: R$ %.2f\n", conta.saldo);

    if (!saca(&conta, 200.0)){
        printf("Saque de R$ 200.00 negado: saldo insuficiente\n");
    }

    if (saca(&conta, 30.0)){
        printf("Apos saque de R$ 30.00: R$ %.2f\n", conta.saldo);
    }

    return 0;
}
```

Saída:

```output
Saldo inicial de Maria: R$ 100.00
Apos deposito de R$ 50.00: R$ 150.00
Saque de R$ 200.00 negado: saldo insuficiente
Apos saque de R$ 30.00: R$ 120.00
```

## Para ir além: alocação dinâmica

Na [aula 02](../aula02/vetores_e_matrizes.md), criamos vetores com tamanho definido pelo usuário (`float notas[N]`). Outra forma, muito usada em programas maiores, é pedir memória ao sistema durante a execução com a função `malloc()`, da biblioteca `stdlib.h`. Ela recebe a quantidade de bytes desejada e retorna um ponteiro para o início do bloco reservado, ou `NULL` se não houver memória disponível. Ao terminar, devolvemos a memória com `free()`.

Vejamos o código [`material/cod055.c`](material/cod055.c):

```c
#include<stdio.h>
#include<stdlib.h>

int main(){
    int N, i;
    float soma = 0;

    printf("Quantas notas? ");
    scanf(" %d", &N);

    // Reserva espaco para N floats
    float *notas = (float *) malloc(N * sizeof(float));

    if (notas == NULL){
        printf("Erro: memoria insuficiente!\n");
        return 1;
    }

    for (i=0; i<N; i++){
        printf("Nota %d: ", i+1);
        scanf(" %f", &notas[i]);
        soma += notas[i];
    }

    printf("Media: %.2f\n", soma / N);

    // Devolve a memoria ao sistema
    free(notas);

    return 0;
}
```

Exemplo de execução:

```output
Quantas notas? 3
Nota 1: 7.5
Nota 2: 9
Nota 3: 6
Media: 7.50
```

Duas regras de ouro: sempre verifique se o `malloc()` retornou `NULL` e sempre chame `free()` para cada `malloc()`.

## Resumo

| Expressão       | Significado                                    |
| --------------- | ---------------------------------------------- |
| `int *p;`       | Declara `p` como ponteiro para `int`           |
| `p = &x;`       | `p` recebe o endereço de `x`                   |
| `*p`            | Valor guardado no endereço apontado por `p`    |
| `p = NULL;`     | `p` não aponta para nenhum endereço válido     |
| `v`             | Endereço do primeiro elemento do vetor (`&v[0]`) |
| `*(p + i)`      | O mesmo que `p[i]`                             |
| `p->campo`      | Campo da struct apontada por `p` (`(*p).campo`) |