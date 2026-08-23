#include<stdio.h>

int main(){
    printf("%d == %d -> %d\n", 1, 1, 1 == 1);
    printf("%d == %f -> %d\n", 1, 1.0, 1 == 1.0);
    printf("%d == %d -> %d\n", 1, 2, 1 == 2);
    printf("%c == %c -> %d\n", 'c', 'C', 'c' == 'C');

    return 0;
}