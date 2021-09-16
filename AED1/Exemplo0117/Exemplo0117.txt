#include <stdio.h>

int main (int argc, char* argv [])
{
   printf("\n Exemplo0117 - Programa = V0.0");
   printf("\nAutor: Marcio Emanuel Batista de Padua");
   printf("\n");;

   int X, Resultado;

   printf("\n Digite o valor: ");
   scanf("%i", &X);

   Resultado = X*X*X;

   printf("\n O volume do cubo e de: %i centimetros quadrados", Resultado);

   printf("\n Prescione ENTER para sair.");
   fflush(stdin);
   getchar();

return 0;
}