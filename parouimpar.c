#include <stdio.h>
int main()
{
    int num, resto;
    printf ("\n Entre com um numero inteiro:");
    scanf ("%d", &num);
    resto = num % 2;
    
    if (resto ==1)
    {
        printf ("\nEste numero eh IMPAR");
    }    
    else
    {
        printf ("\nEste numero eh PAR");
    }
    
    return 0;
}    