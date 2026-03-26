#include<stdio.h>

int main(){
	// Vetor de caracteres
	char nome[100];
	
	printf("Digite seu nome: ");
	// Faz a leitura de caracteres ate a quebra de linha (pressionar enter)
	scanf(" %[^\n]", nome);
	
	printf("\nSeu nome e: %s", nome);
  
	return 0;
}
