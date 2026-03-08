//Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
//conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e p =
//3.141592.
#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592 // define uma constante 

int main()
{
    float angulo,radianos = 0;

    scanf("%f",&angulo);// le angulo

    radianos = angulo * PI/180;

    printf("Valor em radianos: %f",radianos);// imprime radianos

    return 0;
}// end main