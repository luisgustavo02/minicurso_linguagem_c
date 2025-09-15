#include<stdio.h>
#include<math.h>

int main(){
	// Estruturas de um vetor
	int N = 5;
	int vetor[N];
	
	int i;
	for (i=0; i<N; i++){
		printf("Digite o valor do vetor na posicao %d: ", i);
		scanf(" %d", &vetor[i]);
	}
	
	for (i=0; i<N; i++){
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}
	
	return 0;
}
