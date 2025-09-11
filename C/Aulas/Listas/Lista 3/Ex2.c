#include <stdio.h>

// prototipo da função
float mediaSalario(float salario, int numPessoas);

int main()
{
    int numFilho, totalPessoas = 0;
    float salario, totalSalario = 0;

    // le salario e numero de filho
    scanf("%f %c", &salario, &numFilho);

    totalPessoas = 1;

    // loop principal
    while (salario > 0)
    {
        totalSalario += salario;

        // le salario e numero de filhos
        scanf("%f %d", &salario, &numFilho);

        if (salario > 0)
        {
            totalPessoas++;
        }

    } // end while

    // imprime media de salario
    printf("%.2f", mediaSalario(totalSalario, totalPessoas));

    return 0;
} // end main

// media salario
float mediaSalario(float salario, int numPessoas)
{
    float media = 0;

    media = salario / numPessoas;

    return media;

} // end media salario
