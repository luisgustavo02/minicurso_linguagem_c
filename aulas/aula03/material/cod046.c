#include<stdio.h>

int contador = 0; // Variavel global (evite!)

void incrementa(){
    int local = 0; // Variavel local: nasce e morre a cada chamada

    local++;
    contador++;

    printf("local = %d | contador = %d\n", local, contador);
}

int main(){
    incrementa();
    incrementa();
    incrementa();

    // printf("%d", local); -> Erro: local nao existe dentro do main

    return 0;
}