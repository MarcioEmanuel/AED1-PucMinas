#include <stdio.h>
#include <math.h>

int main (int argc, char* argv[])
{
    printf ( "%s\n", "Exemplo0119 - Programa = v0.0" );
    printf ( "%s\n", "Autor: Marcio Emanuel Batista de Padua" );
    printf ( "\n" );

    float Raio, Resultado;

    printf("\n Digite o Valor do Raio: ");
    scanf("%f", &Raio);

    Resultado = pow(Raio,2);
    Resultado = Resultado*M_PI;

    printf("\n A area do circulo e de: %f", Resultado);

    printf("\n Perssione ENTER para sair.");
    fflush (stdin);
    getchar();

    return 0;
}
