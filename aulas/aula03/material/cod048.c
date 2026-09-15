#include<stdio.h>

// Vetores precisam do tamanho como parametro extra
float media_vetor(float v[], int tamanho){
    int i;
    float soma = 0;

    for (i=0; i<tamanho; i++){
        soma += v[i];
    }

    return soma / tamanho;
}

// Vetores NAO sao copiados: a funcao altera o vetor original
void zera_negativos(float v[], int tamanho){
    int i;

    for (i=0; i<tamanho; i++){
        if (v[i] < 0){
            v[i] = 0;
        }
    }
}

// Strings nao precisam do tamanho: o '\0' indica o fim
int conta_caracteres(char texto[]){
    int i = 0;

    while (texto[i] != '\0'){
        i++;
    }

    return i;
}

int main(){
    float leituras[] = {3.3, -0.2, 5.0, 4.8, -1.1};
    char curso[] = "Linguagem C";

    printf("Media antes: %.2f\n", media_vetor(leituras, 5));

    zera_negativos(leituras, 5);
    printf("Media depois: %.2f\n", media_vetor(leituras, 5));

    printf("\"%s\" tem %d caracteres\n", curso, conta_caracteres(curso));

    return 0;
}