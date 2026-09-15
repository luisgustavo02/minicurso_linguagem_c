#include<stdio.h>

typedef struct{
    float x, y;
} Ponto;

void dobra_numero(int n){
    n = n * 2;
    printf("Dentro da funcao: n = %d\n", n);
}

void move_ponto(Ponto p){
    p.x = p.x + 10;
    p.y = p.y + 10;
    printf("Dentro da funcao: p = (%.1f, %.1f)\n", p.x, p.y);
}

int main(){
    int n = 5;
    Ponto p = {1, 2};

    dobra_numero(n);
    printf("No main: n = %d\n\n", n);

    move_ponto(p);
    printf("No main: p = (%.1f, %.1f)\n", p.x, p.y);

    return 0;
}