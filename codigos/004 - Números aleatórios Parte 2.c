#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	/*
	A funcao srand() definira a nova "semente" (seed).
	
	A funcao time() com o parametro NULL retorna o
	total de segundos desde 1 de janeiro de 1970
	ate a data atual.
	*/
	
	printf("%d", rand()%100);
	
	return 0;
}
