// Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
// Para idade inferior a 5, deverá mostrar mensagem.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("Infantil");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Juvenil");
    }
    else if (idade >= 11 && idade <= 15)
    {
        printf("Adolescente");
    }
    else if (idade >= 16 && idade <= 30)
    {
        printf("Adulto");
    }
    else

        printf("Senior");

    return 0;
} // end main