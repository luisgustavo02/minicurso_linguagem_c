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