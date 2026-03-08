#include <iostream>
using namespace std;

bool EhPalindromo(string palavra, int inicio, int final);

int main()
{
    string palavra;

    cin >> palavra;

    if (EhPalindromo(palavra, 0, palavra.length() - 1) == false)
        cout << "NAO";
    else
        cout << "SIM";

    return 0;
}

bool EhPalindromo(string palavra, int inicio, int final)
{

    if (inicio >= final)
        return true;

    if (palavra[inicio] != palavra[final])
        return false;
    else
        return EhPalindromo(palavra, inicio + 1, final - 1);
}
