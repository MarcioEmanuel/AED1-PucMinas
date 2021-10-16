#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void Funcao2()
{
    int y;
    printf("Digite um numero: ");
    scanf("%d", &y);
//chamar funcao
    Met1(y);
}

void Met2(int numero)
{
    int i=0;
    int z;

    for(i = 1; i <= numero; i++)
    {
        z = i % 3;
        if(z == 0)
        {
            printf("O numero %d e multiplo de 3!\n", i);
        }
    }
}

int main()
{
//identificacao
    printf("EXercicios ED5 - ED0512 - v0.0. - 10 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//entrade de dados
    int x=0;
    printf("Entrar com a Funcao 1: ");
    scanf("%d", &x);
//chamar a funcao
    switch (x){
    case 1:
        Funcao1();
        break;
    
    default:
        printf("ERRO! Valor nao atribuido.");
    }
    system("pause");
    return 0;
}