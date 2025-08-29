#include <stdio.h>

int main()
{
    // variaveis
    float salario, mediaSalario = 0, mediaFilhos = 0, maiorSalario, percentPessoasAte100 = 0, totalSalario = 0;
    int numeroFilho, populacao = 0, qtsFilhos = 0;

    // primeira leitura
    scanf("%f%d", &salario, &numeroFilho);
    // iguala o primeiro salario ao maior para futuras comparações
    maiorSalario = salario;

    // loop principal
    while (salario >= 0)
    {
        // trata salarioMaior
        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        } // end if

        // trata pessoas com salario até 100 ;
        if (salario <= 100)
        {
            percentPessoasAte100++;
        } // end if

        // atualiza valor de população a cada leitura
        populacao++;

        // acrescenta salario ao totalSalario a cada leitura
        totalSalario += salario;

        // acrescenta numeroFilho ao qtsFilho a cada leitura
        qtsFilhos += numeroFilho;

        // le salario e numero de filhos
        scanf("%f%d", &salario, &numeroFilho);

    } // end while

    // calculo das medias
    mediaFilhos = qtsFilhos / populacao;

    mediaSalario = totalSalario / populacao;

    printf("%.2f\n", mediaSalario);
    printf("%.f\n", mediaFilhos);
    printf("%.2f\n", maiorSalario);
    printf("%.2f", (percentPessoasAte100 / populacao) * 100);

    return 0;
} // end main