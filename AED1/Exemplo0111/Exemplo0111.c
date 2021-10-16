#include <stdio.h>


int main ( int argc, char* argv [ ] ) {

    printf ( "%s\n", "Exemplo0111 - Programa = v0.0" );
    printf ( "%s\n", "Autor: Marcio Emanuel Batista de Padua" );
    printf ( "\n" );

    int X, AreaQuadrado;
    printf("\n Digite o valor: \t");
    scanf("%d", &X);

    AreaQuadrado = X * X;


    printf("\n A Area do quadrado e de: \t %d", AreaQuadrado);

    printf("\n Perssione ENTER para sair.");
    fflush ( stdin );
    getchar();

return 0;
}

