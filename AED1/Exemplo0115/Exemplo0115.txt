#include <stdio.h>

int main(int argc, char* argv[])
{
  
  printf ( "%s\n", "Exemplo0115 - Programa = v0.0" );
  printf ( "%s\n", "Autor: Marcio Emanuel Batista de Padua" );
  printf ( "\n" );
  
  double X, Y, Area;

  printf("\n Digite o primeiro valor: \t");
  scanf("%lf", &X);
  printf("\n Digite o segundo valor: \t");
  scanf("%lf", &Y);

  Area= X*Y/2;

  printf("\n A Area do triangulo e de: \t %lf", Area);

  printf("\n Perssione ENTER para sair.");
  fflush ( stdin );
  getchar();

return 0;
}
