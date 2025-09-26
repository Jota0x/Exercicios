#include "cilindro.h"

int main()
{
    Cilindro *c1 = (Cilindro *)malloc(sizeof(Cilindro));

    scanf("%f%f", &c1->altura, &c1->raio);

    printf("\n%.2f", area(c1));
    printf("\n%.2f", volume(c1));

    free(c1);

    return 0;

} // end main