// Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para
// preenchimento de vagas em seu quadro de funcionários. Supondo que você seja o programador dessa
// empresa, faça um programa que leia, para cada candidato, a idade, o sexo (M ou F) e a experiência no
// serviço (S ou N). Para encerrar a entrada de dados, digite zero para a idade.
// O programa também deve calcular e mostrar:
// ■■ o número de candidatos do sexo feminino;
// ■■ o número de candidatos do sexo masculino;
// ■■ a idade média dos homens que já têm experiência no serviço;
// ■■ a porcentagem dos homens com mais de 45 anos entre o total dos homens;
// ■■ o número de mulheres com idade inferior a 21 anos e com experiência no serviço;
// ■■ a menor idade entre as mulheres que já têm experiência no serviço.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo, experiencia;
    int idade, qtMasculino = 0, qtFeminino = 0, menos21 = 0, homemExperiencia = 0, idadeMedia = 0, mais45 = 0, idadeMenor = 0;
    float mediaHomens = 0, pecentHomens = 0;

    // primeira leitura
    scanf("%d %c %c", &idade, &sexo, &experiencia);
    idadeMenor = idade;

    // loop principal
    while (idade != 0)
    {
        // contagem de cada sexo
        if (sexo == 'F')
        {
            qtFeminino++;
            if (experiencia == 'S')
            {
                // pega a menor idade das mulheres com experiencia
                if (idade < idadeMenor)
                {
                    idadeMenor = idade;
                } // end if
            }
        } // end if
        else
        {
            qtMasculino++;
            // trata homens com mais de 45 anos
            if (idade > 45)
            {
                mais45++;
            } // end if
        } // end else

        // trata homens com experiencia
        if (sexo == 'M' && experiencia == 'S')
        {
            idadeMedia += idade;
            homemExperiencia++;
        } // end if

        // trata mulheres com idade inferior a 21
        if (sexo == 'F' && idade < 21)
        {
            menos21++;
        } // end if

        // leitura para proximos dados
        scanf("%d %c %c", &idade, &sexo, &experiencia);

    } // end while

    // calculo media
    mediaHomens = (float)idadeMedia / homemExperiencia;

    // imprime informações
    printf("Sexo Feminino: %d", qtFeminino);
    printf("\nSexo Masculino: %d", qtMasculino);
    printf("\nIdade Media homens: %f", mediaHomens);
    printf("\n+45: %f", (mais45 / qtMasculino) * 100);
    printf("\nMulheres inferior a 21: %d", menos21);
    printf("\nMenor idade: %d", idadeMenor);

} // end main