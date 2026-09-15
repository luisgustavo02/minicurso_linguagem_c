#include<stdio.h>
#include<string.h>

int main(){
    char primeiro_nome[20];
    char nome_completo[50];
    char cidade[30];

    // %s le somente ate o primeiro espaco
    printf("Digite seu primeiro nome: ");
    scanf(" %19s", primeiro_nome);

    // %[^\n] le tudo ate o ENTER (inclusive espacos)
    printf("Digite seu nome completo: ");
    scanf(" %49[^\n]", nome_completo);

    // Descarta o ENTER que o scanf deixou para tras
    getchar();

    // fgets tambem le a linha inteira, mas guarda o '\n' no final
    printf("Digite sua cidade: ");
    fgets(cidade, 30, stdin);

    // Remove o '\n' trocando-o por '\0'
    int tamanho = strlen(cidade);
    if (tamanho > 0 && cidade[tamanho - 1] == '\n'){
        cidade[tamanho - 1] = '\0';
    }

    printf("\nPrimeiro nome: %s\n", primeiro_nome);
    printf("Nome completo: %s\n", nome_completo);
    printf("Cidade: %s\n", cidade);

    return 0;
}