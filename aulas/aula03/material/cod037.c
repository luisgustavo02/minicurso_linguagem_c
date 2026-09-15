#include<stdio.h>
#include<string.h>

int main(){
    char nome[30] = "Linguagem";
    char complemento[] = " C";
    char copia[30];

    // strlen: quantidade de caracteres (sem contar o '\0')
    printf("strlen(\"%s\") = %d\n", nome, (int) strlen(nome));

    // strcpy: copia a segunda string para a primeira
    strcpy(copia, nome);
    printf("copia = %s\n", copia);

    // strcat: cola a segunda string no final da primeira
    strcat(nome, complemento);
    printf("nome = %s\n", nome);

    // strcmp: compara as strings caractere por caractere (tabela ASCII)
    char fruta1[] = "abacaxi";
    char fruta2[] = "banana";
    int resultado = strcmp(fruta1, fruta2);

    if (resultado < 0){
        printf("%s vem antes de %s\n", fruta1, fruta2);
    }
    else if (resultado > 0){
        printf("%s vem depois de %s\n", fruta1, fruta2);
    }
    else{
        printf("As strings sao iguais\n");
    }

    return 0;
}