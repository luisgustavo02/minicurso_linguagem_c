#include<stdio.h>

int main(){
    int N;

    printf("Digite um numero N: ");
    scanf(" %d", &N);

    int i=0;
    do{
        printf("%d\n", i+1);
        i++;
    }while (i<N);
    return 0;
}