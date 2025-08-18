#include <stdio.h>

int main()
{
    // declaração da variável
    char opcao;
    float salarioAtual, novoSalario;

    // le opcao
    scanf(" %c", &opcao);
    // le salario
    scanf("%f", &salarioAtual);

    switch (opcao)
    {
    case 'A':

        // calculo novo salario
        novoSalario = salarioAtual + (salarioAtual * 0.08f);
        // escreve novo salario
        printf("%.2f", novoSalario);
        break;
    case 'B':

        // calculo novo salario
        novoSalario = salarioAtual + (salarioAtual * 0.11f);
        // escreve novo salario
        printf("%.2f", novoSalario);
        break;
    case 'C':

        // calculo novo salario
        if (salarioAtual <= 1000)
        {
            novoSalario = salarioAtual + 350;
        } // end if
        else
            novoSalario = salarioAtual + 200;
        // escreve novo salario
        printf("%.2f", novoSalario);

    default:
        break;
    }

    return 0;
} // end main