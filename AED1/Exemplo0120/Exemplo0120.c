#include <stdio.h>
#include <math.h>

int main (int argc, char* argv[])
{
    printf("\n Exercicio0120 - Programa = v0.0");
    printf("\n Autor: Marcio Emanuel Batista de Padua");
    printf("\n");

    float X, Resultado, Volume;

    printf("\n Digite o valor do raio: ");
    scanf("%f", &X);

    Resultado = 4*M_PI*pow(X,3);
    Volume = Resultado/3;

    printf("\n O volume da esfera e de %f centimetros cubicos", Volume);

    printf("Pressione ENTER para sair.");
    fflush(stdin);
    getchar();

return 0;
}