# Vetores e Matrizes

Vetores são um tipo de estrutura de dados onde se consegue armazenar diversos valores de um tipo específico. Também é possível determinar a quantidade de dimensões que um vetor terá.

Consideramos um vetor que representa as notas dos alunos de uma sala, por exemplo:

| Posição | Nota |
| ------- | ---: |
| 0       | 8.4  |
| 1       | 3.5  |
| 2       | 5.9  |
| 3       | 9.7  |
| 4       | 1.8  |
| 5       | 7.7  |
| 6       | 6.2  |

Em um vetor, podemos ter essa representação a partir da posição $0$ até a posição $N-1$, considerando um vetor de tamanho $N$, tal que $N$ é inteiro. Para declarar um vetor, usamos como base o pseudocódigo abaixo:

```
<tipo> <nome_do_vetor>[N]
```

Caso deseje declarar os valores de cada posição do vetor, é possível fazê-lo da seguinte forma:

```
<tipo> <nome_do_vetor>[N] = {valor1, valor2, ..., valorN};
```

A quantidade de colchetes indica a quantidade de dimensões. Vamos utilizar a base da tabela e os conceitos de estruturas de repetição para mostrar as notas e calcular a média da turma, conforme o código [`material/cod033.c`](material/cod033.c).

```c
#include<stdio.h>

int main(){
    int i, N=7;
    float media, notas[N]={8.4, 3.5, 5.9, 9.7, 1.8, 7.7, 6.2};

    for (i=0; i<N; i++){
        printf("nota %d: %.2f\n", i+1, notas[i]);
        media += notas[i];
        // media = media + notas[i];
    }

    media /= N;
    // media = media / N;

    printf("A media da turma foi: %.2f", media);

    return 0;
}
```

Assim, nossa saída é:

```output
nota 1: 8.40
nota 2: 3.50
nota 3: 5.90
nota 4: 9.70
nota 5: 1.80
nota 6: 7.70
nota 7: 6.20
A media da turma foi: 6.17
```

Também é possível definir os valores de cada posição do vetor, utilizando a função `scanf()`. Dessa forma, seguinte o exemplo do arquivo [`material/cod034.c`](material/cod034.c), temos:

```c
#include<stdio.h>

int main(){
    int N;
    float media;

    printf("Digite a quantidade de notas: ");
    scanf(" %d", &N);
    
    float notas[N];

    int i;
    for (i=0; i<N; i++){
        printf("Digite a nota %d: ", i+1);
        scanf(" %f", &notas[i]);
        media += notas[i];
        // media = media + notas[i];
    }

    media /= N;
    // media = media / N;

    printf("A media da turma foi: %.2f", media);

    return 0;
}
```

Para vetores de caracteres, funciona um pouco diferente. Veremos um pouco melhor no material da próxima aula.

Já para o assunto de matrizes, é muito similar aos vetores, porém tratamos com 1 ou mais dimensões. Para isso, imagine um tabuleiro de xadrez de tamanho $N$ x $N$. Vamos construí-lo com base em $0$ e $1$.

Vamos levar em consideração que a primeira casa ou posição do tabuleiro é [$0$][$0$], iniciando no valor de $0$. Observe que a soma dos seus índices, chamaremos de `i` e `j` é um número par, o que nos ajuda bastante. Vamos começar o esboço:

```c
#include<stdio.h>

int main(){
    int N;

    printf("Digite o tamanho da matriz: ");
    scanf(" %d", &N);

    int matriz[N][N];

    return 0;
}
```

Para tratar de cada dimensão, precisaremos de ciclo de repetição, por isso teremos um `for` dentro de outro `for`.

```c
#include<stdio.h>

int main(){
    int N;

    printf("Digite o tamanho da matriz: ");
    scanf(" %d", &N);

    int matriz[N][N];

    int i, j;
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            // Escopo do código
        }
    }

    return 0;
}
```

Agora para definir os valores da matriz, vamos pegar o conceito de condicionais e verificar se a soma dos índices é um número par:

```c
#include<stdio.h>

int main(){
    int N;

    printf("Digite o tamanho da matriz: ");
    scanf(" %d", &N);

    int matriz[N][N];

    int i, j;
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            
            // Soma dos indices -> par
            if ((i + j) % 2 == 0){
                matriz[i][j] = 0;
            }

            // Soma dos indices -> impar
            else{
                matriz[i][j] = 1;
            }
        }
    }

    return 0;
}
```

Podemos simplificar esse código utilizando o conceito de **operador ternário** visto em [`estruturas_condicionais.md`](estruturas_condicionais.md).

```c
#include<stdio.h>

int main(){
    int N;

    printf("Digite o tamanho da matriz: ");
    scanf(" %d", &N);

    int matriz[N][N];

    int i, j;
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){

            matriz[i][j] = ((i + j) % 2 == 0) ? 0 : 1;
            printf("%d ", matriz[i][j]);
        }

        // Quebra de linha quando acaba a linha da matriz
        printf("\n");
    }

    return 0;
}
```

Esse código pode ser encontrado no arquivo [`material/cod035.c`](material/cod035.c).