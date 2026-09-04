#include<stdio.h>

int main(){
    int i, N=7;
    float media, notas[]={8.4, 3.5, 5.9, 9.7, 1.8, 7.7, 6.2};

    for (i=0; i<N; i++){
        printf("nota %d: %.2f\n", i+1, notas[i]);
        media += notas[i];
        // media = media + notas[i];
    }

    media /= N;
    // media = media / N;

    printf("A media da turma foi: %.2f", media);

    return 0;
}