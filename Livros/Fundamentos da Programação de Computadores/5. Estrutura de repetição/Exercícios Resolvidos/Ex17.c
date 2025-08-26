// Faça um programa que receba o salário de um funcionário chamado Carlos. Sabe-se que outro fun-
// cionário, João, tem salário equivalente a um terço do salário de Carlos. Carlos aplicará seu salário
// integralmente na caderneta de poupança, que rende 2% ao mês, e João aplicará seu salário inte-
// gralmente no fundo de renda fixa, que rende 5% ao mês. O programa deverá calcular e mostrar a
// quantidade de meses necessários para que o valor pertencente a João iguale ou ultrapasse o valor
// pertencente a Carlos.
#include <stdio.h>

int main()
{
    float salario, salarioJoao;
    int meses = 0;

    // le salario de Carlos
    scanf("%f", &salario);

    // salario de João
    salarioJoao = salario / 3;

    while (salarioJoao <= salario)
    {
        // salario de Carlos
        // rende 2% ao mes
        salario += (salario * 0.02f);

        // salario de João
        // reende 5% ao mes
        salarioJoao += (salarioJoao * 0.05f);

        // acrescenta +1 a meses
        meses++;
    } // end while

    printf("Meses para salario igualar ou ser superior: %d", meses);

    return 0;
} // end main