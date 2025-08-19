// Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
// a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
// b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
// c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano
// anterior.
// Faça um programa que determine o salário atual desse funcionário.
#include <stdio.h>

int main()
{
    float salario = 1000, anoAtual, percentual, novoSalario;

    //calculo de percentual
    percentual = 1.5/100;

    // le ano atual
    scanf("%f", &anoAtual);

    novoSalario = salario + (salario * percentual);

    for (int i = 2007; i <= anoAtual; i++)
    {
        // dobra percentual a cada ano
        percentual *= 2;
        // atualiza o novo salario
        novoSalario = novoSalario + (novoSalario * percentual);

    } // end for

    //escreve novo salario
    printf("Salario Atual: %.2f", novoSalario);

    return 0;
} // end  main