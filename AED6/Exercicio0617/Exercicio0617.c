#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int Funcao7(x)
    {
        int soma = 0;
        if(x>1)
        {
            soma=(Funcao7(x-1)+(x*2)+1);
            printf("%d - 1/%d\n", x , (x*2)+1);
        }else
        {
            printf("%d - 1/%d\n", x, 3);
        }
    return soma;
    }

int main()
{
//identificacao
    printf("Exercicios ED6 - ED0617 - v0.1. - 20 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Soma: 1/%d\n", Funcao7(x));
//encerramento
    system("pause");
}