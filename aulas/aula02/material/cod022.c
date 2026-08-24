#include<stdio.h>

int main(){
    int num1 = 2, num2 = 3;

    printf("%d > %d -> %d\n", num1, num2, num1 > num2);
    printf("!(%d > %d) -> %d", num1, num2, !(num1 > num2));

    return 0;
}