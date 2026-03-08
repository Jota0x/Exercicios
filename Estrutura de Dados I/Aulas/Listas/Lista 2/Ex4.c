#include <stdio.h>

int main()
{
    double E = 1;
    int N;
    int fat = 1;

    // le N
    scanf("%d", &N);

    // loop principal
<<<<<<< HEAD:C/Aulas/Listas/Lista 2/!Ex4.c
    for (int i = 0; i <= N; i++)
    {
        // loop secundario
        // trata fatorial
        for (int j = 1; j <= i; j++)
        {
            fat *= j;
        } // end for

        // calculo de E
        E += 1.0 / fat;

=======
    for (int i = 1; i <= N; i++)
    { // chama a função recursiva de fatorial para calculo
        E += 1.0f / fatorial(i);
>>>>>>> 047717583a0683b5dc8159acc2faea3fd4fef195:C/Aulas/Listas/Lista 2/Ex4.c
    } // end for

    //imprime E
    printf("%.2lf", E);

    return 0;
} // end main
<<<<<<< HEAD:C/Aulas/Listas/Lista 2/!Ex4.c
=======

//fatorial recursiva 
double fatorial(int N)
{
    if (N == 1)
        return 1;
    else
        return N * fatorial(N - 1);

} // fatorial
>>>>>>> 047717583a0683b5dc8159acc2faea3fd4fef195:C/Aulas/Listas/Lista 2/Ex4.c
