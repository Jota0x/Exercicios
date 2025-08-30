#include <stdio.h>

int main()
{
    //declaração variaveis
    float A,B,auxiliar;

    //le A e B
    scanf("%f%f",&A,&B);

    //passa valor de A para auxiliar 
    auxiliar = A;

    //passa valor de B para A
    A = B;  

    //passa valor de auziliar para B
    B = auxiliar;

    printf("%f %f",A,B);

    return 0;
}// end main