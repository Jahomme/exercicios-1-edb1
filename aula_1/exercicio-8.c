#include <stdio.h>

typedef struct {
    float largura;
    float altura;
} Retangulo;

float calcularArea(Retangulo *r) {
    return (*r).largura * (*r).altura;
}

int main () {
    Retangulo retangulo;

    printf("Digite a largura: ");
    scanf("%f", &retangulo.largura);
    printf("Digite a altura: ");
    scanf("%f", &retangulo.altura);

    float area = calcularArea(&retangulo);
    printf("A area do retangulo deu: %.2f\n", area);


    return 0;
}