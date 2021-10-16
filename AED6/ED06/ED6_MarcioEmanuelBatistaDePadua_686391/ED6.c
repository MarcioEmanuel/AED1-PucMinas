#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//inicio do metodo00
void Metodo00()
{

}
//Fim do Metodo00
//------------------------
//inicio do metodo01
int Funcao1(int x, int a)
{
    int z = 0;
    if(a>x)
    {
        printf("O programa sera fechado.\n");
        system("pause"); 
    }else
    {
        z = a % 2;
        
            if(z!=0)
            {
                printf("O numero %d e impar.\n", a);
                return Funcao1(x, a + 1);
            }else
            {
                return Funcao1(x, a + 1);
            }
    }
    return 0;
    system("pause");
}
void Metodo01()
{
//identificacao
    printf("Exercicios ED6 - ED0611 - v0.1. - 15 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    int x;
    int a = 5;
    printf("Digite um numero inteiro maior que 5: ");
    scanf("%d", &x);
//chamar procedimento
    Funcao1(x, a);
}
//fim do metodo01
//------------------------
//inicio do metodo02
int Funcao2(int x)
{
    int i = 5;
    int z;

    if(x<i)
    {
        printf("O programa sera fechado!\n");
        system("pause");
        return 0;
    }
    if(x>=i)
    {
        z = x * 3;
        printf("O valor %d eh multiplo de 3.\n", z);
    }

    return Funcao2(x-1);
}
void Metodo02()
{
//identificacao
    printf("Exercicios ED6 - ED0612 - v0.1. - 15 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de daods
    int x;
    printf("Quantos numeros deseja testar: ");
    scanf("%d", &x);
//chamar a funcao
    Funcao2(x);
//encerramento
    system("pause");
}
//fim do metodo02
//------------------------
//inicio do metodo03
int Funcao3(int x)
{
    int i = 1;
    if(x>i)
    {
        if(x%5==0)
        {
            printf("%d\n", x);
            return Funcao3(x-1);
        }else
        {
            return Funcao3(x-1);
        }
    }else
    {
        printf("%d\n", i);
        printf("O programa sera fechado!\n");
    }
    system("pause");
    return 0;
}
void Metodo03()
{
//identificacao
    printf("Exercicios ED6 - ED0613 - v0.1. - 17 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    int x;
    printf("Digite uma quantidade que deseja testar: ");
    scanf("%d", &x);
//chamar procedimento
    Funcao3(x);
}
//fim do metodo03
//------------------------
//inicio do metodo04
int Funcao4(int x)
{
    int i = 1;
    if(i>=x)
    {
        if(x==1)
        {
            printf("%d\n", x);
        }
        printf("O programa sera fechado!\n");
        system("pause");
        return 0;
    }else
    {
        printf("1/%d  ", x);
        return Funcao4(x/5);
    }
}
void Metodo04()
{
//identificacao
    printf("Exercicios ED6 - ED0614 - v0.1. - 17 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    int x;
    printf("Digite o valor que deseja testar: ");
    scanf("%d", &x);
//chamar a funcao
    Funcao4(x);
}
//fim do metodo04
//------------------------
//inicio do metodo 05
int Funcao5(char* palavra, int tamanho,int i)
{
    tamanho = strlen(palavra);
    if(i <= tamanho)
    {
        printf("%c\n", palavra[i]);
        return Funcao5(palavra, tamanho, i+1);
    }else
    {
        printf("\nO programa sera fechado!\n");
        system("pause");
    }
}
void Metodo05()
{
//identificacao
    printf("Exercicios ED6 - ED0615 - v0.1. - 19 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    char palavra[30];
    printf("Digite uma palavra a ser testada: ");
    scanf("%s", palavra);
//chamar metodo;
    Funcao5(palavra, 0, 0);
}
//fim do metodo05
//------------------------
//inicio do metodo06
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
void Metodo06()
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
//fim do metodo06
//------------------------
//inicio do metodo07

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

void Metodo07()
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
//fim do metodo07
//------------------------
//inicio do metodo08

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

void Metodo08()
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
//fim
}
//fim do metodo08
//------------------------
//inicio do metodo 09
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
void Metodo09()
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
}
//fim do metodo09
//------------------------
//inicio do metodo 10

int Funcao10(char Palavra[], int tamanho, int i, int cont)
{
    tamanho = strlen(Palavra);
    if(i<=tamanho)
    {
        if(Palavra[i]>='A' && Palavra[i]<='Z')
        {
            printf("A letra %c eh Maiuscula!\n", Palavra[i]);
            cont++;
        }
    i++;
    return Funcao10(Palavra, tamanho, i, cont);
    }
    return (cont);
}

void Metodo10()
{
//identificacao
    printf("Exercicios ED6 - ED0620 - v0.1. - 21 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Entrada de dados
    char Palavra[100];
    int y = 0;
    printf("Digite uma palavra: ");
    scanf("%s", Palavra);
//chamar a funcao
    y = Funcao10(Palavra, 0 , 0, 0);
//Retorno da Funcao
    printf("A palavra possui %d letras maiusculas\n", y);
//encerramento
    system("pause");
}
//fim do metodo 10
//------------------------
//Main
int main()
{
    int x;
    printf ("ED05 - Programa - v0.0\n\n");

        do{
        printf("Metodo00 - Parar!\n");
        printf("Metodo01 - Mostrar a quantidade em valores impares em ordem crescente comecando em 5.\n");
        printf("Metodo02 - Mostrar a quantidade em multiplos de 3 em ordem decrescente encerrando em 5.\n");
        printf("Metodo03 - Mostrar a quantidade em valores da sequencia (1 5 10 15).\n");
        printf("Metodo04 - Mostrar essa quantidade em valores decrescentes da sequencia (... 1/625 1/125 1/25 1/5 1).\n");
        printf("Metodo05 - Ler uma cadeia de caracteres mostrar cada simbolo separadamente, um por linha.\n");
        printf("Metodo06 - Calcular a soma dos primeiros valores impares positivos comecando em 3.\n");
        printf("Metodo07 - Calcular a soma dos inversos dos primeiros valores impares positivos comecando em 3.\n");
        printf("Metodo08 - Calcular certo termo par da serie de Fibonacci comecando em 1.\n");
        printf("Metodo09 - Contar os dugitos pares em uma cadeia de caracteres.\n");
        printf("Metodo10 - Calcular a quantidade de maiusculas em uma cadeia de caracteres.\n");

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
            }
            }while(x!=0);
//encerramento
return 0;
}
