#include <stdio.h>

void notas(float nota[10]);
void media(float nota[10]);

int main()
{
    float *nota = malloc(10 * sizeof(float));

    notas(nota);
    media(nota);

    free(nota);

    return 0;
} // end main

void notas(float nota[])
{
    for (int i = 0; i < 10; i++)
        scanf("%f", &nota[i]);

} // end notas

void media(float nota[])
{
    int contador = 0;
    float media = 0;

    for (int i = 0; i < 10; i++)
        media += nota[i];

    media = media / 10;

    for (int i = 0; i < 10; i++)
        if (nota[i] >= 6)
            contador++;

    printf("Media: %.2f\n", media);
    printf("Alunos acima da media: %d", contador);

} // end media