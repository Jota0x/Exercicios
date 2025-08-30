// Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
// e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de re-
// frigeração).
// calcule e mostre:
// ■■ O valor do aumento, usando as regras que se seguem
// O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
// do preço; caso contrário, pagará 8%. Os requisitos são:
// Categoria: 2
// Situação: R
// ■■ O novo preço, ou seja, o preço mais aumento menos imposto.
// ■■ A classificação, usando as regras a seguir.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, aumento, novoPreco, imposto;
    int categoria;
    char situacao;

    // Menu
    printf("1 - limpeza\n");
    printf("2 - alimentacao\n");
    printf("3 - vestuario\n");

    printf("Categoria\n");
    scanf("%d",&categoria);

    printf("Preco: ");
    scanf("%f",&preco);

    switch (categoria)
    {
    case 1:
        // analise preço
        if (preco <= 25)
        {
            aumento = preco * 0.05f;
        } // end if
        else
            aumento = preco * 0.12f;

        imposto = preco * 0.05f;

        novoPreco = preco + aumento - imposto;

        break;
    case 2:
        
        scanf(" %c", &situacao);

        // analise do preço
        if (preco <= 25)
        {
            aumento = preco * 0.08f;
        } // end if
        else
            aumento = preco * 0.15f;

        // analise da situação
        if (situacao == 'R')
        {
            imposto = preco * 0.08f;
        } // end if
        else
            imposto = preco * 0.05f;

        novoPreco = preco + aumento - imposto;

        break;

    case 3:

        // analise do preço
        if (preco <= 25)
        {
            aumento = preco * 0.10f;
        } // end if
        else
            aumento = preco * 0.18f;

        novoPreco = preco + aumento - imposto;

        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    if(novoPreco <= 50)
    {
        printf("Barato");
    }// end if 
    else if(novoPreco > 50 && novoPreco <= 120)
    {
        printf("Normal");
    } // end else if 
    else 
        printf("Caro");

    return 0;
} // end main