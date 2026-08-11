#include<stdio.h>

int main(){

    printf("int: %ld\n", sizeof(int));
    printf("long int: %ld\n", sizeof(long int));
    printf("short int: %ld\n", sizeof(short int));
    printf("float: %ld\n", sizeof(float));
    printf("double: %ld\n", sizeof(double));
    printf("long double: %ld\n", sizeof(long double));
    printf("char: %ld\n", sizeof(char));

    return 0;
}