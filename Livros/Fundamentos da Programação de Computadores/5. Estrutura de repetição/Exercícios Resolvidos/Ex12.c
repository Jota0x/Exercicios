// Em uma fábrica trabalham homens e mulheres divididos em três classes:
// ■■ trabalhadores que fazem até 30 peças por mês — classe 1;
// ■■ trabalhadores que fazem de 31 a 50 peças por mês — classe 2;
// ■■ trabalhadores que fazem mais de 50 peças por mês — classe 3.
// A classe 1 recebe salário mínimo. A classe 2 recebe salário mínimo mais 3% deste salário por peça,
// acima das 30 peças iniciais. A classe 3 recebe salário mínimo mais 5% desse salário por peça, acima das 30
// peças iniciais.
// Faça um programa que receba o número do operário, o número de peças fabricadas no mês, o sexo do
// operário, e que também calcule e mostre:
// ■■ o número do operário e seu salário;
// ■■ o total da folha de pagamento da fábrica;
// ■■ o número total de peças fabricadas no mês;
// ■ a média de peças fabricadas pelos homens;
// ■■ a média de peças fabricadas pelas mulheres; e
// ■■ o número do operário ou operária de maior salário.
// A fábrica possui 15 operários.
#include <stdio.h>

int main()
{
    int numeroOperario, numeroPecas, totalPecas, mulherCount, homemCount, totalHomem, totalMulher,maiorSalario;
    char sexo;
    float salario, salarioMin, folhaPagamento, mediaPecasH, mediaPecasM;

    // leitura salario Mínimo
    scanf("%f", &salarioMin);

    // loop principal
    for (int i = 0; i < 15; i++)
    {
        // leitura numero Operario, numero Peças e sexo
        scanf("%d%d %c", &numeroOperario, &numeroPecas, &sexo);

        // cada interação soma numeroPecas ao total
        totalPecas += numeroPecas;

        // calculo de salario
        if (numeroPecas > 50)
        {
            salario = salarioMin + ((salarioMin * 0.05f) * (numeroPecas - 30));
        } // end if
        else if (numeroPecas > 30)
        {
            salario = salarioMin + ((salarioMin * 0.03f) * (numeroPecas - 30));
        } // end else if

        // guarda numero do operario com maior salario
        if (maiorSalario < salario)
        {
            maiorSalario = numeroOperario;
        } // end if

        if (sexo == 'M')
        {
            // soma totla de peças deitas por mulheres
            totalMulher += numeroPecas;
            // contador de mulheres
            mulherCount++;

        } // end if
        else
        {
            // soma total de peças feitas por homens
            totalHomem += numeroPecas;
            // contador de homens
            homemCount++;
        } // end else

        printf("Numero Operario: %d | Salario: %f", numeroOperario, salario);

    } // end for

    // media
    mediaPecasH = totalHomem / homemCount;

    mediaPecasM = totalMulher / mulherCount;

    printf("Total de peças Mes: %d", totalPecas);
    printf("\nMedia pecas Homem: %f, Media pecas mulher: %f", mediaPecasH, mediaPecasM);
    printf("\nOperario com maior salario: %d", maiorSalario);

    return 0;
} // end main