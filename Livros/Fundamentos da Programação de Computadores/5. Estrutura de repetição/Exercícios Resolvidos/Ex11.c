// Faça um programa que receba um número inteiro maior que 1, verifique se o número fornecido é pri-
// mo ou não e mostre uma mensagem de número primo ou de número não primo.
// Um número é primo quando é divisível apenas por 1 e por ele mesmo.
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n;
    bool primo = true;

    // le numero
    scanf("%d", &n);

    // loop principal
    // verifica se o número é primo
    // verifica os divisores de 2 até a raiz quadrada do numero
    for (int i = 2; i <= sqrt(n); i++)
    {
        // caso o resto divisão tenha dado 0, numero não é primo
        if (n % i == 0)
        {
            primo = false;
        } // end if
    } // end for

    // condição de primo ou não primo
    if (primo == true)
    {
        printf("%d Eh primo", n);
    } // end if
    else
        printf("%d Nao eh primo", n);

    return 0;
} // end main