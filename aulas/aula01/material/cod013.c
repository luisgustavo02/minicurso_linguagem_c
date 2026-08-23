#include<stdio.h>

int main(){
    int idade;
    float altura, peso;
    char sexo;

    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("Digite sua altura (em m): ");
    scanf(" %f", &altura);
    printf("Digite seu peso: ");
    scanf(" %f", &peso);
    printf("Digite seu sexo: ");
    scanf(" %c", &sexo);

    return 0;
}