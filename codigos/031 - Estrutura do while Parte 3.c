#include<stdio.h>

int main(){
	// Estrutura do while
	
	int i = 4, j = 1;
	// do {escopo} while (condicao de continuidade)
	do{
		printf("%d %d\n", i, j);
		i += 2;
		j--;
	}while (i+j<15);
	
	return 0;
}
