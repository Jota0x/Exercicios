// Pal´ındromo - Refa¸ca a quest˜ao anterior RECURSIVAMENTE.

#include <iostream>
using namespace std;

bool Palindromo(string palavra, int inicio, int final);

int main()
{
    string palavra = "ovo";

    printf("%d\n", Palindromo(palavra, 0, palavra.length() - 1));

    return 0;
}

bool Palindromo(string palavra, int inicio, int final)
{
    if (inicio >= final)
        return true;
    else if (palavra[inicio] != palavra[final])
        return false;
    else
        return Palindromo(palavra, inicio + 1, final - 1);
}