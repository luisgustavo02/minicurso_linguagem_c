#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	// Determina a seed como nula
	srand(time(NULL));
	
	// Estruturas de uma matriz
	int M = 5, N = 5;
	int matriz[M][N];
	
	// Define a matriz como zero
	int i, j;
	for (i=0; i<M; i++){
		for (j=0; j<N; j++){
			matriz[i][j] = 0;
		}
	}
	
	// Esconde o tesouro
	int X = rand() % 5, Y = rand() % 5;
	matriz[X][Y] = 1;
	
	// Ciclo de tentativas
	while (1){
		
		// Entrada de dados
		int x, y;
		printf("Digite a linha escolhida: ");
		scanf(" %d", &x);
		
		printf("Digite a coluna escolhida: ");
		scanf(" %d", &y);
		
		// Verifica a posicao
		if (matriz[x][y] == 1){
			printf("Parabens! Voce achou o tesouro!");
			break;
		}
		else if (matriz[x][y] == -1){
			printf("Esqueceu onde esta pisando?");
		}
		else{
			matriz[x][y] = -1;
			printf("Tente novamente!");
		}
	}
  
	return 0;
}
