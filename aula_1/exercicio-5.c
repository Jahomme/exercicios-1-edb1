#include <stdio.h>

void trocarValores(int *a, int *b, int *c, int *d, int *e) {
    int temporario = *e;
    *e = *d;
    *d = *c;
    *c = *b;
    *b = *a;
    *a = temporario;
}

int main () {
    int a, b, c, d, e;

    printf("Digite 5 numeros inteiros");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("Valores antes da troca: numero 1 = %d, numero 2 = %d, numero 3 = %d, numero 4 %d, numero 5 = %d\n", a, b, c, d, e);

    trocarValores(&a, &b, &c, &d, &e);
    int soma = a + b + c + d + e;

    printf("Valores depois da troca: numero 1 = %d, numero 2 = %d, numero 3 = %d, numero 4 %d, numero 5 = %d\n", a, b, c, d, e);
    printf("Soma dos valores: %d", soma);

    return 0;
}