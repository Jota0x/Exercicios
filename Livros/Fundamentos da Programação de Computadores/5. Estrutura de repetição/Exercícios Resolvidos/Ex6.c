// Uma empresa possui dez funcionários com as seguintes características: código, número de horas traba-
// lhadas no mês, turno de trabalho (M — matutino; V — vespertino; ou N — noturno), categoria (O —
// operário; ou G — gerente), valor da hora trabalhada. Sabendo-se que essa empresa deseja informatizar
// sua folha de pagamento, faça um programa que:
// a) leia as informações dos funcionários, exceto o valor da hora trabalhada, não permitindo que sejam informa-
// dos turnos e nem categorias inexistentes. Trabalhe sempre com a digitação de letras maiúsculas.
// b) Calcule o valor da hora trabalhada, conforme a tabela a seguir. Adote o valor de R$ 450,00 para o salário
// mínimo.
// CATEgORIA TURNO VALOR dA hORA TRAbALhAdA
// G N 18% do salário mínimo
// G m ou V 15% do salário mínimo
// o N 13% do salário mínimo
// o m ou V 10% do salário mínimo
// c) Calcule o salário inicial dos funcionários com base no valor da hora trabalhada e no número de horas traba-
// lhadas.
// d) Calcule o valor do auxílio alimentação recebido pelo funcionário de acordo com seu salário inicial, conforme
// a tabela a seguir.
#include <stdio.h>

int main()
{
    int codigo, numeroHoras;
    float valorHora, folhaPagamento, salarioMin, salarioInicial, auxilioAlimentacao;
    char turno, categoria;

    scanf("%f", &salarioMin);

    // loop principal para leitura e processamento das infromações
    for (int i = 0; i < 10; i++)
    {
        // valida Turno e Categoria
        do
        {
            // leitura de codigo,turno e categoria
            scanf("%d %c %c", &codigo, &turno, &categoria);

            if (categoria != 'O' || categoria != 'G')
            {
                printf("Categoria Inexistente");
            } // end if
            else if (turno != 'M' || turno != 'V' || turno != 'N')
            {
                printf("Turno inexistente");
            } // end else if

        } while (categoria != 'O' || categoria != 'G' || turno != 'M' || turno != 'V' || turno != 'N');

        // calculo hora trabalhada
        if (categoria == 'G' && turno == 'N')
        {
            valorHora = salarioMin * 0.18f;
        } // end if
        else if (categoria == 'G' && turno == 'M' || turno == 'V')
        {
            valorHora = salarioMin * 0.15f;
        } // end else if
        else if (categoria == 'O' && turno == 'N')
        {
            valorHora = salarioMin * 0.13f;
        } // end else if
        else
        {
            valorHora = salarioMin * 0.10f;
        } // end else

        // calculo Salario Inicial
        salarioInicial = numeroHoras * valorHora;

        // calculo Auxilio Alimentação
        if (salarioInicial <= 300)
        {
            auxilioAlimentacao = salarioInicial * 0.20f;
        } // end if
        else if (salarioInicial > 300 && salarioInicial <= 600)
        {
            auxilioAlimentacao = salarioInicial * 0.15f;

        } // end else if
        else
        {
            auxilioAlimentacao = salarioInicial * 0.05f;
        } // end else

        folhaPagamento = salarioInicial + auxilioAlimentacao;

        // Impressão das informações
        printf("| Codigo: %d | Numero de Horas: %d | Valor da Hora: %f |", codigo, numeroHoras, valorHora);
        printf("\n| Salario Inicial: %f | Auxilio Alimentacao: %f | Salario Final : %f |", salarioInicial, auxilioAlimentacao, folhaPagamento);

    } // end for principal

} // end main