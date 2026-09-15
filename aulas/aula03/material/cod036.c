#include<stdio.h>

int main(){
    char cidade[] = "Recife";
    int i = 0;

    // Percorre a string ate encontrar o caractere nulo
    while (cidade[i] != '\0'){
        printf("cidade[%d] = '%c' (ASCII %d)\n", i, cidade[i], cidade[i]);
        i++;
    }

    printf("cidade[%d] = '\\0' (ASCII %d)\n", i, cidade[i]);
    printf("A string \"%s\" ocupa %d bytes na memoria\n", cidade, (int) sizeof(cidade));

    return 0;
}