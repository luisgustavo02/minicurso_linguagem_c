#include<stdio.h>

// Prototipos: avisam ao compilador que as funcoes existem
float media(float n1, float n2, float n3);
int aprovado(float m);

int main(){
    float n1, n2, n3;

    printf("Digite as 3 notas: ");
    scanf(" %f %f %f", &n1, &n2, &n3);

    float m = media(n1, n2, n3);
    printf("Media: %.2f\n", m);

    if (aprovado(m)){
        printf("Aprovado!\n");
    }
    else{
        printf("Reprovado!\n");
    }

    return 0;
}

// Definicoes das funcoes (depois do main)
float media(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}

int aprovado(float m){
    // Retorna 1 (verdadeiro) ou 0 (falso)
    return m >= 7;
}