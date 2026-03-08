/*Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse pre-
ço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro.*/
#include <stdio.h>

int main()
{
    int preco = 5, ningressos = 120, despesa = 200, lucro = 0;

    // loop principal
    for (float i = 5; i > 1; i -= 0.5)
    {

        ningressos += 26;

        lucro = (ningressos * i) - despesa;

        printf("\nPreco ingresso: %.2f | Numero ingressos: %d | Lucro: %d", i, ningressos, lucro);
    } // end for

    return 0;
} // end main