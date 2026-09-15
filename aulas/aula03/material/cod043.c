#include<stdio.h>
#include<string.h>

typedef struct{
    int dia, mes, ano;
} Data;

typedef struct{
    char nome[50];
    Data nascimento;   // struct dentro de struct
} Pessoa;

int main(){
    Pessoa p1 = {"Dennis Ritchie", {9, 9, 1941}};
    Pessoa p2;

    // Copia todos os campos de uma vez, inclusive a string
    p2 = p1;

    // Altera somente a copia
    strcpy(p2.nome, "Ken Thompson");
    p2.nascimento.dia = 4;
    p2.nascimento.mes = 2;
    p2.nascimento.ano = 1943;

    printf("%s nasceu em %02d/%02d/%d\n", p1.nome, p1.nascimento.dia, p1.nascimento.mes, p1.nascimento.ano);
    printf("%s nasceu em %02d/%02d/%d\n", p2.nome, p2.nascimento.dia, p2.nascimento.mes, p2.nascimento.ano);

    return 0;
}