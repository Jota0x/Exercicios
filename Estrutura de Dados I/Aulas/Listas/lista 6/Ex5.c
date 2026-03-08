#include <stdio.h>

int main()
{
    char caracter[100];

    FILE *EX5teste1, *EXteste2, *destino;

    // abre arquivo para escrita
    destino = fopen("Ex5.txt", "w");

    if (destino == NULL)
        printf("ERRO AO ABRIR ARQUIVO");
    else
    {
        EX5teste1 = fopen("EX5teste1.txt", "r");

        if (EX5teste1 == NULL)
            printf("ERRO TESTE 1");
        else
        {
            // copia conteudo de teste1 para destino
            while (fgets(caracter, 100, EX5teste1) != NULL)
            {
                fputs(caracter, destino);
            }

            fclose(EX5teste1);
        }

        EXteste2 = fopen("EX5teste2.txt", "r");

        if (EXteste2 == NULL)
            printf("ERRO TESTE 2");
        else
        {
            fprintf(destino, "\n"); // quebra de linha ao mudar para segundo arquivo

            while (fgets(caracter, 100, EXteste2) != NULL)
            {
                fputs(caracter, destino);
            }

            fclose(EXteste2);
        }

        /* fflush(destino); // limpeza de buffer */

        rewind(destino); // volta o ponteiro para o inicio do arquivo para leitura

        // loop para impressão
        while (fgets(caracter, 100, destino) != NULL)
        {
            printf("%s", caracter);
        }

        fclose(destino);
    }

    return 0;
} // end main