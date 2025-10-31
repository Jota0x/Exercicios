#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *letra = (int *)malloc(26 * sizeof(int));

    for (int i = 0; i < 26; i++)
        letra[i] = i + 65;

    for (int i = 0; i < 26; i++)
        printf("%c ", letra[i]);

    free(letra);

    return 0;

} // end main