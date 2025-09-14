#include<stdio.h>

// Fibonacci
int Fibo(int n){
	if (n == 0 || n == 1){
		return 1;
	}else{
		return Fibo(n - 1) + Fibo(n - 2);
	}
}

int main(){
	int N = 9;
	printf("fibonacci(%d) = %d", N, Fibo(N));
	
	return 0;
}
