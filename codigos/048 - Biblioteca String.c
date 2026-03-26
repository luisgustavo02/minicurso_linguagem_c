#include<stdio.h>
#include<string.h>

int main(){
	// Vetor de caracteres
	char nome[100];
	
	printf("Digite seu nome: ");
	// Faz a leitura de caracteres ate a quebra de linha (pressionar enter)
	scanf(" %[^\n]", nome);
	
	// Funcionalidades da biblioteca string.h
	printf("\nTamanho do vetor: %d\n", strlen(nome));
	
	// Comparando com outro vetor
	printf("O vetor e igual a 'Chocolate'? %d\n", strcmp(nome, "Chocolate"));
	
	// Comparando com outro vetor
	printf("O vetor e igual a 'Luis Gustavo'? %d\n", strcmp(nome, "Luis Gustavo"));
	
	// Comparando com outro vetor
	printf("O vetor e igual a 'Miguel'? %d\n", strcmp(nome, "Miguel"));
	
	// Copiando o vetor
	char nome2[50];
	
	strcpy(nome2, nome);
	
	printf("Variavel nome2: %s", nome2);
  
	return 0;
}
