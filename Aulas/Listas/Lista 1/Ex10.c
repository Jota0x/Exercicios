#include <stdio.h>

int main()
{
    // declaração variaveis
    int velocidadeMaxima, velocidadeMotorista, diferencaVelocidade;

    // le velocidade Maxima
    scanf("%d%d", &velocidadeMaxima, &velocidadeMotorista);

    // calcula diferenca de velocidade
    diferencaVelocidade = velocidadeMotorista - velocidadeMaxima;

    if (diferencaVelocidade <= 0)
    {
        printf("Motorista respeitou a lei");
    } // end if
    else if (diferencaVelocidade > 0 && diferencaVelocidade <= 10)
    {
        printf("Multa de 50 reais");
    } // end else if
    else if (diferencaVelocidade > 10 && diferencaVelocidade <= 30)
    {
        printf("Multa de 100 reais");
    } // end else if
    else
        printf("Multa de 200 reais");

    return 0;
} // end main