// Faça um programa que receba o preço, o tipo (A — alimentação; l — limpeza; e v — vestuário) e a
// refrigeração (S — produto que necessita de refrigeração; e N — produto que não necessita de refri-
// geração) de um produto. Suponha que haverá apenas a digitação de dados válidos e, quando houver
// digitação de letras, utilize maiúsculas. calcule e mostre:
// ■■ O valor adicional, de acordo com a tabela a seguir:
// REFRIgERAção TIPo PREço VALoR ADICIoNAL
// N
// A < R$ 15,00 R$ 2,00
//>= R$ 15,00 R$ 5,00
// L < R$ 10,00 R$ 1,50
//>= R$ 10,00 R$ 2,50
// V < R$ 30,00 R$ 3,00
//>= R$ 30,00 R$ 2,50
// S
// A R$ 8,00
// L R$ 0,00
// V R$ 0,00
// O valor do imposto, de acordo com a regra a seguir.
// PREço PERCENTuAL SoBRE o PREço
//< R$ 25,00 5%
//>= R$ 25,00 8%
// ■■ O preço de custo, ou seja, preço mais imposto.
// ■■ O desconto, de acordo com a regra a seguir.
// O produto que não preencher nenhum dos requisitos a seguir terá desconto de 3%, caso contrário,
// 0 (zero).
// Os requisitos são:
// Tipo: A
// Refrigeração: S
// ■■ O novo preço, ou seja, preço de custo mais adicional menos desconto.
// ■■ A classificação, de acordo com a regra a seguir.
// NoVo PREço CLASSIFICAção
//< = R$ 50,00 Barato
// Entre R$ 50,00 e R$ 100,00 Normal
//>= R$ 100,00 Caro
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, valorAdicional, imposto, precoCusto, desconto, novoPreco;
    char tipo, refrigeracao;

    scanf("%f %c %c", &preco, &tipo, &refrigeracao);

    // analise valor adicional
    if (refrigeracao == 'N')
    {
        if (tipo == 'A')
        {
            if (preco < 15)
            {
                valorAdicional = 2;
            } // end if
            else
                valorAdicional = 5;
        } // end if
        else if (tipo == 'L')
        {
            if (preco < 10)
            {
                valorAdicional = 1.50;
            } // end if
            else
                valorAdicional = 2.50;
        } // end else if
        else if (preco < 30)
        {
            valorAdicional = 3;
        } // end else if
        else
            valorAdicional = 2.50;
    } // end if
    else if (tipo == 'A')
    {
        valorAdicional = 8;
    } // end else if
    else
        valorAdicional = 0;

    // analise imposto
    if (preco < 25)
    {
        imposto = preco * 0.05f;
    } // end if
    else
        imposto = preco * 0.08f;

    precoCusto = preco + imposto;

    // analise desconto
    if (tipo != 'A' && refrigeracao != 'S')
    {
        desconto = precoCusto * 0.03f;
    } // end if
    else
        desconto = 0;

    novoPreco = precoCusto + valorAdicional - desconto;

    // analise da classificação
    if (novoPreco <= 50)
    {
        print("Barato");
    } // end if
    else if (novoPreco > 50 && novoPreco < 100)
    {
        printf("Normal");
    } // end else if
    else
        printf("Caro");

    return 0;

} // end main