#include <stdio.h>

// prototipo função
void imprimeMedia(float media);

int main()
{
    int n;
    float media;

    // le quantidade de vezes
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // le media
        scanf("%f", &media);

        imprimeMedia(media);
    }

} // end main

// media
void imprimeMedia(float media)
{
    if (media >= 90)
    {
        printf("A\n");
    } // end if
    else if (media <= 89 && media >= 80)
    {
        printf("B\n");
    } // end else if
    else if (media <= 79 && media >= 70)
    {
        printf("C\n");
    } // end else if
    else if (media <= 69 && media >= 60)
    {
        printf("D\n");
    } // end else if
    else if (media <= 59 && media >= 40)
    {
        printf("E\n");
    } // end if
    else
        printf("F\n");
} // end media