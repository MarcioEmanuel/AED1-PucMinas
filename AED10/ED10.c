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

void Funcao1(int v1, int v2)
{
    //Criar a struct
    struct Aleatorio
    {
        int qtd;
        int *array;
    };
    //declar variaveis
    int i = 0;
    int y = v2 - v1;
    FILE *arquivo01 = fopen("arquivo01.txt", "wt");
    //leitura de dados
    struct Aleatorio ale;
    printf("Digite quantos valores deseja gerar aleatoriamente: ");
    scanf("%d", &ale.qtd);
    ale.array = (int *)malloc(ale.qtd * sizeof(int));

    for (i = 0; i < ale.qtd; i++)
    {
        ale.array[i] = v1 + (rand() % y);
        printf("%d\n", ale.array[i]);
        fprintf(arquivo01, "%d\n", ale.array[i]);
    }
    system("pause");
}

void Metodo01()
{
    printf("Exercicio 01\n");
    //declarar variaveis
    int v1 = 0;
    int v2 = 0;
    //leitura de dados
    printf("Digite um valor para o inicio do intervalo: ");
    scanf("%d", &v1);
    printf("Digite um valor para o fim do intervalo: ");
    scanf("%d", &v2);
    //chamar funcao
    Funcao1(v1, v2);
}
//fim do metodo01
//------------------------
//inicio do metodo02

void Funcao2()
{
    //abrir arquivo
    FILE *arquivo02 = fopen("arquivo02", "rt");
    //criar a struct
    struct scanNum
    {
        int x;
        int *array;
    };

    //declarar variaveis
    int z = 0;
    int i = 0;
    int cont = 0;
    struct scanNum SC;
    //ler do arquivo
    printf("Quantos valores deseja ler do arquivo: ");
    scanf("%d", &z);
    SC.array = (int *)malloc(z * sizeof(int));
    for (i = 0; i < z; i++)
    {
        fscanf(arquivo02, "%d", &SC.array[i]);
    }
    //procurar valor
    printf("Digite o valor que deseja procurar na array: ");
    scanf("%d", &SC.x);
    for (i = 0; i <= z; i++)
    {
        if (SC.x == SC.array[i])
        {
            cont++;
            printf("Valor %d encontrado na posicao %d da array!\n", SC.x, i);
            break;
        }
    }
    if (cont == 0)
    {
        printf("O Valor %d nao existe na array.\n", SC.x);
    }
    system("pause");
}

void Metodo02()
{
    int x = 0;
    printf("Digite 1 para chamar a funcao2: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        Funcao2();
        break;

    default:
        printf("O programa sera fechado!\n");
        break;
    }
}
//fim do metodo02
//------------------------
//inicio do metodo03

void Funcao3()
{
    //Abrir arquivos
    FILE *arquivoA3 = fopen("arquivoA3.txt", "rt");
    FILE *arquivoB3 = fopen("arquivoB3.txt", "rt");
    //declarar struct
    struct compNum
    {
        int *array1;
        int *array2;
    };
    //declarar variaveis
    struct compNum CN;
    int i = 0;
    int x = 0;
    int result = 0;
    //ler dos arquivos
    printf("Digite quantos valores deseja ler dos arquivos: ");
    scanf("%d", &x);
    CN.array1 = (int *)malloc(x * sizeof(int));
    CN.array2 = (int *)malloc(x * sizeof(int));
    for (i = 0; i < x; i++)
    {
        fscanf(arquivoA3, "%d", &CN.array1[i]);
    }
    for (i = 0; i < x; i++)
    {
        fscanf(arquivoB3, "%d", &CN.array2[i]);
    }
    //operar a comparacao das arrays
    for (i = 0; i < x; i++)
    {
        if (CN.array1[i] > CN.array2[i])
        {
            printf("%d > %d , ", CN.array1[i], CN.array2[i]);
        }
        else if (CN.array2[i] > CN.array1[i])
        {
            printf("%d < %d , ", CN.array1[i], CN.array2[i]);
        }
        else
        {
            printf("%d = %d , ", CN.array1[i], CN.array2[i]);
        }
    }
    fclose(arquivoA3);
    fclose(arquivoB3);
    system("pause");
}

void Metodo03()
{
    int x = 0;
    printf("Digite 1 para chamar a funcao3: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        Funcao3();
        break;

    default:
        printf("O programa sera fechado!\n");
        break;
    }
}
//fim do metodo03
//------------------------
//inicio do metodo04

