// Faça um programa que receba a hora do início de um jogo e a hora do término (cada hora é composta
// por duas variáveis inteiras: hora e minuto). calcule e mostre a duração do jogo (horas e minutos),
// sabendo que o tempo máximo de duração do jogo é de 24 horas e que ele pode começar em um dia e
// terminar no dia seguinte.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora1, min1, hora2, min2, horaFinal, minFinal;

    printf("Horario inicial: ");
    scanf("%d%d", &hora1, &min1);

    printf("\nHorario final: ");
    scanf("%d%d", &hora2, &min2);

    horaFinal = hora2 - hora1;

    minFinal = min2 - min1;

    printf("O jogo durou: %dH:%dMin", horaFinal, minFinal);

    return 0;
} // end main