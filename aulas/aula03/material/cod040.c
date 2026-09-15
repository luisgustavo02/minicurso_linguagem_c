#include<stdio.h>
#include<string.h>

int main(){
    char nomes[3][20];
    int i;

    for (i=0; i<3; i++){
        printf("Digite o nome %d: ", i+1);
        scanf(" %19[^\n]", nomes[i]);
    }

    printf("\nNomes cadastrados:\n");
    for (i=0; i<3; i++){
        printf("%d. %s (%d caracteres)\n", i+1, nomes[i], (int) strlen(nomes[i]));
    }

    return 0;
}