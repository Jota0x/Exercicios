#include <stdio.h>

int main()
{
    int num;
    int soma = 0;

    FILE *arquivo;

    // abre arquivo para leitura
    arquivo = fopen("EX6.txt", "w");

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO");
    else
    {
        // le num
        scanf("%d", &num);

        // loop principal
        // acha divisores
        for (int i = 1; i <= num; i++)
            if (num % i == 0)
            {
                printf("%d\n", i);
                soma += i;
            }
        fprintf(arquivo, "%d", soma);
    }

    fclose(arquivo);

    return 0;
}