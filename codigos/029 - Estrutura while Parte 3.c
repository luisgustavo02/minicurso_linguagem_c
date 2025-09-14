#include<stdio.h>

int main(){
	// Estrutura while
	
	int i = 4, j = 1;
	// while (condicao de continuidade)
	while (i+j<15){
		printf("%d %d\n", i, j);
		i += 2;
		j--;
	}
	
	return 0;
}
