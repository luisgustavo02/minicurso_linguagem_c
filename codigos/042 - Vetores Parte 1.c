#include<stdio.h>
#include<math.h>

int main(){
	// Estruturas de um vetor
	int N = 5;
	float vetor[N];
	
	int i;
	for (i=0; i<N; i++){
		printf("Digite o valor do vetor na posicao %d: ", i);
		scanf(" %f", &vetor[i]);
	}
	
	float media = 0;
	for (i=0; i<N; i++){
		printf("vetor[%d] = %.2f\n", i, vetor[i]);
		media += vetor[i];
	}
	media /= N;			// media = media / N;
	
	printf("media = %.2f\n", media);
	
	float desvio = 0;
	for (i=0; i<N; i++){
		desvio += pow(vetor[i] - media, 2);
	}
	
	desvio = sqrt(desvio/N);
	
	printf("desvio = %.2f", desvio);
	
	return 0;
}
