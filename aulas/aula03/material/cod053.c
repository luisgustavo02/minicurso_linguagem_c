#include<stdio.h>

int main(){
    int v[] = {10, 20, 30, 40};
    int *p = v;   // O mesmo que p = &v[0]
    int i;

    printf("v     = %p\n", (void *) v);
    printf("&v[0] = %p\n\n", (void *) &v[0]);

    for (i=0; i<4; i++){
        printf("v[%d] = %d | *(p + %d) = %d | endereco: %p\n", i, v[i], i, *(p + i), (void *) (p + i));
    }

    return 0;
}