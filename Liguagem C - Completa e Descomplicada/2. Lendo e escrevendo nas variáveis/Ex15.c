//Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-
//as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e
//uma em cada linha. Use um único comando printf() para cada operação de escrita
//das três variáveis.
#include <stdio.h>

int main()
{
    char A;
    int B;
    float C;

    scanf("%c %d %f",&A,&B,&C);// le char int e float 

    printf("\n\n%c %d %f",A,B,C); // imprime separado por espaço

    printf("\n\n%c\t %d\t %f\t",A,B,C); // imprime em tabulaçao horizontal

    printf ("\n\n%c\n%d\n%f\n",A,B,C); // imprime cada variável em cada linha 

    return 0;
}// end main