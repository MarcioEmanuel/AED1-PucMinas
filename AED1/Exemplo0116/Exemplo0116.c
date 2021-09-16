#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{

    printf ( "%s\n", "Exemplo0116 - Programa = v0.0" );
    printf ( "%s\n", "Autor: Marcio Emanuel Batista de Padua" );
    printf ( "\n" );

    double X, Area, Altura, Perimetro;

    printf("\n Digite o valor: \t");
    scanf("%lf", &X);

    Perimetro = X*3;
    Area= pow(X,2)*sqrt(3)/4;
    Altura = sqrt(3)/2*X;

    printf("\n A altura do triangulo equilatero e de: \t %lf", Altura);
    printf("\n A Area do triangulo equilatero e de: \t %lf", Area);
    printf("\n O perimetro do triangulo equilatero e de: \t %lf", Perimetro);
    
    printf("\n Perssione ENTER para sair.");
    fflush ( stdin );
    getchar();

    return 0;
}

