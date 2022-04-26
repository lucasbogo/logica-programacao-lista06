#include <stdio.h>

int main() 
{

    long int a,b,c;
    int n,cont;
 

        printf("Digite quantos termos da sequencia de Fibonacci voce quer: ");
        scanf("%d", &n);

        if (n <= 1) {
            printf("Numero de termos invalido\n");
        }
            else {
    
                a = 1;
                b = 1;
                cont = 2;
                printf("\n\n1\n1\n");

                while(cont < n) {

                    c = a + b;
                    printf("%ld \n", c);
                    a = b;
                    b = c;
                    cont = cont + 1;
      
                }
            }

    return(0);
}