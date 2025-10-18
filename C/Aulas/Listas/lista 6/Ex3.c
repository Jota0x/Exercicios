#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    int caractere = 0;

    arquivo = fopen("EX2.txt", "r");

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO");
    else
        for (int chaveA = fgetc(arquivo); chaveA != EOF; chaveA = fgetc(arquivo)) // fgetc lê unico caracter por vez
            if (chaveA == 'a' || chaveA == 'A')
                caractere++;

    printf("Numeros de A: %d", caractere);

    return 0;
} // end main