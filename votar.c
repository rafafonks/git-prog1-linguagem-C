#include <stdio.h>
 int main()
{
    // declarar variáveis
    int idade;
    //ler teclado
    printf ("\nDigite a idade:");
    scanf("%d",&idade);
    
    if (idade<16)
    {
        printf ("\nVoce NAO pode VOTAR!\n");
    }
    else if (idade == 16 || idade == 17 || idade >70)
    {
        printf ("\nVoto FACULTATIVO");
    }
    else 
    {
        printf ("\nVoto OBRIGATORIO\n");
    }
    return 0;
}