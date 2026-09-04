#include<stdio.h>

int main(){
    int N;
    float media;

    printf("Digite a quantidade de notas: ");
    scanf(" %d", &N);
    
    float notas[N];

    int i;
    for (i=0; i<N; i++){
        printf("Digite a nota %d: ", i+1);
        scanf(" %f", &notas[i]);
        media += notas[i];
        // media = media + notas[i];
    }

    media /= N;
    // media = media / N;

    printf("A media da turma foi: %.2f\n", media);

    return 0;
}