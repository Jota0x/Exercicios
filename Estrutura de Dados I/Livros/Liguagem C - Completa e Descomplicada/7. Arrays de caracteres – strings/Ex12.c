/*
Escreva um programa que leia o nome e o valor de determinada mercadoria de
uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor
total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor
total, o valor do desconto e o valor a ser pago à vista.
*/

int main()
{
    char *nome = (char *)malloc(50 * sizeof(char));
    float valor = 0, valorVista = 0;
    float desconto = 0;

    scanf("%s", nome);
    scanf("%f", &valor);

    valorVista = valor * 0.90f;
    desconto = valor * 0.10f;

    printf("Nome: %s Preco: %.2f Preco a Vista: %.2f Desconto: %.2f", nome, valor, valorVista, desconto);

    free(nome);

    return 0;
} // end main