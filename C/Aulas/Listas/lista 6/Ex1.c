#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;

    arquivo = fopen("EX1.txt", "w");

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO");
    else
        for (int i = 1; i <= 10; i++)
            fprintf(arquivo, "%d\n", i);

    fclose(arquivo);

    return 0;
} // end main
