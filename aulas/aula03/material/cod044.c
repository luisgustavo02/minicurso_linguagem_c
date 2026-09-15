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