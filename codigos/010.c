#include<stdio.h>
#include<ctype.h>

int main(){
	// Algumas das principais funcoes da biblioteca ctype
	printf("isupper('g') = %d\n", isupper('g'));
	printf("isupper('G') = %d\n\n", isupper('G'));
	printf("islower('g') = %d\n", islower('g'));
	printf("islower('G') = %d\n", islower('G'));
	
	return 0;
}
