#include<stdio.h>

int main(){
	// Estruturas de uma matriz
	int M = 5, N = 5;
	int matriz[M][N];
	
	int i, j;
	for (i=0; i<M; i++){
		for (j=0; j<N; j++){
			printf("Digite o valor da matriz na posicao [%d][%d]: ", i, j);
			scanf(" %d", &matriz[i][j]);
		}
	}
	
	for (i=0; i<M; i++){
		for (j=0; j<N; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
  
	return 0;
}
