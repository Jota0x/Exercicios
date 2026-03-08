#include <stdio.h>

int main()
{
    // variaveis
    int a, b, c;

    // le a,b,c
    scanf("%d%d%d", &a, &b, &c);

    //imprime informções
    printf("Nome: A");
    printf("\nEndereco: %d", &a);
    printf("\nValor: %d", a);
    printf("\nNome: B");
    printf("\nEndereco: %d", &b);
    printf("\nValor: %d", b);
    printf("\nNome: C");
    printf("\nEndereco: %d", &c);
    printf("\nValor: %d", c);

    return 0;

} // end main