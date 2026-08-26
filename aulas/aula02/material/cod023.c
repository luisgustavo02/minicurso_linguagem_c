#include<stdio.h>

int main(){
    char simb1 = 'R', simb2 = 't', simb3 = '3', simb4 = ' ';

    printf("Simbolo\t| Decimal\t| Hexadecimal\t|\n");
    printf("--------|-----------|---------------|\n");
    printf("%c\t\t| %d\t\t| %x\t\t\t|\n", simb1, simb1, simb1);
    printf("%c\t\t| %d\t\t| %x\t\t\t|\n", simb2, simb2, simb2);
    printf("%c\t\t| %d\t\t| %x\t\t\t|\n", simb3, simb3, simb3);
    printf("%c\t\t| %d\t\t| %x\t\t\t|\n", simb4, simb4, simb4);

    return 0;
}