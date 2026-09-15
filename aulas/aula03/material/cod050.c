#include<stdio.h>

int main(){
    int x = 10;
    int *p;     // p e um ponteiro para inteiro

    p = &x;     // p recebe o endereco de x

    // %p imprime enderecos (convertidos para void *)
    printf("x  = %d\n", x);
    printf("&x = %p\n", (void *) &x);
    printf("p  = %p\n", (void *) p);
    printf("*p = %d\n", *p);
    printf("&p = %p\n\n", (void *) &p);

    // Altera o valor guardado no endereco para onde p aponta
    *p = 25;

    printf("Depois de *p = 25:\n");
    printf("x  = %d\n", x);

    return 0;
}