#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Funcao2(int x)
{
    int i = 5;
    int z;

    if(x<i)
    {
        printf("O programa sera fechado!\n");
        system("pause");
        return 0;
    }
    if(x>=i)
    {
        z = x * 3;
        printf("O valor %d eh multiplo de 3.\n", z);
    }
    
    return Funcao2(x-1);
}

int main()
{
//identificacao
    printf("Exercicios ED6 - ED0612 - v0.1. - 15 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de daods
    int x;
    printf("Quantos numeros deseja testar: ");
    scanf("%d", &x);
//chamar a funcao
    Funcao2(x);
}