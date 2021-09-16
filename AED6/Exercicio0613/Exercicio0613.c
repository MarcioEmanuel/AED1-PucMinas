#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int Funcao3(int x)
{
    int i = 1;
    if(x>i)
    {
        if(x%5==0)
        {
            printf("%d\n", x);
            return Funcao3(x-1);
        }else
        {
            return Funcao3(x-1);
        }
    }else
    {
        printf("%d\n", i);
        printf("O programa sera fechado!\n");
    }
    system("pause");
    return 0;
}

int main()
{
//identificacao
    printf("Exercicios ED6 - ED0613 - v0.1. - 17 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    int x;
    printf("Digite uma quantidade que deseja testar: ");
    scanf("%d", &x);
//chamar procedimento
    Funcao3(x);

return 0;
}