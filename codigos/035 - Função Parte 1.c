#include<stdio.h>

// Estrutura de funcao inteira
int soma(int n, int inc){
	return n + inc;
}

int main(){
	int num = 12;
	
	printf("Funcao soma: %d", soma(num, 3));
	
	return 0;
}
