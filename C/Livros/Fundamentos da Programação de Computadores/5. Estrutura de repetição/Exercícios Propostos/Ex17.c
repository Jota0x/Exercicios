/*Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
não entrava na pesquisa. Faça um programa que:
■■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam as-
sistindo); e
■■ calcule e mostre a porcentagem de audiência de cada canal*/

#include <stdio.h>

int main()
{
    int canal, pessoas, total = 0, canal1 = 0, canal2 = 0, canal3 = 0, canal4 = 0;

    scanf("%d", &canal, &pessoas);

    while (canal != 0)
    {
        if (canal == 4)
        {
            canal1++;
            total++;
        }
        else if (canal == 5)
        {
            canal2++;
            total++;
        }
        else if (canal == 7)
        {
            canal3++;
            total++;
        }
        else if (canal == 12)
        {
            canal4++;
            total++;
        }
        else
        {
            printf("Casa nao registrada");
        }

    } // end while

    printf("canal 4: %d%%, canal 5: %d%%, canal 7: %d%%, canal 12: %d%%", (canal1 / total) * 100, (canal2 / total) * 100, (canal3 / total) * 100, (canal4 / total) * 100);

} // end main