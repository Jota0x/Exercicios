#include <stdio.h>

int main()
{
    int contador = 0;   // contador de linhas
    char caracter[100]; // buffer para controle de quebra de linha

    FILE *arquivo;

    // abre arquivo para leitura
    arquivo = fopen("Ex4.txt", "r");

    if (arquivo == NULL)
    {
        printf("ERRO AO ABRIR ARQUIVO!");
    } // end if
    else
    {
        // loop principal
        // leitura do arquivo e contador
        while (!feof(arquivo))
        {
            fgets(caracter, 100, arquivo);
            printf("%s", caracter);
            contador++;
        }

        printf("\nQuantidade de linhas = %d", contador);

        fclose(arquivo);
    }

    return 0;

} // end main