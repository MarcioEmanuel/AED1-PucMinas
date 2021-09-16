#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void Funcao10(int x)
{
 double i = 0;
 double Result = 0;

    for(i=1;i<=x;i++)
    {
        Result = Result+sqrt(i);
    }
    printf("A soma dos inversos dos numeros ate %d e de : %lf\n", x, Result);
system("pause");
}

int main()
{
//identificacao
    printf("Exercicios ED5 - ED0520 - v0.0. - 15 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//estrutura switch
    int x;
    printf("Digite o numero que deseja testar: ");
    scanf("%d", &x);
//chamar a funcao
    Funcao10(x);
    return 0;
}