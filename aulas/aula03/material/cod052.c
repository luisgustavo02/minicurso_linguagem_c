#include<stdio.h>

// Retorna 1 se a divisao foi possivel e 0 caso contrario.
// Os resultados sao "devolvidos" pelos ponteiros.
int divide(int dividendo, int divisor, int *quociente, int *resto){
    if (divisor == 0){
        return 0;
    }

    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;

    return 1;
}

int main(){
    int a, b, q, r;

    printf("Digite o dividendo e o divisor: ");
    scanf(" %d %d", &a, &b);

    if (divide(a, b, &q, &r)){
        printf("%d / %d = %d, com resto %d\n", a, b, q, r);
    }
    else{
        printf("Nao e possivel dividir por zero!\n");
    }

    return 0;
}