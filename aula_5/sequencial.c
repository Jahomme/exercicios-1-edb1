#include <stdio.h>

int buscaSequencial(int i,int n, int c,int v[]) {
    printf("i: %d\n", i);
    printf("v[i]: %d\n", v[i]);
    printf("c: %d\n", c);
    
    if (i > n - 1) {
        return -1;
    }

    if (v[i] == c) {
        return i;
    }


    return buscaSequencial(i + 1, n, c, v);
}

int main () {
    int vetor[5], c,i;
    i = 0;

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    };

    printf("Digite o numero inteiro que deseja buscar\n");
    scanf("%d", &c);

    int resultado = buscaSequencial(i,5, c, vetor);

    if (resultado == -1) {
        printf("Este numero nao pertence ao vetor\n");
        return -1;
    }

    printf("O numero pertence ao vetor e tem indice: %d", resultado);

    return 0;
}