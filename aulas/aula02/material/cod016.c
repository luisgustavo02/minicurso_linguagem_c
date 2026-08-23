#include<stdio.h>

int main(){
    printf("%d > %d -> %d\n", 1, 1, 1 > 1);
    printf("%d > %f -> %d\n", 1, 1.0, 1 > 1.0);
    printf("%f > %d -> %d\n", 1.0, 1, 1.0 > 1);
    printf("%d > %d -> %d\n", 1, 2, 1 > 2);
    printf("%d > %d -> %d\n", 2, 1, 2 > 1);
    printf("%c > %c -> %d\n", 'c', 'C', 'c' > 'C');
    printf("%c > %c -> %d\n", 'C', 'c', 'C' > 'c');

    return 0;
}