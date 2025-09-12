#include<stdio.h>
#include<locale.h>

int main(){
	/*
	A funcao setlocale() auxilia a definir os dados do programa
	para a regiao do Brasil, onde se fala portugues
	*/
	setlocale(LC_ALL, "Portuguese");
	
	printf("Boa tarde pessoal!\n");
	printf("Tudo bem com vocês?\n");
	printf("Como vocês estão?");
	
	return 0;
}
