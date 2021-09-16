#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void Funcao7(int x)
{
    int i = 0;
    double Result = 0;
    int z = 0;
    int y = 0;

    for (i=1;i<=x;i++)
    {
    z = i%2;
    y = i%5;
        if(z==0 && y!=0)
        {
            Result = Result + sqrt(i);
        }
    }
    printf("A soma do inverso dos valores ate %d e de: %lf\n", x, Result);
    system("pause");
}

int main()
{
//identificacao
  printf("Exercicios ED5 - ED0517 - v0.0. - 15 / 09 / 2019\n");
  printf("Author: Marcio Emanuel Batista de Padua\n");
  printf("Matricula: 686391\n\n");
//estrutura switch
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);
//chamar a funcao
Funcao7(x);
return 0;
}