void Funcao4()
{
    //criar struct
    struct soma
    {
        int *array1;
    };
    //abrir arquivo
    FILE *arquivoA4 = fopen("arquivoA4.txt", "rt");
    //declarar variaveis
    const int array2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    struct soma S;
    int i = 0;
    int x = 0;
    int result = 0;
    //quantidade na array
    printf("Digite quantos valores deseja ler do arquivo: ");
    scanf("%d", &x);
    //alocar memoria
    S.array1 = (int *)malloc(x * sizeof(int));
    //ler do arquivo
    for (i = 0; i < x; i++)
    {
        fscanf(arquivoA4, "%d", &S.array1[i]);
    }
    for (i = 0; i < x; i++)
    {
        result = S.array1[i] + array2[i];
        printf("Soma dos valores da posicao %d da array e: %d\n", i, result);
    }
    fclose(arquivoA4);
    system("pause");
}

void Metodo04()
{
    int x = 0;
    printf("Digite 1 para chamar a funcao4: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        Funcao4();
        break;

    default:
        printf("O programa sera fechado!\n");
        break;
    }
}
//fim do metodo04
//------------------------
//inicio do metodo 05

void Funcao5()
{
    //abrir arquivo
    FILE *arquivo05 = fopen("arquivo05", "rt");
    //criar struct
    struct OrdCres
    {
        int *array;
        int qtd;
    };
    //declarart variaveis
    struct OrdCres OC;
    int i = 0;
    int valor = OC.array[0];
    int cont = 0;
    //quantidade de numeros para ler do arquivo
    printf("Digite quantos valores deseja ler do arquivo: ");
    scanf("%d", &OC.qtd);
    //alocar memoria
    OC.array = (int *)malloc(OC.qtd * sizeof(int));
    //estrutura de repeticao
    for (i = 0; i < OC.qtd; i++)
    {
        fscanf(arquivo05, "%d", &OC.array[i]);
        printf("%d ", OC.array[i]);
    }
    for (i = 1; i <= OC.qtd; i++)
    {
        if (OC.array[i] > valor)
        {
            cont++;
            valor = OC.array[i];
        }
        else
        {
            valor = OC.array[i];
        }
    }
    if (cont == OC.qtd - 1)
    {
        printf("A Array esta em ordem crescente.\n");
    }
    else
    {
        printf("A Array NAO esta em ordem crescente.\n");
    }
    system("pause");
}

void Metodo05()
{

    Funcao5();
}
//fim do metodo05
//------------------------
//inicio do metodo06
/* DUVIDA NO EXERCICIO
EXERCICIO INCOMPLETO*/
void Metodo06()
{
}
//fim do metodo06
//------------------------
//inicio do metodo07

