#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ciframento(char *palavra,int tam);


int main()
{
    char *palavra = (char*)malloc(100 * sizeof(char));

    fgets(palavra,100,stdin);

    ciframento(palavra,strlen(palavra));
    printf("\n"); //apenas para formatação

    free(palavra);

    return 0;
}

void ciframento(char *palavra,int tam)
{
    if(tam < 0)
        return;

    printf("%c",palavra[tam] + 3);

    ciframento(palavra,tam -1);

}