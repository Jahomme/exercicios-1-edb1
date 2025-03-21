#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo;
    char texto[256];

    arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo \n");
        return 1;
    }

    printf("Digite o texto para o arquivo dados.txt:");
    fgets(texto, sizeof(texto), stdin);

    fprintf(arquivo, "%s", texto);

    fclose(arquivo);

    return 0;
}