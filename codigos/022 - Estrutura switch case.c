#include<stdio.h>

int main(){
	// Estrutura switch case
	int num1 = 4;
	
	switch (num1){
		case 1:
		printf("Domingo");
		break;
		
		case 2:
		printf("Segunda-feira");
		break;
		
		case 3:
		printf("Terca-feira");
		break;
		
		case 4:
		printf("Quarta-feira");
		break;
		
		case 5:
		printf("Quinta-feira");
		break;
		
		case 6:
		printf("Sexta-feira");
		break;
		
		case 7:
		printf("Sabado");
		break;
		
		default:
		printf("Entrada invalida");
	}
	
	return 0;
}
