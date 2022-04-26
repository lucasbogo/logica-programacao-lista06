#include <stdlib.h> 
#include <stdio.h>

int main(void)
{

    char nome[100];
    int sexo, idade, i;

        for (i=0; i<10; i++) {

            printf("Digite o nome: ");
            fflush(stdin);
            fgets(nome, 100, stdin);
            printf("Digite a idade: ");
            fflush(stdin);
            scanf("%d", &idade);
            printf("Digite o sexo <1-M / 2-F>: ");
            fflush(stdin);
            scanf("%d", &sexo);

            if (sexo == 1 && idade > 21){

                printf("Nome: %s \n", nome);
            }
        }

    system("pause");    
    return 0;
}