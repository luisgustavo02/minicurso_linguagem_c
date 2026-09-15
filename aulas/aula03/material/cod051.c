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