#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Funcao4()
{
    int y=0;
    printf("Digite um numero: ");
    scanf("%d", &y);

    Met4(y);
}

void Met4(int numero)
{
    int i = 1;
    int test;
    double result;
    for(i>=0;i<=numero; i++)
    {
        test = i%2;
        if(test == 0)
        {
            result = 1/i;
            printf("1/%d\tO resultado eh:%lf \n", i, result);
        }
    }
    system("pause");
}

int main()
{
//identificacao
    printf("EXercicios ED5 - ED0511 - v0.0. - 10 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//entrada de dados
    int x=0;
    printf("Digite o numero do funcao: ");
    scanf("%d", &x);
//chamar a funcao
    switch (x)
    {
    case 1:
            Funcao4();
        break;
    default:
        printf("Erro! Valor nao atribuido.\n");

        system("pause");
    }
return 0;
}