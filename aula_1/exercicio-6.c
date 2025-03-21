#include <stdio.h>
#include <stdlib.h>



int main () {
    int *numeros;
    int soma = 0, i;

    numeros = (int *)malloc(5 * sizeof(int));

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i ++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("A soma dos numeros deu: %d\n", soma);

    free(numeros);

    return 0;
}