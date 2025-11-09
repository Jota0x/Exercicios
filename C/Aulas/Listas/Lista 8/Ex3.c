#include <stdio.h>
#include <stdlib.h>
#define MAX 500

typedef struct
{
    int codigo;
    char *email;
    int horas;
    char pagina;

} Cliente;

int main()
{

    Cliente cliente[MAX];

    for (int i = 0; i < MAX; i++)
        cliente[i].email = (char *)malloc(100 * sizeof(char));

    for (int i = 0; i < MAX; i++)
        scanf("%d%s%d %c", &cliente[i].codigo, cliente[i].email, &cliente[i].horas, &cliente[i].pagina);

    for (int i = 0; i < MAX; i++)
    {

        float valorHora = 0;
        int pagina = 0;

        if (cliente[i].horas <= 20)
            valorHora = 35;
        else
            valorHora = 35 + (2.50 * (cliente[i].horas - 20));
        if (cliente[i].pagina == 'S')
            pagina = 40;

        valorHora = valorHora + pagina;

        printf("%d", cliente[i].codigo); // codigo
        printf("%s", cliente[i].email);
        printf("%d", cliente[i].horas);
        printf("%c", cliente[i].pagina);
        printf("%.2f", valorHora);
    }

    for (int i = 0; i < MAX; i++)
        free(cliente[i].email);

} // end main