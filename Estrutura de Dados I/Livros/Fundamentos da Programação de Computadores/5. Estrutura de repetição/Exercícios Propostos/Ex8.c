/*
Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e
C — castanho) e a cor dos cabelos (P — preto; C — castanho; l — louro; e R — ruivo) de seis pessoas, e que
calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
■■ a média das idades das pessoas com altura inferior a 1,50 m;
■■ a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
■■ a quantidade de pessoas ruivas e que não possuem olhos azuis
*/

#include <stdio.h>

int main()
{
    float peso, altura, mediaAltura = 0;
    int idade, aux1 = 0, aux2 = 0, olhoAzul = 0, ruivo = 0;
    char corOlho, corCabelo;

    // loop principal
    for (int i = 0; i < 6; i++)
    {
        // leitura das informações
        scanf("%d%f%f %c %c");

        // condicionais
        if (idade > 50 && peso < 60)
        {
            // contador
            aux1++;
        } // end if

        if (altura < 150)
        {
            mediaAltura += altura;
            aux2++;
        } // end if

        if (corOlho == 'A')
        {
            olhoAzul++;
        } // end if

        if (corCabelo == 'R' && corOlho != 'A')
        {
            ruivo++;
        } // end if

    } // end for

    // calculo média
    mediaAltura = mediaAltura / 6;

    // imprime informações
    printf("Superior 50: %d", aux1);
    printf("\nMedia: %f", mediaAltura);
    printf("\nPorcentagem: %f%%", (olhoAzul / 6) * 100);
    printf("\nRuivos: %d",ruivo);

    return 0;
} // end main