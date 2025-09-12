#include<stdio.h>

int main(){
	// Analisando valores e endereco de memoria de variaveis
	int var;
	printf("No inicio:\n");
	printf("var = %d\n", var);
	printf("&var = %d\n\n", &var);
	
	var = 10;
	printf("Depois da atribuicao:\n");
	printf("var = %d\n", var);
	printf("&var = %d\n\n", &var);
	
	return 0;
}
