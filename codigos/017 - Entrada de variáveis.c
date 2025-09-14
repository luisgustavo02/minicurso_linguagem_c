#include<stdio.h>

int main(){
	int numInt;
	printf("Digite um numero inteiro: ");
	scanf(" %d", &numInt);
	
	printf("O numero inteiro digitado foi: %d\n\n", numInt);
	
	float numFloat;
	printf("Digite um numero float: ");
	scanf(" %f", &numFloat);
	
	printf("O numero float digitado foi: %f\n\n", numFloat);
	
	double numDouble;
	printf("Digite um numero double: ");
	scanf(" %lf", &numDouble);
	
	printf("O numero double digitado foi: %lf\n\n", numDouble);
	
	char caract;
	printf("Digite um caractere: ");
	scanf(" %c", &caract);
	
	printf("O caractere digitado foi: %c", caract);
	
	return 0;
}
