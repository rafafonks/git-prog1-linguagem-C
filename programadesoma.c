#include <stdio.h>
int main()
{
    //declara variaveis
    int num1, num2,soma, subtracao,multiplicacao;
    float divisao;

    //ler dois numeros inteiros
    printf ("\nEntre com Num1:");
    scanf ("%d",&num1);

    printf ("\nEntre com Num2:");
    scanf ("%d",&num2);
    
    //calcular operacoes matematicas basicas
    soma=num1+num2;
    subtracao=num1-num2;
    multiplicacao=num1*num2;
    divisao=(float)num1/num2;
    
    //imprimir resultado
    printf ("\nSoma= %d", soma);
    printf ("\nsubtracao= %d", subtracao);
    printf ("\nmultiplicacao= %d", multiplicacao);
    printf ("\ndivisao= %f", divisao);
    
    return 0;
}