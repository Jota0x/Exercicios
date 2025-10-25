#include <stdio.h>

int main()
{
    int N;
    char letra;

    FILE *arquivo;

    arquivo = fopen("EX7.txt", "w");

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO");
    else
    {
        // numero de letras
        scanf("%d", &N);

        // loop para leitura
        for (int i = 0; i < N; i++)
        {
            scanf(" %c", &letra);
            fprintf(arquivo, "%c\n", letra);
        }

        fclose(arquivo);

        // abre arquivo para leitura
        arquivo = fopen("EX7.txt", "r");

        // variaveis de controle
        int contador = 0;
        int caracterLido;

        // arquivo para verificar vogal
        while ((caracterLido = fgetc(arquivo)) != EOF)
        {
            if (caracterLido == 'A' || caracterLido == 'E' || caracterLido == 'I' || caracterLido == 'O' || caracterLido == 'U')
                contador++;
        }

        printf("%d", contador);

        fclose(arquivo);
    }

    return 0;
} // end main