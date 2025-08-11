// Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
// extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela con-
// sulta à tabela que se segue, na qual:
// H = número de horas extras – (2/3 * (número de horas falta))
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaFaltante, horaExtra, premio, minuto = 0;

    scanf("%d%d", &horaExtra, &horaFaltante);

    minuto = horaExtra - (2 / 3 * (horaFaltante));

    if (minuto >= 2400)
    {
        premio = 500;
    } // end if
    else if (minuto < 2400 && minuto >= 1800)
    {
        premio = 400;
    } // end if
    else if (minuto >= 1200 && minuto < 1800)
    {
        premio = 300;
    } // end if
    else if (minuto >= 600 && minuto < 1200)
    {
        premio = 200;
    }
    else
        premio = 100;

    printf("%d", premio);

    return 0;
} // end main