#include <stdio.h>

// protótipo função
float nota(float a, float b, float c, char letra);

int main()
{
    int N;
    float a, b, c;
    char letra;

    // le quantos alunos
    scanf("%d", &N);

    // loop principal
    for (int i = 0; i < N; i++)
    {
        scanf("%f%f%f %c", &a, &b, &c, &letra);

        printf("%.2f\n", nota(a, b, c, letra));

    } // end for

    return 0;
} // end main

// nota
float nota(float a, float b, float c, char letra)
{
    float media = 0;

    // condicional para nota
    if (letra == 'A')
    {
        media = (a + b + c) / 3;
    }
    else if (letra == 'P')
    {
        media = ((a * 5) + (b * 3) + (c * 2)) / 10;
    }
    else
        printf("opcao Invalida");

    return media;
} // end nota