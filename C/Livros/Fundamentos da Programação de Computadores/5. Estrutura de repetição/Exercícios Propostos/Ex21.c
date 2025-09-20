/*
Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
Os códigos utilizados são:
1, 2, 3, 4 Votos para os respectivos candidatos
5 Voto nulo
6 Voto em branco
Faça um programa que calcule e mostre:
■■ o total de votos para cada candidato;
■■ o total de votos nulos;
■■ o total de votos em branco;
■■ a porcentagem de votos nulos sobre o total de votos; e
■■ a porcentagem de votos em branco sobre o total de votos.
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá
mostrar uma mensagem.
*/
#include <stdio.h>

int main()
{
    int voto, voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, nulo = 0, branco = 0, total = 0;

    do
    {
        // le voto
        scanf("%d", &voto);

        if (voto < 0)
        {
            if (voto == 1)
            {
                voto1++;
            }
            else if (voto == 2)
            {
                voto2++;
            }
            else if (voto == 3)
            {
                voto3++;
            }
            else if (voto == 4)
            {
                voto4++;
            }
            else if (voto == 5)
            {
                nulo++;
            }
            else if (voto == 6)
            {
                branco++;
            }
            total++;
        }
        else
            printf("Voto invalido");
    } while (voto != 0);

    printf("Candidato 1: %d Candidato 2: %d Candidato 3: %d Candidado 4: %d Nulos: %d Brancos: %d", voto1, voto2, voto3, voto4, nulo, branco);
    printf("\n%f", ((float)nulo / total) * 100);
    printf("\n%f", ((float)branco / total) * 100);

    return 0;
} // end main