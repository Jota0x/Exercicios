/*
Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa de-
verá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
segundo, ao total desse produto em estoque. logo após, o programa deverá ler um conjunto indeterminado
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a
quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:
■■ se o código do produto solicitado existe. se existir, tentar atender ao pedido; caso contrário, exibir
mensagem Código inexistente;
■■ cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
escrever a mensagem Não temos estoque suficiente dessa mercadoria. se puder atendê-lo, escrever
a mensagem Pedido atendido. Obrigado e volte sempre;
■■ efetuar a atualização do estoque somente se o pedido for atendido integralmente;
■■ no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados.
*/
#include <stdio.h>

int main()
{
    int codigo[10], totalProduto[10];
    int cliente, codigoProduto, quantidade;

    // le codigo e total de produto
    for (int i = 0; i < 10; i++)
        scanf("%d%d", &codigo[i], &totalProduto[i]);

    scanf("%d", &cliente);

    while (cliente != 0)
    {
        printf("Codigo produto: ");
        scanf("%d", &codigoProduto);
        printf("Quantidade: ");
        scanf("%d", &quantidade);

        // loop principal
        // verificação de estoque
        for (int i = 0; i < 10; i++)
        {
            if (codigo[i] == codigoProduto && quantidade <= totalProduto[i])
            {
                printf("Pedido realizado com sucesso!");
                totalProduto[i] = totalProduto[i] - quantidade;
            }
            else if (codigo[i] == codigoProduto && quantidade > totalProduto[i])
                printf("Estoque insulficiente!");
            else
                printf("Codigo inexistente");
        }
    }

    printf("Estoque atualizado!");
    for (int i = 0; i < 10; i++)
        printf("Codigo: %d | Quantidade de Produtos: %d\n",codigo[i],totalProduto[i]);
        return 0;
} // end main