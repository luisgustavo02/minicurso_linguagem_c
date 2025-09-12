#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("%d", rand()%100);
	
	/*
	A funcao rand() retorna um numero aleatorio numa faixa entre 0 e 
	RAND_MAX, definido no arquivo stdlib.h
	
	Para a funcao rand() funcionar, ela precisa de uma "semente" (seed).
	A semente eh pre-definida como uma constante
	*/
	
	return 0;
}
