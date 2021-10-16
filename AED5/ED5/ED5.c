#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//inicio do metodo00
void Metodo00()
{
printf("O programa sera fechado.\n");
//encerramento
system("pause");

}
//Fim do Metodo00
//------------------------
//inicio do metodo01
void Funcao1()
{
     int y;
     printf("Digite um numero: ");
     scanf("%d", &y);
     Met1(y);
}

void Met1(int numero)
{
    int i;
    int z;
    for(i = 1; i <= numero; i++){

        z = i * 2;

            printf("O valor %d e multiplo de 2!\n", z);
    }
system("pause");
}
void Metodo01()
{
//identificacao
    printf("EXercicios ED5 - ED0511 - v0.0. - 10 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//chamar a funcao
    printf("Entrar com a Funcao 1: ");

    int x=0;
    scanf("%d", &x);
    switch(x){
    case 1:
        Funcao1();
        break;
    default:
        printf("ERRO: Valor nao atribuido!\n");

    system("pause");
    }
}
//fim do metodo01
//------------------------
//inicio do metodo02
void Funcao2()
{
    int y;
    printf("Digite um numero: ");
    scanf("%d", &y);
//chamar funcao
    Met2(y);
}

void Met2(int numero)
{
    int i=0;
    int z, y;

    for(i = 1; i <= numero; i++)
    {
        z = i * 3;
        y = z % 2;
        if(y == 0)
        {
        printf("O numero %d e multiplo de 3!\n", z);
        }
    }
}

void Metodo02()
{
//identificacao
    printf("EXercicios ED5 - ED0512 - v0.0. - 11 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//entrade de dados
    int x=0;
    printf("Entrar com a Funcao 1: ");
    scanf("%d", &x);
//chamar a funcao
    switch (x){
    case 1:
        Funcao2();
        break;

    default:
        printf("ERRO! Valor nao atribuido.");
    }
    system("pause");
}
//fim do metodo02
//------------------------
//inicio do metodo03
void Funcao3()
{
    int y;
    printf("Digite um valor: ");
    scanf("%d", &y);

    Met3(y);
}

void Met3(numero)
{
    int i, a,z;
    for(i=numero;i>=0;i--)
    {
        z = i*3;
        a = i%2;
        if(z!=0)
            {
                if(a!=0)
                    {
                        printf("%d\tO valor %d e impar e multiplo de 3!\n", i, z);
                    }
            }
    }
system("pause");
}

void Metodo03()
{
//identificacao
    printf("EXercicios ED5 - ED0513 - v0.0. - 11 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//entrada de dados
    printf("Digite um numero da funcao: ");
    int x=0;
    scanf("%d", &x);
//chamar a funcao
    switch(x){
    case 1:
        Funcao3();
        break;
    default:
        printf("Erro! Valor nao atribuido.\n");
    system("pause");
    }
}
//fim do metodo03
//------------------------
//inicio do metodo04
void Funcao4()
{
    int y=0;
    printf("Digite um numero: ");
    scanf("%d", &y);

    Met4(y);
}

void Met4(int numero)
{
    int i = 0;
    int test;
    for(i>=0;i<=numero; i++)
    {
        test = i%2;
        
        if(test == 0)
        {
            printf("1/%d\n", i);
        }
    }
    system("pause");
}
void Metodo04()
{
//identificacao
    printf("EXercicios ED5 - ED0514 - v0.0. - 11 / 09 / 2019\n");
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
}
//fim do metodo04
//------------------------
//inicio do metodo 05
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

void Metodo05()
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
}
//fim do metodo05
//------------------------
//inicio do metodo06
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

void Metodo06()
{
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
//fim do metodo06
//------------------------
//inicio do metodo07
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

void Metodo07()
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
}
//fim do metodo07
//------------------------
//inicio do metodo08

void Funcao8(int x)
{
 int i = 0;
 int Result = 0;

    for(i=1;i<=x;i++)
    {
        Result = Result+i;
    }
    printf("A soma dos numeros naturais ate %d e de : %d\n", x, Result);
system("pause");
}
void Metodo08()
{
//identificacao
    printf("Exercicios ED5 - ED0518 - v0.0. - 15 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//estrutura switch
    int x;
    printf("Digite o numero que deseja testar: ");
    scanf("%d", &x);
//chamar a funcao
    Funcao8(x);
    system("pause");
}
//fim do metodo08
//------------------------
//inicio do metodo 09
void Funcao9(int x)
{
 int i = 0;
 int Result = 0;

    for(i=1;i<=x;i++)
    {
        Result = Result+pow(i,2);
    }
    printf("A soma do quadrado dos numeros naturais ate %d e de : %d\n", x, Result);
system("pause");
}
void Metodo09()
{
//identificacao
    printf("Exercicios ED5 - ED0518 - v0.0. - 15 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//estrutura switch
    int x;
    printf("Digite o numero que deseja testar: ");
    scanf("%d", &x);
//chamar a funcao
    Funcao9(x);
}
//fim do metodo09
//------------------------
//inicio do metodo 10
void Funcao10(int x)
{
 double i = 0;
 double Result = 0;

    for(i=1;i<=x;i++)
    {
        Result = Result+sqrt(i);
    }
    printf("A soma dos inversos dos numeros ate %d e de : %lf\n", x, Result);
system("pause");
}
void Metodo10()
{
//identificacao
    printf("Exercicios ED5 - ED0520 - v0.0. - 15 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//estrutura switch
    int x;
    printf("Digite o numero que deseja testar: ");
    scanf("%d", &x);
//chamar a funcao
    Funcao10(x);
}
//fim do metodo 10
//------------------------
//Main
int main()
{
    int x=0;
    printf("Metodo00 - Nao faz nada!\n");
    printf("Metodo01 - Mostrar a quantidade em valores multiplos de 2 em ordem crescente.\n");
    printf("Metodo02 - Mostrar a quantidade em valores pares multiplos de 3 em ordem crescente.\n");
    printf("Metodo03 - Mostrar essa quantidade em valores impares multiplos de 3 em ordem decrescente.\n");
    printf("Metodo04 - Mostrar essa quantidade em valores crescentes nos denominadores "
           "(sequencia dos inversos) multiplos de 2: 1/2 1/4 1/6 1/8 1/10 ...\n");
    printf("Metodo05 - Mostrar essa quantidade em valores crescentes nos denominadores "
           "da sequência: 1 1/x 1/x2 1/x3...\n");
    printf("Metodo06 - Calcular a soma dos primeiros valores pares positivos começando em 2 "
           "e não multiplos de 5.\n");
    printf("Metodo07 - Calcular a soma dos inversos (1/x) dos primeiros valores pares positivos, "
           "começando em 2 e não multiplos de 5.\n");
    printf("Metodo08 - Calcular a soma dos primeiros numeros naturais começando em 1.\n");
    printf("Metodo09 - Calcular a soma dos quadrados dos primeiros numeros naturais começando em 1\n");
    printf("Metodo10 - Calcular a soma dos inversos dos primeiros números naturais começando em 1\n");

//estrutura switch
    printf("Digite a opcao desejada: ");
    scanf("%d", &x);
    switch (x)
    {
    case 0:
        Metodo00();
        break;
    case 1:
        Metodo01();
        break;
    case 2:
        Metodo02();
        break;
    case 3:
        Metodo03();
        break;
    case 4:
        Metodo04();
        break;
    case 5:
        Metodo05();
        break;
    case 6:
        Metodo06();
        break;
    case 7:
        Metodo07();
        break;
    case 8:
        Metodo08();
        break;
    case 9:
        Metodo09();
        break;
    case 10:
        Metodo10();
        break;
    default:
        printf("ERRO: Valor nao atribuido!");
    }
//encerramento
return 0;
}
