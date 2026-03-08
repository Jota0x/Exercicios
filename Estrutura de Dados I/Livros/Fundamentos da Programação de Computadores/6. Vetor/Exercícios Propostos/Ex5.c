/*
ma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas lógica e linguagem de
Programação. Coloque os números das matrículas dos alunos que cursam lógica em um vetor, quinze alunos.
Coloque os números das matrículas dos alunos que cursam linguagem de Programação em outro vetor, dez
alunos. Mostre o número das matrículas que aparecem nos dois vetores.
*/

#include <stdio.h>

int main()
{
    int logica[15], programacao[10];

    for (int i = 0; i < 15; i++)
        scanf("%d", &logica[i]);
    for (int i = 0; i < 10; i++)
        scanf("%d", &programacao[i]);

    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 10; j++)
        {
            if (logica[i] == programacao[j])
                printf("Matriculados em ambos os cursos: %d\n", logica[i]);
        }

    return 0;
} // end main