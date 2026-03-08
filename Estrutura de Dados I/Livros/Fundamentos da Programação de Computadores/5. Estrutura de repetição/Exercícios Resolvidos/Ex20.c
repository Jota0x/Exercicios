// Faça um programa para ler o código, o sexo (M — masculino; F — feminino) e o número de horas/
// aula dadas mensalmente pelos professores de uma universidade, sabendo-se que cada hora/aula vale
// R$ 30,00. Emita uma listagem contendo o código, o salário bruto e o salário líquido (levando em
// consideração os descontos explicados a seguir) de todos os professores. Mostre também a média dos
// salários líquidos dos professores do sexo masculino e a média dos salários líquidos dos professores do
// sexo feminino. Considere:
// ■■ desconto para homens, 10%, e, para mulheres, 5%;
// ■■ as informações terminarão quando for lido o código = 99999.
#include <stdio.h>

int main()
{
    int horaAulas, masculino = 0, feminino = 0, codigo;
    char sexo;
    float mediaFeminina, mediaMasculina, salarioLiquido, salarioBruto, salarioMasc, salarioFem;

    // primeira interação
    printf("Digite informacoes: ");
    // le sexo e numero de horas
    scanf("%c %d", &sexo, &horaAulas, &codigo);

    while (codigo != 99999)
    {

        salarioBruto = (horaAulas * 30);

        if (sexo == 'M')
        {
            salarioLiquido = salarioBruto - (salarioBruto * 0.10f);
            // acrescenta valor de salario para media
            mediaMasculina += salarioLiquido;
            // acrescenta 1 a masculino
            masculino++;

        } // end if
        else

        {
            salarioLiquido = salarioBruto - (salarioBruto * 0.05f);
            // acreescenta valor de salario para media
            mediaFeminina += salarioLiquido;
            // acrescenta 1 a feminino
            feminino++;

        } // end else

        // imprime codigo, salario liquido e salario bruto
        printf("Codigo: %d Salario Bruto: %f Salario Liquido: %f", codigo, salarioLiquido, salarioBruto);

        // interações futuras até condição de parada
        printf("\nDigite informacoes: ");
        // le sexo e numero de horas
        scanf("%c %d", &sexo, &horaAulas, &codigo);
    } // end while

    mediaFeminina = mediaFeminina / feminino;

    mediaMasculina = mediaMasculina / masculino;

    // imprime media
    printf("Media masculina: %f Media feminina: %f", mediaMasculina, mediaFeminina);

} // end main