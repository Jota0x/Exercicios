#include <stdio.h>

int main()
{
    int matricula, telefone;
    int opcao;
    char caracter[100];

    FILE *saida, *entrada;

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        saida = fopen("saida.txt", "w");
        if (saida == NULL)
            printf("ERRO AO ABRIR ARQUIVO");
        else
        {

            scanf("%d%d", &matricula, &telefone);
            while (matricula > 0)
            {
                fprintf(saida, "%d %d\n", matricula, telefone);
                scanf("%d%d", &matricula, &telefone);
            }

            fclose(saida);
        }

        break;

    case 2:
        entrada = fopen("entrada.txt", "r");

        if (entrada == NULL)
            printf("ERRO AO ABRIR ARQUIVO");
        else
        {
            while (fgets(caracter, 100, entrada) != NULL)
            {
                fputs(caracter, saida);
            }

            fclose(entrada);
        }
        break;
    default:
        break;
    }

    return 0;
} // end main