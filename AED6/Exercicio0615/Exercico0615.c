#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Funcao5(char* palavra, int tamanho,int i)
{
    if(i > tamanho)
    {
        printf("O programa sera fechado!\n");
        system("pause");
    }else
    {
        printf("%c\n", palavra[i]);
        return Funcao5(palavra, tamanho, i+1);
    }
}
int main()
{
//identificacao
    printf("Exercicios ED6 - ED0615 - v0.1. - 19 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    char palavra[100];
    int tamanho = strlen(palavra);
    printf("Digite uma palavra a ser testada: ");
    scanf("%s", palavra);
//chamar metodo;
    Funcao5(palavra, tamanho, 0);
return 0;
}