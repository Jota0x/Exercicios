/*Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
fAIXA ETáRIA IdAdE
1a até 15 anos
2a De 16 a 30 anos
3a De 31 a 45 anos
4a De 46 a 60 anos
5 a acima de 60 anos*/
#include <stdio.h>

int main()
{
    int idade, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;
    int totalPessoas = 0;
    // loop principal
    for (int i = 0; i < 8; i++)
    {
        // le idade
        scanf("%d", &idade);

        // contabiliza total de pessoas
        totalPessoas++;

        // trata idade
        if (idade <= 15)
        {
            faixa1++;
        } // end if
        else if (idade > 15 && idade <= 30)
        {
            faixa2++;
        } // end else if
        else if (idade > 30 && idade <= 45)
        {
            faixa3++;
        } // end else if
        else if (idade > 45 && idade <= 60)
        {
            faixa4++;
        } // end else if
        else
            faixa5++;
    }

    // imprime informações
    printf("\n%d %d %d %d %d", faixa1, faixa2, faixa3, faixa4, faixa5);
    printf("\n%d%%", (faixa1 / totalPessoas) * 100);
    printf("\n%d%%", (faixa5 / totalPessoas) * 100);

    return 0;
} // end main