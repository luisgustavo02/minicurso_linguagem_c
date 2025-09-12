#include<stdio.h>

int main(){
	// Declarando variaveis inteiras
	int numeroInteiro = 9;
	printf("Numero inteiro: %d\n", numeroInteiro);
	
	// Declarando variaveis ponto flutuante
	float numeroFloat = 2.578;
	printf("Numero inteiro: %.3f\n", numeroFloat);
	
	// Declarando variaveis ponto flutuante com alta precisao
	double numeroDouble = 0.123456789123456;
	printf("Numero inteiro: %.15lf\n", numeroDouble);
	
	// Declarando variaveis caractere
	char caractere = '+';
	printf("Caractere: %c\n", caractere);
	
	return 0;
}
