#include <stdio.h>

#define TAM_NOME 100

typedef struct {
    char nome[TAM_NOME];
    int idade;
    float altura;
} Pessoa;

int main () {
    Pessoa pessoa;

    printf("Digite o nome:");
    fgets(pessoa.nome, TAM_NOME, stdin);

    printf("Digite a idade:");
    scanf("%d", &pessoa.idade);

    printf("Digite a altura:");
    scanf("%f", &pessoa.altura);

    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Altura: %.2f\n", pessoa.altura);


    return 0;
}