#include<stdio.h>

int main(){
    int i, N;

    printf("Digite um numero N: ");
    scanf(" %d", &N);

    // A operacao i++ aumenta 1 unidade por iteração ou ciclo
    for (i=0; i<N; i++){
        printf("%d\n", i+1);
    }
    return 0;
}