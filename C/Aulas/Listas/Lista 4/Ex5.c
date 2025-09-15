#include <stdio.h>

// prototipo da função
int teoremaEuclides(int x, int y);

int main()
{
    int x, y;

    scanf("%d%d", &x, &y);

    printf("%d\n", teoremaEuclides(x, y));

    return 0;
}

// teoremaEuclides
int teoremaEuclides(int x, int y)
{
    if (x == 0)
        return y;
    else
        return teoremaEuclides(y, x % y);
} // end teoremaEuclideds