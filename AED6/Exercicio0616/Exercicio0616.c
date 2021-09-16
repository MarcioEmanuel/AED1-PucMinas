#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
//identificacao
    printf("Exercicios ED6 - ED0615 - v0.1. - 19 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    int x;
    printf("Digite um valor para se testado: ");
    scanf("%d", &x);
    printf("Soma %d\n ", Funcao6(x));
    system("pause");
}

    int Funcao6(x)
    {
        int soma = 0;
        if(x>1)
        {
            soma=(Funcao6(x-1)+(x*2)+1);
            printf("%d - %d\n", x , (x*2)+1);
        }else
        {
            printf("%d - %d\n", x, 3);
        }
    return soma;
    }