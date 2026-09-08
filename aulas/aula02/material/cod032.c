#include<stdio.h>

int main(){
    int i;
    while (1){
        int num;
        printf("Digite um numero: ");
        scanf(" %d", &num);

        if (num % 2 == 0){
            printf("Voce digitou um numero par!\n");
            break;
        }
    }
    
    return 0;
}