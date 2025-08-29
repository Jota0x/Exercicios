#include <stdio.h>

int main()
{
    // variaveis
    float precoCompra, precoVenda, lucroPercentual = 0,totalCompra = 0,totalVenda = 0,totalLucro = 0;
    int lucro10 = 0, lucro10e20 = 0, lucro20 = 0;
    
    // le preco de compre e preco de venda
    scanf("%f%f", &precoCompra, &precoVenda);

    // loop principal
    while (precoCompra != 0)
    {

        totalCompra += precoCompra;

        totalVenda += precoVenda;

        totalLucro = totalVenda - totalCompra;

        // calculo do lucro percentual
        lucroPercentual = ((precoVenda - precoCompra) / precoCompra) * 100;

        if (lucroPercentual < 10)
        {
            // acrescenta +1 a variavel
            lucro10++;

        } // end if
        else if (lucroPercentual >= 10 && lucroPercentual <= 20)
        {
            // acrescenta +1 a variavel
            lucro10e20++;
        } // end else if
        else
        {
            // acrecenta +1 a variavel
            lucro20++;
        } // end else


        scanf("%f%f",&precoCompra,&precoVenda);

    } // end while

    printf("%d\n",lucro10);
    printf("%d\n",lucro10e20);
    printf("%d\n",lucro20);
    printf("%.2f\n",totalCompra);
    printf("%.2f\n",totalVenda);
    printf("%.2f",totalLucro);

    return 0;
} // end main