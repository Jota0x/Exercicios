#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *palavra = (char *)malloc(50 * sizeof(char));

    scanf("%s", palavra);

    for (int i = strlen(palavra) - 1; i >= 0; i--)
        printf("%c", palavra[i]);

    return 0;
} // end main