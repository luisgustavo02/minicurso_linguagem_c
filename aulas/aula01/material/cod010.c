#include<stdio.h>

int main(){
    int num1 = 215, num2 = 2, num3 = 3, num4 = 5;
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    printf("%d %% %d = %d\n", num1, num3, num1 % num3);
    printf("%d %% %d = %d", num1, num4, num1 % num4);

    return 0;
}