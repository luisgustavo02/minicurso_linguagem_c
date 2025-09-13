#include<stdio.h>

// Estrutura de funcao caractere
char intToChar(int n){
	switch (n){
		case 1:
		return 'a';
		break;
		
		case 2:
		return 'b';
		break;
		
		case 3:
		return 'c';
		break;
		
		case 4:
		return 'd';
		break;
		
		case 5:
		return 'e';
		break;
		
		default:
		return '?';
		break;
	}
}

int main(){
	printf("Chamando a funcao:\n");
	printf("%c", intToChar(3));
	
	return 0;
}
