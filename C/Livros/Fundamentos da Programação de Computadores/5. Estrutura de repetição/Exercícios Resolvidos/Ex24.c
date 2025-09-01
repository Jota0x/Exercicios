/*
Faça um programa que apresente o menu de opções a seguir, permita ao usuário escolher a opção
desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a pos-
sibilidade de opção inválida e não se preocupe com restrições do tipo salário inválido.
Menu de opções:
1. Imposto
2. Novo salário
3. Classificação
4. Finalizar o programa
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras
a seguir.
SALáRIOS % dO IMpOSTO
menor que R$ 500,00 5
De R$ 500,00 a R$ 850,00 10
acima de R$ 850,00 15
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo salário usando as
regras a seguir.
SALáRIOS AUMENTO
maiores que R$ 1.500,00 R$ 25,00
De R$ 750,00 (inclusive) a R$ 1.500,00 (inclusive) R$ 50,00
De R$ 450,00 (inclusive) a R$ 750,00 R$ 75,00
menores que R$ 450,00 R$ 100,00
Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando esta tabela:
SALáRIOS CLASSIfICAçãO
até R$ 700,00 mal remunerado
maiores que R$ 700,00 Bem remunerado
*/

int main()
{
    int opcao;
    float salario;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1 - Imposto");
        printf("\n2 - Novo Salario");
        printf("\n3 - Classificacao");
        printf("\n4 - FinalizarPrograma");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        {
            float imposto;

            // le salario
            scanf("%f", &salario);

            // trata imposto
            if (salario <= 500)
            {
                imposto = salario * 0.05f;
            } // end if
            else if (salario > 500 && salario <= 850)
            {
                imposto = salario * 0.10f;
            } // else if
            else
                imposto = salario * 0.15f;

            // imprime valor
            printf("\nImposto: %f", &imposto);

            break;
        } // end case 1

        case 2:
        {
            float novoSalario = 0, aumento;

            // le salario
            scanf("%f", &salario);

            if (salario > 1500)
            {
                aumento = 25;
            } // end if
            else if (salario >= 750 && salario <= 1500)
            {
                aumento = 50;
            } // end else if
            else if (salario >= 450 && salario <= 750)
            {
                aumento = 75;
            } // end else if
            else
                aumento = 100;

            // calculo de novo salario
            novoSalario = salario + aumento;

            // imprime novo salario
            printf("\nNovo salario: %f", novoSalario);

            break;
        } // end case 2

        case 3:
            // le salario
            scanf("%f", &salario);

            // trata classificação de salario
            if (salario <= 750)
                printf("Mal remunerado");
            else
                printf("Bem remunerado");

            break;
        default:
            // imprime opcao invalida
            printf("\nOpcao invalida");
            break;
        }
    } while (opcao != 4);

} // end main