void Funcao7()
{
    FILE *arquivo07 = fopen("arquivo07.txt", "rt");
    //declarar variaveis
    int i = 0;
    int y = 0;
    int cont = 0;
    int V1 = 0;
    int V2 = 0;
    //Valores da matriz
    do
    {
        printf("Digite quantas linhas tera a matriz: ");
        scanf("%d", &V1);
        printf("Digite quantas colunas tera a matriz: ");
        scanf("%d", &V2);
    } while (V1 <= 0 || V2 <= 0);
    int *matriz[V1][V2];
    //estrutura de repeticao
    for (i = 0; i < V1; i++)
    {
        for (y = 0; y < V2; y++)
        {
            fscanf(arquivo07, "%d", &matriz[i][y]);
            printf("%d ", matriz[i][y]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for (i = 0; i < V1; i++)
    {
        for (y = 0; y < V2; y++)
        {
            if (matriz[i][y] == 0)
            {
                printf("%d ", matriz[i][y]);
            }
            else
            {
                cont++;
            }
        }
        printf("\n");
    }
    if (cont != 0)
    {
        printf("A matriz contem valores diferentes de 0.\n");
    }
    else
    {
        printf("A matriz possui apenas valores 0.\n");
    }
    system("pause");
}

void Metodo07()
{
    Funcao7();
}
//fim do metodo07
//------------------------
//inicio do metodo08

void Funcao8()
{
    FILE *arquivoA8 = fopen("arquivo08A.txt", "rt");
    FILE *arquivoB8 = fopen("arquivo08B.txt", "rt");
    //declarar variaveis
    int i = 0;
    int y = 0;
    int V1 = 0;
    int V2 = 0;
    //Valores da matriz
    do
    {
        printf("Digite quantas linhas tera a matriz 1 e 2: ");
        scanf("%d", &V1);
        printf("Digite quantas colunas tera a matriz 1 e 2: ");
        scanf("%d", &V2);
    } while (V1 <= 0 || V2 <= 0);
    int *matriz1[V1][V2];
    int *matriz2[V1][V2];
    //estrutura de repeticao
    printf("\nMatriz 1\n");
    for (i = 0; i < V1; i++)
    {
        for (y = 0; y < V2; y++)
        {
            fscanf(arquivoA8, "%d", &matriz1[i][y]);
            printf("%d ", matriz1[i][y]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    printf("Matriz 2\n");
    for (i = 0; i < V1; i++)
    {
        for (y = 0; y < V2; y++)
        {
            fscanf(arquivoB8, "%d", &matriz2[i][y]);
            printf("%d ", matriz2[i][y]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for (i = 0; i < V1; i++)
    {
        for (y = 0; y < V2; y++)
        {
            if (matriz1[i][y] == matriz2[i][y])
            {
                printf("%d = %d ", matriz1[i][y], matriz2[i][y]);
            }
            else
            {
                printf("%d != %d ", matriz1[i][y], matriz2[i][y]);
            }
        }
        printf("\n");
    }
    system("pause");
}

void Metodo08()
{
    Funcao8();
}
//fim do metodo08
//------------------------
//inicio do metodo 09

void Funcao9()
{
    FILE *arquivo09 = fopen("arquivo09.txt", "rt");
    //declarar variaveis
    int i = 0;
    int y = 0;
    int V1 = 0;
    int V2 = 0;
    int valor = 0;
    //tamanho da matriz
    do
    {
        printf("Digite quantas linhas tera a matriz 1 e 2: ");
        scanf("%d", &V1);
        printf("Digite quantas colunas tera a matriz 1 e 2: ");
        scanf("%d", &V2);
    } while (V1 <= 0 || V2 <= 0);
    int matriz[V1][V2];
    const int matriz2[5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //estrutura de repeticao
    for (i = 0; i < V1; i++)
    {
        for (y = 0; y < V2; y++)
        {
            fscanf(arquivo09, "%d", &matriz[i][y]);
            printf("%d ", matriz[i][y]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for (i = 0; i < V1; i++)
    {
        for (y = 0; y < V2; y++)
        {
            valor = matriz[i][y] + matriz2[i][y];
            printf("%d ", valor);
        }
        printf("\n");
    }
}

void Metodo09()
{
    Funcao9();
}
//fim do metodo09
//------------------------
//inicio do metodo 10

void Funcao10()
{
    FILE *arquivo10A = fopen("arquivo10A.txt", "rt");
    FILE *arquivo10B = fopen("arquivo10B.txt", "rt");
    //declarar variaveis
    int i = 0;
    int y = 0;
    int valor = 0;
    int V1 = 0;
    int V2 = 0;
    //tamanho da matriz
    do
    {
        printf("Digite quantas linhas tera a matriz 1 e 2: ");
        scanf("%d", &V1);
        printf("Digite quantas colunas tera a matriz 1 e 2: ");
        scanf("%d", &V2);
    } while (V1 <= 0 || V2 <= 0);
    int Matriz[V1][V2];
    int Matriz2[V1][V2];
    //estrutura de repeticao
    for (i = 0; i < V1; i++)
    {
        for (y = 0; y < V2; y++)
        {
            fscanf(arquivo10A, "%d", &Matriz[i][y]);
            fscanf(arquivo10B, "%d", &Matriz2[i][y]);
        }
        printf("\n\n");
    }
    for (i = 0; i < V1; i++)
    {
        for (y = 0; y < V2; y++)
        {
            valor = Matriz[i][y] * Matriz2[i][y];
            printf("%d ", valor);
        }
        printf("\n");
    }
    system("pause");
}

void Metodo10()
{
    Funcao10();
}
//fim do metodo 10
//------------------------
//Main
int main()
{
    int x;
    printf("ED10 - Programa - v1.0\n\n");

    do
    {
        printf("Metodo00 - 0\n");
        printf("Metodo01 - 1\n");
        printf("Metodo02 - 2\n");
        printf("Metodo03 - 3\n");
        printf("Metodo04 - 4\n");
        printf("Metodo05 - 5\n");
        printf("Metodo06 - 6\n");
        printf("Metodo07 - 7\n");
        printf("Metodo08 - 8\n");
        printf("Metodo09 - 9\n");
        printf("Metodo10 - 10\n");

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
    } while (x != 0);
    //encerramento
    return 0;
}