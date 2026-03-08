#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[50];
    FILE *arquivo;

    arquivo = fopen("EX2.txt", "w");

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO");
    else
        // le texto com espaço,máximo de 50 caracteres
        fgets(texto, 50, stdin);

    // grava texto no arquivo
    fputs(texto, arquivo);

    fclose(arquivo);

    return 0;
} // end main