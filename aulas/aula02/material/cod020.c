#include<stdio.h>

int main(){
    int num1 = 2, num2 = 3, num3 = 1, num4 = 2;

    printf("(%d < %d) && (%d < %d) -> %d\n", num1, num2, num3, num4, (num1 < num2 && num3 < num4));
    printf("(%d == %d) && (%d > %d) -> %d", num1, num4, num2, num3, (num1 == num4 && num2 > num3));

    return 0;
}