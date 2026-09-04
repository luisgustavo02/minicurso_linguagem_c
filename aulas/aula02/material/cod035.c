#include<stdio.h>

int main(){
    int N;

    printf("Digite o tamanho da matriz: ");
    scanf(" %d", &N);

    int matriz[N][N];

    int i, j;
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){

            matriz[i][j] = ((i + j) % 2 == 0) ? 0 : 1;
            printf("%d ", matriz[i][j]);
        }
        
        // Quebra de linha quando acaba a linha da matriz
        printf("\n");
    }

    return 0;
}