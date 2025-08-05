// sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W
//de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,altura,area,potencia;

    scanf("%f%f",&base,&altura);

    area = base * altura;

    potencia = area * 18;

    printf("%f",potencia);

    return 0;

}// end main