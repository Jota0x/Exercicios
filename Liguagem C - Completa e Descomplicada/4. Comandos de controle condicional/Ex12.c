// Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
//  imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
// segunda-feira, se 2, e assim por diante.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Segunda");
        break;
    case 2:
        printf("Terca");
        break;
    case 3:
        printf("Quarta");
        break;
    case 4:
        printf("Quinta");
        break;
    case 5:
        printf("Sexta");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;

    default:
        printf("Erro");
        return 1;
        break;
    }
    
    return 0;
} // end main