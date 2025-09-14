#include<stdio.h>

int main(){
	// Estrutura break
	
	int i = 0;
	while (1){
		if (i == 10){
			printf("\nPONTO DE PARADA!\n");
			printf("i = %d", i);
			break;
		}
		
		printf("i = %d\n", i);
		i++;
	}
	
	return 0;
}
