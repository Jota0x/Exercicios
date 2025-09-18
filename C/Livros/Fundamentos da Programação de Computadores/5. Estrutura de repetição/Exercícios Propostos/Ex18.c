/*
Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F)
e salário. Faça um programa que calcule e mostre:
■■ a média dos salários do grupo;
■■ a maior e a menor idade do grupo;
■■ a quantidade de mulheres com salário até R$ 200,00;
■■ a idade e o sexo da pessoa que possui o menor salário.
Finalize a entrada de dados ao ser digitada uma idade negativa.
*/
#include <stdio.h>

int main()
{
    float salario = 0, mediaSalario = 0, contador = 0, menorSalario = 0;
    int idade, maiorIdade, menor200 = 0, salvaIdade, menorIdade;
    char sexo, salvaSexo;

    scanf("%d%f %c", &idade, &salario, &sexo);

    menorIdade = idade;
    maiorIdade = idade;
    menorSalario = salario;

    // loop principal
    while (idade < 0)
    {
        contador++;

        mediaSalario += salario;

        // trata idade
        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        } // end if
        if (idade < menorIdade)
        {
            menorIdade = idade;
        } // end if

        // trata salario
        if (salario <= 200 && sexo == 'F')
        {
            menor200++;
        } // end if

        // trata idade
        if (maiorIdade < idade)
        {
            maiorIdade = idade;
        } // end if

        if (menorSalario > salario)
        {
            salvaIdade = idade;
            salvaSexo = sexo;
        } // end if

        scanf("%d%f %c", &idade, &salario, &sexo);

    } // end while

    printf("Media Salario: %f", mediaSalario / contador);
    printf("\nMaior Idade: %d Menor Idade: %d", maiorIdade, menorIdade);
    printf("\nQts mulher: %d", menor200);
    printf("\nMenor salario idade: %d Sexo: %c", salvaIdade, salvaSexo);

    return 0;
} /// end main