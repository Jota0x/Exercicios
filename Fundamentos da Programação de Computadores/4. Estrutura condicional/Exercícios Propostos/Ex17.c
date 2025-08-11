// Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
// programa deve mostrar uma mensagem de permissão de acesso ou não.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senhaCorreta, senha;

    scanf("%d", &senha);

    senhaCorreta = 4531;

    if (senha == senhaCorreta)
    {
        printf("Senha correta!");
    } // end if
    else
        printf("Senha incorreta!");

    return 0;
} // end main