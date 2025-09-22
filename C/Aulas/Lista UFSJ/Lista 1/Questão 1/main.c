#include "funcionario.h"

int main()
{

    Funcionario *f1 = (Funcionario *)malloc(sizeof(Funcionario));
    Funcionario *f2 = (Funcionario *)malloc(sizeof(Funcionario));

    // le dados individuais
    scanf("%s", f1->nome);
    scanf("%d", &f1->idade);
    scanf(" %c", &f1->sexo);
    scanf("%d", &f1->ano);                                      
    scanf("%f", &f1->salario);
    scanf("%d", &f1->faltas);

    // recupera dados individuais
    printf("\n Dados \n");
    nome(f1);
    idade(f1);
    sexo(f1);
    ano(f1);
    salario(f1);
    faltas(f1);

    free(f1);
    free(f2);

    return 0;

} // end main