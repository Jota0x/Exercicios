/*
Faça um programa que preencha três vetores com dez posições cada um: o primeiro vetor, com os nomes de
dez produtos; o segundo vetor, com os códigos dos dez produtos; e o terceiro vetor, com os preços dos pro-
dutos. Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão
aumento.
sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a
R$ 1.000,00. sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores, código e
preço, o aumento será de 20%; para aqueles que satisfazem apenas a condição de código, o aumento será
de 15%; e para aqueles que satisfazem apenas a condição de preço, o aumento será de 10%
*/
#include <stdio.h>

int main()
{
    int codigo[10];
    char *nome[10];
    float preco[10];

    // leitura do vetor
    for (int i = 0; i < 10; i++)
    {
        nome[i] = (char *)malloc(50 * sizeof(char));
        scanf("%s%d%f", nome[i], &codigo[i], &preco[i]);
    }

    // loop principal
    for (int i = 0; i < 10; i++)
    {
        float aumento = 0, novoPreco = 0;

        if (codigo[i] % 2 == 0 && preco[i] > 1000)
            aumento = preco[i] * 0.20f;
        else if (codigo[i] % 2 == 0)
            aumento = preco[i] * 0.15f;
        else if (preco[i] > 1000)
            aumento = preco[i] * 0.10f;
        if (aumento > 0)
        {
            novoPreco = preco[i] + aumento;
            printf("Codigo: %d Preco: %.2f Novo Preco: %.2f Nome: %s\n", codigo[i], preco[i], novoPreco, nome[i]);
        }

    } // end for

    // libera memoria
    for (int i = 0; i < 10; i++)
        free(nome[i]);

    return 0;
} // end main