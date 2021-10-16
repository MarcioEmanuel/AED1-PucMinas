#include <stdio.h>

int main (int argc, char* argv [])
{
    
    printf ( "%s\n", "Exemplo0113 - Programa = v0.0" );
    printf ( "%s\n", "Autor: Marcio Emanuel Batista de Padua" );
    printf ( "\n" );
    
    int X, Y, Retangulo;
    printf("\n Digite o primeiro valor: \t");
    scanf("%i", &X);
    printf("\n Digite o segundo valor: \t");
    scanf("%i", &Y);

    Retangulo = X*Y;

    printf("/n A Area do Retangulo e de: \t %i", Retangulo);

    printf("\n Perssione ENTER para sair.");
    fflush ( stdin );
    getchar();

    return 0;
}
