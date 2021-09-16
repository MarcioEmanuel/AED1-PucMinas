#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int Funcao4(int x)
{
    int i = 1;
    if(i>=x)
    {
        if(x==1)
        {
            printf("%d\n", x);
        }
        printf("O programa sera fechado!\n");
        system("pause");
        return 0;
    }else
    {
        printf("1/%d  ", x);
        return Funcao4(x/5);
    }
}

int main()
{
//identificacao
    printf("Exercicios ED6 - ED0614 - v0.1. - 17 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    int x;
    printf("Digite o valor que deseja testar: ");
    scanf("%d", &x);
//chamar a funcao
    Funcao4(x);
}