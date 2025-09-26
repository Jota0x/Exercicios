#include "cubo.h"

int main()
{
    Cubo *c1 = (Cubo *)malloc(sizeof(Cubo));

    scanf("%f", &c1->lado);

    printf("\n%.2f", aresta(c1));
    printf("\n%.2f", area(c1));
    printf("\n%.2f", volume(c1));

    // destroi cilindro
    free(c1);

    return 0;

} // end main