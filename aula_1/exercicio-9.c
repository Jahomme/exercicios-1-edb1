#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("dados.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo \n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }

    fclose(arquivo);

    return 0;
}