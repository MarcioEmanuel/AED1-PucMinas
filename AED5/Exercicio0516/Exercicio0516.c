
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Funcao6(int n)
{
  int i = 2;
  int result = 0;
  int z = 0;
  int a = 0;

  for(i=1;i<=n;i++)
  {
    z = i%2;
    a = i%5; 
    if(z==0 && a!=0)
    {
      result=result+i;
    }
  }
  printf("A soma dos valores pares e nao multiplos de 5 ate o valor %d e de : %d\n", n, result);
  system("pause");
}

int main(){
//identificacao
  printf("Exercicios ED5 - ED0516 - v0.0. - 14 / 09 / 2019\n");
  printf("Author: Marcio Emanuel Batista de Padua\n");
  printf("Matricula: 686391\n\n");
//entrada de dados
  int n = 0;
  int r = 0;
  printf("Digite uma valor que deseja testar: ");
  scanf("%d", &n);
//chamar a funcao
  Funcao6(n);
}


