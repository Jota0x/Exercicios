#include <stdio.h>

// prototipo função
float mediaNota(float nota, int total);

int main()
{
    int n, aprovado = 0;
    float nota, totalNota = 0;

    // le numero de notas
    scanf("%d", &n);

    // loop principal
    for (int i = 0; i < n; i++)
    {
        // le nota
        scanf("%f", &nota);

        // trata aprovados
        if (nota >= 6)
        {
            totalNota += nota;
            aprovado++;
        } // end if

    } // end for

    // imprime nota
    printf("%.1f", mediaNota(totalNota, aprovado));

    return 0;
} // end main

float mediaNota(float nota, int total)
{
    float media;

    media = nota / total;

    return media;

} // end mediaNota