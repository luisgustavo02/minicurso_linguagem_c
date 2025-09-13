#include<stdio.h>

int main(){
	// Estrutura for
	
	int i, j;
	// for (inicio; condicao de parada; passo)
	for (i=4, j=1; i+j<15; i+=2, j--){
		printf("%d %d\n", i, j);
	}
	
	return 0;
}
