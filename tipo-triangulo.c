#include<stdio.h>
int main()
    {
        int l1,l2,l3;
        
        printf ("Informe o lado 1 do triângulo:");
        scanf ("%d", &l1);
        printf ("Informe o lado 2 do triângulo:");
        scanf ("%d", &l2);
        printf("Informe o lado 3 do triângulo:");
        scanf ("%d", &l3);
        
        if(l1+l2>=l3&&l1+l3>=l2&&l2+l3>=l1)
        {
            if(l1==l2&&l2==l3&&l3==l1)
            {
                printf("Triângulo Equilátero");
            }
            else if (l1==l2||l2==l3||l3==l1)
            {
                printf("Triângulo Isósceles");
            }
            else if (l1!=l2&&l2!=l3&&l3!=l1)
            {
                printf ("Triângulo Escaleno");
            }
        }
        else
        {
            printf ("Valores inválidos para formar um triângulo");
        }
        return 0;
    }