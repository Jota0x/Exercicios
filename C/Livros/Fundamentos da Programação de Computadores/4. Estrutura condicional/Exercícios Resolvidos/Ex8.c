// Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados neces-
//sários para executar cada operação.
//Menu de opções:
//1. Somar dois números.
//2. Raiz quadrada de um número.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int x,y,opcao,resultado;

    printf("\n1 - Somar dois numeros");
    printf("\n2 - Raiz quadrada de um numero");
    printf("\nOpcao: ");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        scanf("%d%d",&x,&y);

        resultado = x + y;
        
        printf("%d",resultado);
        break;
    case 2:
        scanf("%d",&x);

        resultado = sqrt(x);

        printf("%d",resultado);

    break;
    default:
        break;
    }


    return 0;
}// end main