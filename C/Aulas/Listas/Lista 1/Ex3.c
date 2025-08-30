#include <stdio.h>

int main()
{
    int anoNascimento, idade, anoAtual = 2025;
    char aniversario;

    // le ano de nascimento e se ja fez aniversário
    scanf("%d %c", &anoNascimento, &aniversario);

    if (aniversario == 'S')
    {
        idade = anoAtual - anoNascimento;
    } // end if
    else
        idade = anoAtual - anoNascimento - 1;

    // escreve se pode ou não dirigir
    if (idade >= 18)
    {
        printf("Pode dirigir");
    } // end if
    else
        printf("Nao pode dirigir");

    // escreve idade
    printf("\n%d", idade);
    return 0;
} // end main