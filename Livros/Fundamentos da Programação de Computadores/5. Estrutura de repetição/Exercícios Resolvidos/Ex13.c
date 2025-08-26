// Foi feita uma pesquisa para determinar o índice de mortalidade infantil em certo período. Faça um
// programa que:
// ■■ leia o número de crianças nascidas no período;
// ■■ identifique o sexo (M ou F) e o tempo de vida de cada criança nascida.
// O programa deve calcular e mostrar:
// ■■ a percentagem de crianças do sexo feminino mortas no período;
// ■■ a percentagem de crianças do sexo masculino mortas no período;
// ■■ a percentagem de crianças que viveram 24 meses ou menos no período.
#include <stdio.h>

int main()
{
    int numeroCrianca, tempoVida;
    char sexo;
    float feminino, masculino, maisde24, menosde24;

    // le numesro de Criança
    scanf("%d", &numeroCrianca);

    // loop principal
    for (int i = 0; i < numeroCrianca; i++)
    {
        // le tempo de Vida e sexo de cada Criança
        scanf("%d %c", &tempoVida, &sexo);

        if (tempoVida > 24)
        {
            // contabilza crianças com tempo de vida superior a 24 meses
            maisde24++;
        } // end if
        else
        {
            // contabiliza crinaças com tempo de vida menor a 24 meses
            menosde24++;
        } // end else

        if (sexo == 'M')
        {
            // contabiliza total de crinaças do sexo masculino
            masculino++;
        } // end if
        else
        {
            // contabiliza total de crinaças do sexo feminino
            feminino++;
        } // end else
    } // end for

    printf("Porcentagem: Masculino: %.2f | Feminino %.2f", masculino / 100, feminino / 100);
    printf("\n Tempo de vida: Mais de 24 meses: %.2f | Menos de 24 meses: %.2f", maisde24 / 100, menosde24 / 100);

    return 0;
} // end  main