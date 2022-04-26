#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int idade, sim=0, nao=0, recomenda=0, naoRecomenda=0, opcao, i;
    float mediaIdade=0, percBom;

        for (i=1; i<=20; i++) {

            printf("Digite a idade: ");
            scanf("%d", &idade);

            printf("Responda sua opniao sobre o filme: \n");
            printf("1 - gostou do filme \t");
            printf("2 - nao gostou do filme");
            printf("3 - recomenda o filme \n");
            printf("4 - nao recomenda o filme \n");
            scanf("%d", &opcao);

            if (opcao == 1)
                sim++;
            else if (opcao == 2)
                nao++;
            else {
                mediaIdade += idade;
                sim++;
            }
        }
                mediaIdade = mediaIdade /sim;

                printf("Media de idades das pessoas que responderam excelente: %f \n",mediaIdade);
                printf("Quantidade de pessoas que respondeream regular: %d \n", recomenda);

                percBom = nao;
                percBom = percBom / (i-1);

                printf("Porcentagem de pessoas que responderam bom: %f \n", percBom);

    return 0;

}