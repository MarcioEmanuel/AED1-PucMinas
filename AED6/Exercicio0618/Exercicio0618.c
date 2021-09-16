#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Theldo, o programa esta funcionando mas, esta imprimindo alguns numeros a mais da sequencia de fibonacci

void Funcao8(int fib, int f1,int f2)
{
    int f;
    int f3;
//Calcular o Fibonacci
    
    if(fib==1)
    {
        printf("%d - ", f);
        return Funcao8(fib-1, f1, f2);
    }
    if(fib>f2)
    {
        f3=f1+f2;
        printf("%d - ", f3);
        f1=f2;
        f2=f3;
        return Funcao8(fib -1, f1, f2);
    }else
        {
            printf("\nO programa sera fechado!\n");
            system("pause");
        }
}

int main()
{
//identificacao
    printf("Exercicios ED6 - ED0618 - v0.1. - 20 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    int x;
    printf("Digite um numero:");
    scanf("%d", &x);
//chamar a função
    Funcao8(x, 0, 1);
//encerramento
    return 0;
}