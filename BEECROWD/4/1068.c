#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isCorrect(char *string);

int main()
{
    char string[1000];

    while (scanf("%s", string) != EOF)
    {

        if (isCorrect(string))
            printf("correct\n");
        else
            printf("incorrect\n");
    }

    return 0;
}

bool isCorrect(char *string)
{
    int aux = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '(')
            aux++;
        else if (string[i] == ')')
            aux--;

        if (aux < 0)
            return false;
    }

    if (aux == 0)
        return true;
    else
        return false;
}