/*
Faça um programa para ler 10 números diferentes a serem armazenados em um
vetor. Os números deverão ser armazenados no vetor na ordem em que forem li-
dos, sendo que, caso o usuário digite um número que já foi digitado anteriormen-
te, o programa deverá pedir a ele para digitar outro número. Note que cada valor
digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre
os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
*/
#include <stdio.h>

int main()
{
    int n[10];
    int repetido;

    for (int i = 0; i < 10; i++)
    {
        do
        {
            repetido = 0;

            scanf("%d", &n[i]);

            for (int j = 0; j < i; j++)
            {
                if (n[i] == n[j])
                {
                    repetido = 1;
                    printf("Numero repetido");
                }
            }
        } while (repetido == 1);
    }

    for (int i = 0; i < 10; i++)
        printf("%d", n[i]);

    return 0;
} // end main