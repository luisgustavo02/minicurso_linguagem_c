#include<stdio.h>

int main(){
	// Estrutura if, else if e else
	int num1 = 1;
	int num2 = 3;
	
	if (num1 == num2){
		printf("A variavel num1 eh igual a variavel num2!");
	}else if (num1 < num2){
		printf("A variavel num1 eh menor que a variavel num2!");
	}else{
		printf("A variavel num2 eh maior que a variavel num2!");
	}
	
	return 0;
}
