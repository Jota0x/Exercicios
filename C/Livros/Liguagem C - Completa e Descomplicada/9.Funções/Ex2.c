/*
Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o
mês e a sua quantidade de dias de acordo com o número digitado pelo usuário.
Exemplo: Entrada = 4. Saída = abril.
*/
#include <stdio.h>

void mes(int n);

int main()
{
    int n;

    scanf("%d", &n);

    mes(n);

    return 0;
} // end main

void mes(int n)
{
    char *mesExtenso[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("%s", mesExtenso[n - 1]);
} // end mes