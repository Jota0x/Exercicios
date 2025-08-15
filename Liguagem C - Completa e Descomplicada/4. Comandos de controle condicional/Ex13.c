// Faça um programa que mostre ao usuário um menu com quatro opções de ope-
// rações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma
// das opções, e o seu programa pede dois valores numéricos e realiza a operação,
// mostrando o resultado.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, x, y, resultado;

    do
    {
        printf("\n--- Menu ---\n");
        printf(" 1 - Adicao\n");
        printf(" 2 - Subtracao\n");
        printf(" 3 - Multiplicacao\n");
        printf(" 1 - Divisao\n");
        printf(" 0 - Sair do programa\n");

        printf("Dois numeros: ");
        scanf("%d%d", &x, &y);

        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            resultado = x + y;
            break;
        case 2:
            resultado = x - y;
            break;
        case 3:
            resultado = x * y;
            break;
        case 4:
            if (y == 0)
            {
                printf("Divisao por 0 impossivel");
                return 1; // encerra programa
            }
            resultado = x / y;
            break;
        default:
            printf("Opcao invalida");
            break;
        }
    } while (opcao != 0);

    return 0;
} // end main