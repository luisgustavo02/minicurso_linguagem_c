#include<stdio.h>

// Estrutura de funcao ponto flutuante
float absVal(float n){
	if (n > 0){
		return n;
	}else{
		return -n;
	}
}

int main(){
	float n1 = -3.4, n2 = -99, n3 = 12, n4 = 0;
	
	printf("Funcao abs(-3.4) = %f\n", absVal(n1));
	printf("Funcao abs(-99) = %f\n", absVal(n2));
	printf("Funcao abs(12) = %f\n", absVal(n3));
	printf("Funcao abs(0) = %f\n", absVal(n4));
	
	return 0;
}
