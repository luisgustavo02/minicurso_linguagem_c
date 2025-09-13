#include<stdio.h>

int main(){
	// Estrutura break
	
	int i = 0;
	while (i<10){
		i++;
		
		if (i % 2 == 0){
			printf("\nNUMERO PAR!\n");
			printf("%d\n", i);
		}else{
			continue;
			printf("\nNUMERO IMPAR!\n");
			printf("%d\n", i);
		}
	}
	
	return 0;
}
