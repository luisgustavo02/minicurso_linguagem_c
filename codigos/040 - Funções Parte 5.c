#include<stdio.h>

// Fatorial
int Fatorial(int n){
	if (n <= 1){
		return 1;
	}else{
		return n * Fatorial(n-1);
	}
}

int main(){
	int N = 6;
	
	printf("Fatorial de %d: %d", N, Fatorial(N));
	
	return 0;
}
