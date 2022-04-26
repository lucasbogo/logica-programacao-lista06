#include <stdio.h>

int main()
{
    int x=0;
    int y=0;

        printf ("digite o numero menor da sequencia numerica: "); 
        scanf ("%d",&x); 

        printf ("digite o numero maior da sequencia numerica: "); 
        scanf ("%d",&y); 

        while (x<=y)
        {
            printf ("%i ",x); x++; 
        } 

    return 0; 
}
