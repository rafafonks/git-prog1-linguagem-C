#include<stdio.h>
    int main()
    {
        int anoN,idade;
        int anoC = 2016;
           
    
            printf ("\nInforme o ano de seu nascimento:\n");
            scanf ("%d",&anoN);
           
            idade = anoC-anoN;
            printf("Sua idade é = %d\n", idade);
           
        return 0;    
    }