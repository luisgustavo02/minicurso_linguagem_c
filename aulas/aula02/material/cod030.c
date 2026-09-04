#include<stdio.h>

int main(){
    int i=0, N;

    printf("Digite um numero inteiro: ");
    scanf(" %d", &N);

    while (i<N){
        printf("%d\n", i+1);
        i++;
    }
    
    return 0;
}