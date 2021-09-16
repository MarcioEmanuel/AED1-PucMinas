#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Funcao5()
{
    int x;
    printf("Digite um valor:");
    scanf("%d", &x);

    Met5(x);
}

void Met5(int x)
{
    printf("Digite quantos numeros deseja testar: ");
    int i = 0;
    int y = 0;
    int result = 0;
    scanf("%d", &y);

    for (i=0; i<=y; i++)
    {
        result = pow(x,i);
        printf("1/%d\n", result);
    }
}

int main()
{
//identificacao
    printf("Exercicios ED5 - ED0515 - v0.0. - 11 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//entrada de dados
    int x=0;
    printf("Digite 1 para entrar com a funcao: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        Funcao5();
        break;
    
    default:
        printf("Erro! Valor nao atribuido.\n");
    }

system("pause");
return 0;
}