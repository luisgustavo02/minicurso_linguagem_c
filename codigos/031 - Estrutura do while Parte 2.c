#include<stdio.h>

int main(){
	// Estrutura do while
	
	int i = 10;
	// do {escopo} while (condicao de continuidade)
	do{
		printf("%d ", i);
		i--;
	}while (i>0);
	
	return 0;
}
