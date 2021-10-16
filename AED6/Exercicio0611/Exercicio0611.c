#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int Funcao1(int x, int a)
{
    int z = 0;
    if(a>x)
    {
        printf("O programa sera fechado.\n");
        system("pause"); 
    }else
    {
        z = a % 2;
        
            if(z!=0)
            {
                printf("O numero %d e impar.\n", a);
                return Funcao1(x, a + 1);
            }else
            {
                return Funcao1(x, a + 1);
            }
    }
    return 0;
    system("pause");
}

int main()
{
//identificacao
    printf("Exercicios ED6 - ED0611 - v0.1. - 15 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    int x;
    int a = 5;
    printf("Digite um numero inteiro maior que 5: ");
    scanf("%d", &x);
//chamar procedimento
    Funcao1(x, a);
    return 0;
}