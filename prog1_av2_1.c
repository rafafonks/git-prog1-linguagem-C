#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, j, x;
    float nota[30];
    char nome[30][30]; 
    char x2[30];
    
    printf("\n\nOlá, meu nome é Rafael Fonseca da Silva e este programa pode ser visto no seguinte endereço do github: https://github.com/rafafonks/git-prog1-linguagem-C/blob/master/prog1_av2_1.c\n");

    
    for(i=0;i<=29;i++)
    {
        printf("\nEntre com o nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);
        printf("\nEntre com a nota do %s: ", nome[i]);
        scanf("%f", &nota[i]);
    }
    
    for(i=0;i<=29;i++ )
    {
        for(j=i+1;j<=29;j++) 
        {
          if ( nota[j] > nota[i] )
          {
             x = nota[j];
             nota[j] = nota[i];
             nota[i] = x;
             
             strcpy(x2, nome[j]);
             strcpy(nome[j], nome[i]);
             strcpy(nome[i], x2);
          }
        } 
    }
    printf("\n\nListagem da Av1\n");
    printf("---------------------\n");
    printf("Nome do aluno\tAv1\n");
    printf("---------------------\n");
    for(i=0;i<=29;i++)
    {
        printf("%s\t\t%.2f\n", nome[i], nota[i]);
    }
    return 0;
}