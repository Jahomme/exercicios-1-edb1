#include <stdio.h>

int somaDiagonalMatriz(int matriz[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    };
    return soma;
}

int main () {
    int matriz[3][3];

    printf("Digite os 9 numeros inteiros da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    };

    int soma = somaDiagonalMatriz(matriz);

    printf("A soma dos valores da diagonal principal deu: %d", soma);
    return 0;
}