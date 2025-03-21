#include <stdio.h>

int somaVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    };
    return soma;
}

int main () {
    int valores[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    };

    int soma = somaVetor(valores, 5);

    printf("A soma dos valores deu: %d", soma);
    return 0;
}