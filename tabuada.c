#include <stdio.h>
#include <stdlib.h>

int tabuada;


int resultado (tabuada){
   int multiplicador;
   multiplicador=0;
   int resfinal;
   while (multiplicador<=10) {
      resfinal = tabuada * multiplicador;
      printf("\n%dx%d=%d\n",tabuada,multiplicador,resfinal);
      multiplicador++;
   }
}

int main () {
   printf("\nDigite um número para ver a sua tabuada: ");
   scanf("%d",&tabuada);
   if (tabuada==0) printf ("Que tal digitar um número da próxima vez?");
   else resultado (tabuada);
   return 0;
   }