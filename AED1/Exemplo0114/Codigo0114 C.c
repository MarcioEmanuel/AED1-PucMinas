#include <stdio.h>

int main(int argc, char* argv[])
{
    
    printf ( "%s\n", "Exemplo0114 - Programa = v0.0" );
    printf ( "%s\n", "Autor: Marcio Emanuel Batista de Padua" );
    printf ( "\n" );
    
    int X, Y, Area, Perimetro;

    printf("\n Digite o primeiro valor: \t");
    scanf("%i", &X);
    printf("\n Digite o segundo valor: \t");
    scanf("%i", &Y);

    Area= X*Y;
    Perimetro= X*2+Y*2;

    printf("\n A area do retangulo e de: \t %i", Area);
    printf("\n O perimetro do retangulo e de: \t %i", Perimetro);

    printf("\n Perssione ENTER para sair.");
    fflush ( stdin );
    getchar();
    
    return 0;
}
