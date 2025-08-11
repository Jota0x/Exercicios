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
    int categoria;

    //Menu
    printf("1 - limpeza");
    printf("2 - alimentacao");
    printf("3 - vestuario");
    
    switch (categoria)
    {
    case 1:
        
        break;
    case 2:
        char situacao;

        scanf(" %c",&situacao);

        if(situacao == 'R')
        {
            
        }


    break;

    case 3:

    break;
    default:
        break;
    }



    return 0;
}// end main