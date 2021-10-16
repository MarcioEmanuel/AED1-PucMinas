#include <stdio.h>

int main (int argc, char* argv[]) {

    printf ( "%s\n", "Exemplo0112 - Programa = v0.0" );
    printf ( "%s\n", "Autor: Marcio Emanuel Batista de Padua" );
    printf ( "\n" );

    int X, A, P;

    printf("\n Digite o valor:\t", &X);
    scanf("%d", &X);

    A= X*X;
    printf("\n A area do quadrado e de: \t %d", A);
    P= X*4;
    printf("\n O perimetro do quadrado e de: \t %d", P);

    printf("\n Perssione ENTER para sair.");
    fflush ( stdin );
    getchar();
return 0;
}
