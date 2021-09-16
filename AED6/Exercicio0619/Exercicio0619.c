#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int Funcao9(char palavra[], int i, int cont)
{
    int tamanho = strlen(palavra);
    if(i<tamanho)
    {
        if(palavra[i] >= '0' && palavra[i] <= '9')
        {
            if(palavra[i]%2==0)
            {
                printf("Eh par: %c\n", palavra[i]);
                cont++;
            }

        }
    i++;
    return Funcao9(palavra, i,cont);
    }
    return (cont);
}

int main()
{
//identificacao
    printf("Exercicios ED6 - ED0619 - v0.1. - 21 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    char palavra[100];
    int y=0;
    printf("Digite um conjunto de caracteres ou digitos: ");
    scanf("%s", palavra);
//chamar a funcao recursiva
    y = Funcao9(palavra, 0, 0);
    printf("A string possui %d numeros pares.\n", y);
//fim
system ("pause");
return 0;
}