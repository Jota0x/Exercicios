#include <stdio.h>

int main()
{
    // declaração variaveis
    float x, y;

    // le x
    scanf("%f", &x);

   if(x <= 1)
   {
    y = 1;
   }//end if 
   else if (x > 1&& x <=2)
   {
    y = 2;
   }//end else if
   else if(x > 2 && x <= 3)
   {
     y = x * x;
   }//end if
   else
    y = x * x * x;

    //imprime y
    printf("%.2f",y);

    return 0;
} // end main