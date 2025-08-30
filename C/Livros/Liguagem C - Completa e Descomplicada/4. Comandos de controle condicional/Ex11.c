// Faça um programa que informe o mês de acordo com o número digitado pelo
// usuário. Exemplo: Entrada = 4. Saída = Abril.
#include <stdio.h>
#include <stdlib.h>

//prototipo da função
void mes(int n);

int main()
{
    int n;

    scanf("%d", &n);

    if (n < 1 || n > 12)
    {
        printf("Mes invalido!");
        return 1;
    }// end if 
    else 
        mes(n);

    return 0;
} // end main

void mes(int n)
{
    char *mesExtenso[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("%s", mesExtenso[n - 1]);

}// end void mes