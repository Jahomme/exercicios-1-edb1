#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temporario = *a;
    *a = *b;
    *b = temporario;
}

int main () {
    int a, b;

    printf("Digite dois numeros inteiros");
    scanf("%d %d", &a, &b);
    printf("Valores antes: numero 1 = %d, numero 2 = %d\n", a, b);

    trocarValores(&a, &b);

    printf("Valores depois: numero 1 = %d, numero 2 = %d", a, b);

    return 0;
}