#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char frase[100];
    int i, vogais = 0;

    printf("Digite uma frase: ");
    scanf(" %99[^\n]", frase);

    int tamanho = strlen(frase);

    for (i=0; i<tamanho; i++){
        char letra = tolower(frase[i]);

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            vogais++;
        }

        // Converte cada caractere para maiusculo
        frase[i] = toupper(frase[i]);
    }

    printf("Em maiusculas: %s\n", frase);
    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}