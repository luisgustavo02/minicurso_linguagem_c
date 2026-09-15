# Structs

Com vetores, conseguimos agrupar vários valores **do mesmo tipo**. Mas e se quisermos guardar as informações de um aluno, como nome (`char[]`), matrícula (`int`) e nota (`float`)? Para agrupar dados **de tipos diferentes** sob um único nome, a linguagem C oferece as *structs* (estruturas). Cada elemento de uma struct é chamado de **campo**.

## Definição e declaração

Para definir uma struct, usamos como base o pseudocódigo abaixo:

```
struct <nome_da_struct>{
    <tipo1> <campo1>;
    <tipo2> <campo2>;
    ...
};
```

Atenção ao ponto e vírgula `;` depois da chave final: esquecê-lo é um erro muito comum. A definição costuma ficar **fora e antes** do `main()`, para que qualquer função do programa possa utilizá-la.

A definição apenas descreve o "molde" da struct. Para criar uma variável, declaramos:

```c
struct aluno a1;
```

Para acessar cada campo, usamos o operador ponto `.`:

```c
a1.matricula = 1941;
a1.nota = 10.0;
```

Os campos se comportam como variáveis comuns: no `scanf()`, os campos numéricos precisam do `&` (`&a1.nota`), enquanto os campos de string não (`a1.nome`), como vimos em [strings](strings.md). Também é possível inicializar todos os campos na declaração, seguindo a ordem em que foram definidos.

Vejamos o código [`material/cod041.c`](material/cod041.c):

```c
#include<stdio.h>

// Definicao da struct (fora e antes do main)
struct aluno{
    char nome[50];
    int matricula;
    float nota;
};

int main(){
    // Inicializacao na declaracao, na mesma ordem dos campos
    struct aluno a1 = {"Dennis Ritchie", 1941, 10.0};
    struct aluno a2;

    printf("Digite o nome do aluno: ");
    scanf(" %49[^\n]", a2.nome);

    printf("Digite a matricula: ");
    scanf(" %d", &a2.matricula);

    printf("Digite a nota: ");
    scanf(" %f", &a2.nota);

    printf("\n%s | Matricula: %d | Nota: %.1f\n", a1.nome, a1.matricula, a1.nota);
    printf("%s | Matricula: %d | Nota: %.1f\n", a2.nome, a2.matricula, a2.nota);

    return 0;
}
```

Exemplo de execução:

```output
Digite o nome do aluno: Grace Hopper
Digite a matricula: 1906
Digite a nota: 9.8

Dennis Ritchie | Matricula: 1941 | Nota: 10.0
Grace Hopper | Matricula: 1906 | Nota: 9.8
```

## `typedef`

Escrever `struct aluno` toda vez pode ficar cansativo. O `typedef` cria um apelido, ou sinônimo, para um tipo já existente:

```c
typedef int inteiro;   // agora "inteiro x;" equivale a "int x;"
```

Com structs, temos duas formas comuns de usá-lo:

```c
// Forma 1: struct com nome + apelido
typedef struct aluno{
    char nome[50];
    int matricula;
    float nota;
} Aluno;

// Forma 2: struct sem nome, somente o apelido
typedef struct{
    char nome[50];
    int matricula;
    float nota;
} Aluno;
```

Em ambos os casos, basta escrever `Aluno a1;` para declarar a variável. Por convenção, é comum começar o apelido com letra maiúscula.

## Vetor de structs

Assim como os outros tipos, podemos criar um vetor de structs. Para acessar um campo, primeiro indicamos a posição do vetor e depois o campo: `estoque[i].preco`.

No código [`material/cod042.c`](material/cod042.c), cadastramos os produtos de um estoque e calculamos o valor total:

```c
#include<stdio.h>

typedef struct{
    char nome[30];
    float preco;
    int quantidade;
} Produto;

int main(){
    int N, i;
    float total = 0;

    printf("Quantos produtos deseja cadastrar? ");
    scanf(" %d", &N);

    Produto estoque[N];

    for (i=0; i<N; i++){
        printf("\nProduto %d\n", i+1);

        printf("Nome: ");
        scanf(" %29[^\n]", estoque[i].nome);

        printf("Preco: ");
        scanf(" %f", &estoque[i].preco);

        printf("Quantidade: ");
        scanf(" %d", &estoque[i].quantidade);
    }

    printf("\n%-20s %10s %5s\n", "Produto", "Preco", "Qtd");

    for (i=0; i<N; i++){
        printf("%-20s %10.2f %5d\n", estoque[i].nome, estoque[i].preco, estoque[i].quantidade);
        total += estoque[i].preco * estoque[i].quantidade;
    }

    printf("\nValor total em estoque: R$ %.2f\n", total);

    return 0;
}
```

Exemplo de execução:

```output
Quantos produtos deseja cadastrar? 2

Produto 1
Nome: Resistor 10k
Preco: 0.15
Quantidade: 200

Produto 2
Nome: Arduino Uno
Preco: 89.90
Quantidade: 3

Produto                   Preco   Qtd
Resistor 10k               0.15   200
Arduino Uno               89.90     3

Valor total em estoque: R$ 299.70
```

Para alinhar a tabela, usamos a largura no especificador de formato: `%-20s` reserva 20 espaços para a string, alinhando-a à esquerda (por causa do `-`), e `%10.2f` reserva 10 espaços para o número, com 2 casas decimais.

## Structs dentro de structs

Um campo de uma struct pode ser outra struct. Por exemplo, uma `Pessoa` pode ter uma data de nascimento do tipo `Data`:

```c
typedef struct{
    int dia, mes, ano;
} Data;

typedef struct{
    char nome[50];
    Data nascimento;
} Pessoa;
```

Para acessar o ano de nascimento, encadeamos os pontos: `p1.nascimento.ano`. Na inicialização, usamos chaves dentro de chaves: `{"Dennis Ritchie", {9, 9, 1941}}`.

## Cópia de structs

Diferente dos vetores e strings, uma struct pode ser copiada inteira com uma única atribuição (`p2 = p1`), inclusive os campos de string. Porém, **não é possível comparar** duas structs com `==`: a comparação deve ser feita campo a campo.

Vejamos os dois conceitos no código [`material/cod043.c`](material/cod043.c), usando dois nomes que já conhecemos da [história da linguagem C](../aula00/historia_linguagem_c.md):

```c
#include<stdio.h>
#include<string.h>

typedef struct{
    int dia, mes, ano;
} Data;

typedef struct{
    char nome[50];
    Data nascimento;   // struct dentro de struct
} Pessoa;

int main(){
    Pessoa p1 = {"Dennis Ritchie", {9, 9, 1941}};
    Pessoa p2;

    // Copia todos os campos de uma vez, inclusive a string
    p2 = p1;

    // Altera somente a copia
    strcpy(p2.nome, "Ken Thompson");
    p2.nascimento.dia = 4;
    p2.nascimento.mes = 2;
    p2.nascimento.ano = 1943;

    printf("%s nasceu em %02d/%02d/%d\n", p1.nome, p1.nascimento.dia, p1.nascimento.mes, p1.nascimento.ano);
    printf("%s nasceu em %02d/%02d/%d\n", p2.nome, p2.nascimento.dia, p2.nascimento.mes, p2.nascimento.ano);

    return 0;
}
```

Saída:

```output
Dennis Ritchie nasceu em 09/09/1941
Ken Thompson nasceu em 04/02/1943
```

Repare que alterar `p2` não modificou `p1`: após a atribuição, as duas variáveis são independentes.