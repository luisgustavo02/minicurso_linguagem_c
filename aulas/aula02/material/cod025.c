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