#include<stdio.h>
#include<math.h>

int main(){
	// Algumas das principais funcoes matematicas da biblioteca math
	printf("sqrt(4) = %f\tsqrt(10) = %f\n", sqrt(4), sqrt(10));
	printf("pow(4, 2) = %f\tpow(10, 3) = %f\n", pow(4, 2), pow(10, 3));
	printf("e = %f\n", M_E);
	printf("exp(1) = %f\texp(2) = %f\n", exp(1), exp(2));
	printf("log(e) = %f\tlog(2) = %f\n", log(exp(1)), log(2));
	printf("log10(10) = %f\tlog10(2) = %f\n", log10(10), log10(2));
	
	return 0;
}
