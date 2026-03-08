#include <stdio.h>
#include <math.h>
int main()
{
    // declaração das variaveis
    float cateto1, cateto2, hipotenusa;

    // le os catetos
    scanf("%f%f", &cateto1, &cateto2);

    // calculo da hipotenusa
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    // imprime hipotenusa
    printf("Hipotenusa: %.2f", hipotenusa);

    return 0;

} // end main