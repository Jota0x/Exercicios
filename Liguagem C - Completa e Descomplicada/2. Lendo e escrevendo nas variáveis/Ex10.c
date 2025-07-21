// Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
//(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).
#include <stdio.h>

int main()
{
    int dia, mes, ano;

    scanf("%d %d %d", &dia, &mes, &ano); // le dia, mes e ano

    printf("%d/%d/%d", dia, mes, ano); // imprime dia, mes e ano

    return 0;

} // end main