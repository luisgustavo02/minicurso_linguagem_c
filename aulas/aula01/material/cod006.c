#include<stdio.h>

int main(){
    int num1 = -3, num2 = 7;
    float num3 = -12.4, num4 = 1.345;

    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d - %f = %f\n", num1, num3, num1 - num3);
    printf("%f - %f = %f", num3, num4, num3 - num4);

    return 0;
}