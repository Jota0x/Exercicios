/*
Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
*/
#include <stdio.h>

int main()
{
    int opcao, peso1, peso2, peso3;
    float media = 0, nota1, nota2, nota3;

    do
    {
        printf(" \n --- MENU --- \n");
        printf("1 - Media Aritmetica");
        printf("\n2 - Media ponderada");
        printf("\n3 - Sair");
        printf("\nopcao: ");
        scanf("%d", opcao);

        switch (opcao)
        {
        case 1:
            scanf("%f%f", &nota1, nota2);

            media = (nota1 + nota2) / 2;

            printf("\n MEdia: %f", media);
            break;
        case 2:
            scanf("%f%f%f%d%d%d", &nota1, &nota2, &nota3);

            media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

            printf("\nMedia: %f", media);

            break;

        default:
            printf("opcao invalida");
            break;
        }

    } while (opcao != 3);

    return 0;
} // end main