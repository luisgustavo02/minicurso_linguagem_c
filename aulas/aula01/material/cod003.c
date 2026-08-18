#include<stdio.h>

int main(){
    int numero_idade = 24;
    float numeroAltura = 1.83;
    double cotacao_do_dolar_2026 = 5.2135;
    char SimboloQualquer = '&';

    printf("numero_idade: %d\n", numero_idade);
    printf("numeroAltura: %f\n", numeroAltura);
    printf("cotacao_do_dolar_2026: %lf\n", cotacao_do_dolar_2026);
    printf("SimboloQualquer: %c\n\n", SimboloQualquer);

    printf("Endereco de memoria de numero_idade: %d\n", &numero_idade);
    printf("Endereco de memoria de numeroAltura: %f\n", &numeroAltura);
    printf("Endereco de memoria de cotacao_do_dolar_2026: %lf\n", &cotacao_do_dolar_2026);
    printf("Endereco de memoria de SimboloQualquer: %c", &SimboloQualquer);

    return 0;
}