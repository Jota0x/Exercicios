#include <stdio.h>

int main()
{
    float num, maior = -9999999999, menor = 99999999999, media = 0;
    int contador = 0;

    FILE *arquivo;

    arquivo = fopen("entrada.txt", "r");

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO");
    else
    {

        while (fscanf(arquivo, "%f", &num) == 1) // leitura de 1 numero por vez
        {
            if (num > maior)
                maior = num;
            if (num < menor)
                menor = num;

            contador++;
            media += num;
        }

        fclose(arquivo);
    }

    printf("%.2f\n", maior);
    printf("%.2f\n", menor);
    printf("%.2f\n", media / contador);

    return 0;
} // end main