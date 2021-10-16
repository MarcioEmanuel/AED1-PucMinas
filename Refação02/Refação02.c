#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void Exercicio00();
void Exercicio01();
void Exercicio02();
void Exercicio03();
void Exercicio04();

int main()
{
    int x = 0;
    do
    {
        printf("Autor: Marcio Emanuel Batista de Padua\t");
        printf("Matricula: 686391");
        printf("REFACAO 02\n\n");
        printf("\nEscolha uma das alternativas abaixo.\n\n");
        printf("\nFechar o Programa: 0\n");
        printf("\nExercicio01: 1\n");
        printf("\nExercicio02: 2\n");
        printf("\nExercicio03: 3\n");
        printf("\nExercicio04: 4\n");
        printf("Digite o valor do exercicio: ");
        scanf("%d", &x);
        switch (x)
        {
        case 0:
            Exercicio00();
            break;
        case 1:
            Exercicio01();
            break;
        case 2:
            Exercicio02();
            break;
        case 3:
            Exercicio03();
            break;
        case 4:
            Exercicio04();
            break;
        default:
            break;
        }
    } while (x < 0 || x > 4);
}

void Exercicio00()
{
    printf("O programa sera fechado!\n");
    system("pause");
}
//Fim do Exercicio 00
//----------------------
//Inicio do Exercicio 01

int funcao01(int x, int y)
{
    int resultado = 0;
    if (y < 0)
    {
        resultado = 10000 + funcao01(x, -y);
    }
    else
    {
        if (y > 0)
        {
            resultado = funcao01(x + 1, y / 2) * 10 + y % 2;
        }
    }
    return (resultado);
}

void Exercicio01()
{
    //declarar variaveis
    int x = 0;
    int y = 0;
    //entrada de dados
    printf("Digite valores para X: ");
    scanf("%d", &x);
    printf("Digite valores para Y: ");
    scanf("%d", &y);
    //chamar a funcao
    printf("f(x)= %d", funcao01(x, y));
}
//Fim do Exercicio 01
//----------------------
//Inicio do Exercicio 02

int Funcao02(char *palavra, int tamanho)
{
    //declarar variaveis
    int i = 0;
    int cont = 0;
    int cont2 = 0;
    //estrutura de repeticao
    for (i = 0; i < tamanho; i++)
    {
        if (palavra[i] >= 'a' && 'f' <= palavra[i])
        {
            cont++;
        }
        else if (palavra[i] >= 'A' && 'F' <= palavra[i])
        {
            cont++;
        }
        else if (palavra[i] >= '0' && '9' <= palavra[i])
        {
            cont2++;
        }
    }
    if (cont != 0 && cont2 == 0)
    {
        return (1);
    }
    if (cont2 != 0)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

void Exercicio02()
{
    //declarar variaveis
    char palavra[100];
    int tamanho = strlen(palavra);
    //entrada de dados
    printf("Digite o conjunto de caracteres que deseja testar: ");
    scanf("%s", palavra);
    //retorno da funcao
    printf("Resultado(1)=True\n");
    printf("Resultado(0)=False\n\n");
    printf("Resultado = %d", Funcao02(palavra, tamanho));
}
//Fim do Exercicio 02
//----------------------
//Inicio do Exercicio 03

void Exercicio03()
{
    //abrir arquivo
    FILE *arquivo02 = fopen("arquivo02.txt", "rt");
    //declarar variaveis
    int i = 0;
    int cont = 0;
    int y = 0;
    int a = 0;
    int cont2 = 0;
    //entrada de dados
    fscanf(arquivo02, "%lf", &a);
    while(!feof(arquivo02))
    {
    fscanf(arquivo02, "%lf", &a);
    cont2++;
    }
    double array[cont];
    y = cont2 / 2;
    //comparar tamanhos
    for (i = y; i < cont2; i++)
    {
        if (-0.001 <= (array[0] - array[i]) || (array[0] - array[i]) <= 0.001)
        {
            cont = cont + 1;
        }
    }
    printf("O arquivo possui %d numeros proximos ao Primeiro valor da array\n", cont);
    system("pause");
}
//Fim do Exercicio 03
//----------------------
//Inicio do Exercicio 04

void Exercicio04()
{
    //declarar variaveis
    int x = 0;
    do
    {
        printf("Digite quntos valores tera na array: ");
        scanf("%d", &x);
    } while (x <= 0);
    int array1[x];
    int i = 0;
    int y = 0;
    int repet = -1;
    //int backup = 0;
    int valorfinal;
    //entrada de dados
    for (i = 0; i < x; i++)
    {
        printf("Digite o valor da posicao %d da array: ", i);
        scanf("%d", &array1[i]);
    }
    //achar repeticao
    for (i = 0; i < x; i++)
    {
        int cont = 0;
        for (y = 0; y < x; y++)
        {
            if (array1[i] == array1[y])
            {
                cont++;
            }
            if (cont >= repet)
            {
                repet = cont;
                if (valorfinal > array1[y])
                {
                    valorfinal = array1[y];
                }
            }
        }
    }

    printf("\nO valor %d repete %d vezes.\n", valorfinal, repet);
}
//Fim do Exercicio04