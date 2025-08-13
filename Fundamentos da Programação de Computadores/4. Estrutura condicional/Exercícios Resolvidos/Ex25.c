// Faça um programa que receba a medida de um ângulo em graus. calcule e mostre o quadrante em que
// se localiza esse ângulo. considere os quadrantes da trigonometria e, para ângulos maiores que 360º ou
// menores que −360º, reduzi-los, mostrando também o número de voltas e o sentido da volta (horário
// ou anti-horário).
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angulo, numeroVoltas;

    scanf("%d", &angulo);

    numeroVoltas = angulo / 360;

    // analise dos quadrantes
    if ((angulo >= 0 && angulo <= 90) || (angulo < -270 && angulo > -360))
    {
        printf("segundo quadrante ");
    } // end if
    else if ((angulo > 90 && angulo <= 180) || (angulo < -180 && angulo > -270))
    {
        printf("primeiro quadrante");
    } // end else if
    else if ((angulo > 180 && angulo <= 270) || (angulo < -90 && angulo > -180))
    {
        printf("quarto quadrante");
    }
    else
        printf("terceiro quadrante ");

    // analise sentido
    if (angulo > 0)
    {
        printf("Sentido horario");
    }
    else
        printf("Sentido anti-Horario");

    return 0;
} // end main