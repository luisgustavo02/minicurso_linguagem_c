#include<stdio.h>

int fatorial(int n){
    // Caso base: encerra a recursao
    if (n <= 1){
        return 1;
    }

    // Chamada recursiva: n! = n * (n-1)!
    return n * fatorial(n - 1);
}

int main(){
    int n;

    printf("Digite um numero: ");
    scanf(" %d", &n);

    printf("%d! = %d\n", n, fatorial(n));

    return 0;
}