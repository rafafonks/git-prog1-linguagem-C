#include<stdio.h>
int main()
{
    int num, a=0, b=1, c;
    
    printf("\nDigite um numero:");
    scanf ("%d",&num);
    
    
    if (num<0)
    {
        printf ("Numero inválido");
    }
        else
    { 
    
        printf ("0-1");
    
    while (b<num)
        {
        c=b+a;
        printf ("%d",c);
        a=b;
        b=c;
        }
        printf ("\n");
        
    
    }
    return 0;
}