#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void Funcao8(int x)
{
 int i = 0;
 int Result = 0;

    for(i=1;i<=x;i++)
    {
        Result = Result+i;
    }
    printf("A soma dos numeros naturais ate %d e de : %d\n", x, Result);
system("pause");
}

int main()
{
//identificacao
    printf("Exercicios ED5 - ED0518 - v0.0. - 15 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//estrutura switch
    int x;
    printf("Digite o numero que deseja testar: ");
    scanf("%d", &x);
//chamar a funcao
    Funcao8(x);
    system("pause");
    return 0;
}