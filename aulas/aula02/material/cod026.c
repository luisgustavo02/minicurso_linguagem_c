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