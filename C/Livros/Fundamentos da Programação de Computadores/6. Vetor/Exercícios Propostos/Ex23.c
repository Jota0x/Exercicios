/*
 Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
de todas as subtrações realizadas.
*/
#include <stdio.h>

int main()
{
    int A[5], B[5];

    for (int i = 0; i < 5; i++)
        scanf("%d%d", &A[i], &B[i]);

    //variavle de controle do vetor B
    int aux = 5;
    for(int i = 0; i < 5;i++)
    {
       // printf("Subtrcao: %d",);
    }

    return 0;
} // end main