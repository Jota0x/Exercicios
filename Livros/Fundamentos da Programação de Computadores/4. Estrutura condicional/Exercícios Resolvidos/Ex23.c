// Faça um programa que receba o valor do salário mínimo, o turno de trabalho (M — matutino; v
// — vespertino; ou N — noturno), a categoria (O — operário; G — gerente) e o número de horas tra-
// balhadas no mês de um funcionário. Suponha a digitação apenas de dados válidos e, quando houver
// digitação de letras, utilize maiúsculas. calcule e mostre:
// ■■ O coeficiente do salário, de acordo com a tabela a seguir.
// TuRNo DE TRABALho VALoR Do CoEFICIENTE
// M — Matutino 10% do salário mínimo
// V — Vespertino 15% do salário mínimo
// N — Noturno 12% do salário mínimo
// ■■ O valor do salário bruto, ou seja, o número de horas trabalhadas multiplicado pelo valor do coe-
// ficiente do salário.
// ■■ O imposto, de acordo com a tabela a seguir.
// CATEgoRIA SALáRIo BRuTo IMPoSTo SoBRE o SALáRIo BRuTo
// O — Operário >= R$ 300,00 5%
//< R$ 300,00 3%
// G — Gerente >= R$ 400,00 6%
//< R$ 400,00 4%
// ■■ A gratificação, de acordo com as regras a seguir.
// Se o funcionário preencher todos os requisitos a seguir, sua gratificação será de
// R$ 50,00; caso contrário, será de R$ 30,00. Os requisitos são:
// Turno: Noturno
// Número de horas trabalhadas: Superior a 80 horas
// ■■ O auxílio alimentação, de acordo com as seguintes regras.
// Se o funcionário preencher algum dos requisitos a seguir, seu auxílio alimentação será de um terço
// do seu salário bruto; caso contrário, será de metade do seu salário bruto. Os requisitos são:
// Categoria: Operário
// Coeficiente do salário: < = 25
// ■■ O salário líquido, ou seja, salário bruto menos imposto mais gratificação mais auxílio alimentação.
// ■■ A classificação, de acordo com a tabela a seguir:
// SALáRIo LíquIDo MENSAgEM
// Menor que R$ 350,00 Mal remunerado
// Entre R$ 350,00 e R$ 600,00 Normal
// Maior que R$ 600,00 Bem remunerado
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioMin, salarioLiquido, salarioBruto, valorCoeficiente, imposto, auxilioAlimentacao;
    char turno, categoria;
    int numeroHoras, gratificacao;

    scanf("%f %c %c%d", &salarioMin, &turno, &categoria, &numeroHoras);

    if (turno == 'M')
    {
        valorCoeficiente = salarioMin * 0.10f;
    } // end if
    else if (turno == 'V')
    {
        valorCoeficiente = salarioMin * 0.15f;
    } // end else if
    else
        valorCoeficiente = salarioMin * 0.12f;

    salarioBruto = numeroHoras * valorCoeficiente;

    // analise imposto
    if (categoria == 'O')
    {
        if (salarioBruto >= 300)
        {
            imposto = salarioBruto * 0.05f;
        } // end if
        else
            imposto = salarioBruto * 0.03f;
    } // end if
    else if (salarioBruto >= 400)
    {
        imposto = salarioBruto * 0.06f;
    } // end else if
    else
        imposto = salarioBruto * 0.04f;

    // analise gratificação
    if (turno == 'N' && numeroHoras > 80)
    {
        gratificacao = 50;

    } // end if
    else
        gratificacao = 30;

    // analise auxílio Alimentação
    if (categoria == 'O' && valorCoeficiente <= 25)
    {
        auxilioAlimentacao = salarioBruto / 3;
    } // end if
    else
        auxilioAlimentacao = salarioBruto / 2;

    salarioLiquido = salarioBruto - imposto + gratificacao + auxilioAlimentacao;

    // analise salario Liquido
    if (salarioLiquido < 300)
    {
        printf("Mal remunerado");
    } // end if
    else if (salarioLiquido >= 350 && salarioLiquido <= 600)
    {
        printf("Normal");
    } // end else if
    else
        printf("Bem remunerado");

    return 0;
} // end main