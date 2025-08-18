#include <stdio.h>

int main()
{   
    //declaração variaável
    float nota;

    //le nota
    scanf("%f",&nota);

    if(nota >= 8 && nota <= 10)
    {
        printf("Otimo");
    }//end if 
    else if(nota >= 7 && nota < 8)
    {
        printf("Bom");
    }// end else if
    else if(nota >= 5 && nota < 7)
    {
        printf("Regular");
    }
    else
        printf("Insatisfatorio");


    return 0;
}// end main