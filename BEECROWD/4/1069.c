#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Remove(char *string);
int contDiamantes(char *string);

int main()
{
    char string[1000];
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", string);
        ;

        printf("%d\n", contDiamantes(string));
    }

    return 0;
}

int contDiamantes(char *string)
{
    int inicio = 0, fim = 0;
    int aux = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
            inicio++;
        else if (string[i] == '>')
        {
            fim++;
            if (inicio > 0)
            {
                aux++;

                //zera quando achar um <>
                fim--;
                inicio--;
            }        
        }

    }

    return aux;
}
