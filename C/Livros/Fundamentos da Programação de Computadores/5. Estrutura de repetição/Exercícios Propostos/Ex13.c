/*
Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
30 anos e de 31 anos para cima.
*/

int main()
{
    int idade, aux1 = 0, aux2 = 0, aux3 = 0;
    float media1 = 0, media2 = 0, media3 = 0;

    // loop principal
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &idade);

        // trata faixa etaria
        if (idade >= 1 && idade <= 10)
        {
            media1 += idade;
            aux1++;
        }
        else if (idade >= 11 && idade <= 20)
        {
            media2 += idade;
            aux2++;
        }
        else
            media3 += idade;
        aux3++;

    } // end for

    printf("Media 1: %f Media 2: %f Media 3: %f", media1 / aux1, media2 / aux2, media3 / aux3);

    return 0;
} // end main