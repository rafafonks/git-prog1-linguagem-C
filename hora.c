#include <stdio.h>
int main()
{
    int hora;
    printf("\nDigite a hora:");
    scanf ("%d",&hora);
    
    if (hora<12 )
    {
    printf("\nBom dia!!!\n");
    }
    else if (hora<18)
    {
        printf("\n Boa Tarde!!!\n");
    }
    else if (hora<24)
    {
        printf("\nBoa Noite!!!\n");
    }
    else
    {
        printf("\n Numero invalido, tente novamente\n");
    }
    return 0;
}
    
    