// Faça um programa que receba vários números, calcule e mostre:
// ■■ a soma dos números digitados;
// ■■ a quantidade de números digitados;
// ■■ a média dos números digitados;
// ■■ o maior número digitado;
// ■■ o menor número digitado;
// ■■ a média dos números pares;
// ■■ a porcentagem dos números ímpares entre todos os números digitados.
// Finalize a entrada de dados com a digitação do número 30.000.
#include <stdio.h>

int main()
{
    int soma = 0, qtNumero = 0, maiorNumero, menorNumero;
    float media = 0, mediaPar = 0, percentImpar;
    int n, somaPar = 0, somaImpar = 0, pares = 0, impares = 0;

    // primeira leitura de n
    scanf("%d", &n);

    // iguala n ao maior e ao menor para comparação
    maiorNumero = n;
    menorNumero = n;

    // loop principal
    while (n != 30000)
    {
        // contabiliza a quantidade de numeros digitados
        qtNumero++;
        // soma n a variável soma
        soma += n;

        // condicional para menor e maior numero
        if (maiorNumero < n)
        {
            maiorNumero = n;
        } // end if
        else if (menorNumero > n)
        {
            menorNumero = n;
        } // end else if

        // condicional para verificar par e impar
        // verificar c é par
        if (n % 2 == 0)
        {
            // acrescenta +1 a variável
            somaPar += n;
            pares++;
        } // end if
        // c n é par é impar
        else
        {
            // acrescenta +1 a variável
            somaImpar++;
            impares += n;
        } // end else

        // proximas leituras de n
        scanf("%d", &n);

    } // end while

    // calculo das medias
    media = soma / qtNumero;
    mediaPar = somaPar / pares;
    percentImpar = (impares / qtNumero) * 100;

    // imprime informações
    printf("Soma: %d", soma);
    printf("\nQuantidade: %d", qtNumero);
    printf("\nMedia total: %.2f", media);
    printf("\nMaior: %d  Menor: %d", maiorNumero, menorNumero);
    printf("\nMedia Par: %.2f", mediaPar);
    printf("\nPorcentagem Impar: %.2f", percentImpar);

    return 0;
} // end main