#include <stdio.h>
#include <stdlib.h>

void crescente(int n);
void decrescente(int n);


int main()
{   
    crescente(5);
    printf("\n");
    decrescente(1);
    printf("\n");

    return 0;
}

void crescente(int n)
{   
    //caso base no caso do exercício 0
    if(n == 0)
        return;
    crescente(n - 1);
    printf("%d ",n);

}

void decrescente(int n)
{   
    //caso base, no caso do exercício 5
    if(n > 5) return;
    decrescente(n + 1);
    printf("%d ",n);

}