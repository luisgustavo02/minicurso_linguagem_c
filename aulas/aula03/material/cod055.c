#include<stdio.h>
#include<stdlib.h>

int main(){
    int N, i;
    float soma = 0;

    printf("Quantas notas? ");
    scanf(" %d", &N);

    // Reserva espaco para N floats
    float *notas = (float *) malloc(N * sizeof(float));

    if (notas == NULL){
        printf("Erro: memoria insuficiente!\n");
        return 1;
    }

    for (i=0; i<N; i++){
        printf("Nota %d: ", i+1);
        scanf(" %f", &notas[i]);
        soma += notas[i];
    }

    printf("Media: %.2f\n", soma / N);

    // Devolve a memoria ao sistema
    free(notas);

    return 0;
}