#include <stdio.h>

void preencher(int x[], int y[]);
void juntar(int x[], int y[]);

int main()
{
    int x[10], y[10];

    preencher(x, y);

    juntar(x, y);

    return 0;
} // end main

void preencher(int x[], int y[])
{
    for (int i = 0; i < 10; i++)
        scanf("%d", &x[i]);

    for (int i = 0; i < 10; i++)
        scanf("%d", &y[i]);
}

void juntar(int x[], int y[])
{
    int resultante[20];
    int auxX = 0;
    int auxY = 0;

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            resultante[i] = x[auxX];
            auxX++;
        }
        else
        {
            resultante[i] = y[auxY];
            auxY++;
        }
    }

    for (int i = 0; i < 20; i++)
        printf("%d ", resultante[i]);
}