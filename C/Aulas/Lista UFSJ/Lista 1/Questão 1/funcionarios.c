#include "funcionario.h"

// dados individuais
void nome(Funcionario *funcionario)
{
    printf("%s\n", funcionario->nome);
} // end nome

void idade(Funcionario *funcionario)
{
    printf("%d\n", funcionario->idade);
} // end idade

void sexo(Funcionario *funcionario)
{
    printf("%c\n", funcionario->sexo);
} // end sexo

void ano(Funcionario *funcionario)
{
    printf("%d\n", funcionario->ano);
} // end ano

void salario(Funcionario *funcionario)
{
    printf("%.2f\n", funcionario->salario);
} // end salario

void faltas(Funcionario *funcionario)
{
    printf("%d\n", funcionario->faltas);
} // end faltas

float descontoFaltas(Funcionario *funcionario)
{
    float desconto;

    desconto = funcionario->faltas * (funcionario->salario / 30);

    return desconto;
} // end descontoFaltas