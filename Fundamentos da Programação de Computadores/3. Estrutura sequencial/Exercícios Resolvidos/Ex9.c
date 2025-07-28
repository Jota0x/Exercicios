// Faça um programa que calcule e mostre a área de um triângulo. sabe-se que: Área = (base * altura)/2.
#include <stdio.h>
#include <stdlib.h>

int main()
{  
    float base,altura,area = 0;

    scanf("%f %f",&base,&altura);

    area = (base * altura)/2;

    printf("%f",area);

    return 0;

}// end main