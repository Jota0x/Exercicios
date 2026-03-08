// Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade) e mostrar o número invertido (no formato UDC). O número invertido deve ser armazenado em outra variável antes de ser mostrado.
#include <stdio.h>

int main()
{
    // declaração variavel
    int n, centena, dezena, unidade, numeroInvertido;

    // le  numero
    scanf("%d", &n);

    // demembra numero
    unidade = n % 10;
    dezena = (n % 100) / 10;
    centena = n / 100;

    // numero invertido
    numeroInvertido = unidade * 100 + dezena * 10 + centena;

    // Escreve numero invetido
    printf("%d", numeroInvertido);

    return 0;
} // end main