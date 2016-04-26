#include<stdio.h>
int main()
{
    float Nota1,Nota2;
    float media;
    printf ("\nEntre com Nota1:\n");
    scanf ("%f",&Nota1);
    printf ("\nEntre com Nota2:\n");
    scanf ("%f",&Nota2);
    media = (Nota1+Nota2)/2;
    if (media<=5.0)
    {
        printf ("\nReprovado!!");
    }
    else if (media<7)
    {
        printf ("\nRecuperacao!!");
    }
    else 
    {
        printf ("\nAprovado!!");
    }
    return 0;
}
