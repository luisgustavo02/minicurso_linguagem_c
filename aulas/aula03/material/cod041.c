#include<stdio.h>

// Definicao da struct (fora e antes do main)
struct aluno{
    char nome[50];
    int matricula;
    float nota;
};

int main(){
    // Inicializacao na declaracao, na mesma ordem dos campos
    struct aluno a1 = {"Dennis Ritchie", 1941, 10.0};
    struct aluno a2;

    printf("Digite o nome do aluno: ");
    scanf(" %49[^\n]", a2.nome);

    printf("Digite a matricula: ");
    scanf(" %d", &a2.matricula);

    printf("Digite a nota: ");
    scanf(" %f", &a2.nota);

    printf("\n%s | Matricula: %d | Nota: %.1f\n", a1.nome, a1.matricula, a1.nota);
    printf("%s | Matricula: %d | Nota: %.1f\n", a2.nome, a2.matricula, a2.nota);

    return 0;
}