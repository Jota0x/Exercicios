// Contar Ocorrências de Caracteres: Crie uma função que receba uma string e retorne um mapa ou um array de pares (caractere, contagem),
// indicando quantas vezes cada caractere aparece na string. Por exemplo, para "banana", a saída seria {'b': 1, 'a': 3, 'n': 2}.
#include <stdio.h>
#include <stdlib.h>

void quantidadeLetras(char palavra[]);

int main()
{
    char palavra[50];

    scanf("%s", palavra);

    quantidadeLetras(palavra);

    return 0;
} // end main

void quantidadeLetras(char palavra[])
{

    for (int i = 0; i < 50; i++)
    {
        // percorre toda astring e verifica cada letra
        for (int j = i + 1; palavra[j] != '\0'; j++)
        {   
            
            if (palavra[i] == palavra[j])
            {
                contador++;
            } // end for
        }

        printf(" Letra: %c | %d vez ", palavra[i], contador);

    } // end for
} // quantidade letras