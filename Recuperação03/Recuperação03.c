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

void OrdemDecrescente(int array[], int x)
{
    int aux = 0;
    //Abrir arquivo que recebe os valores na ordem
    FILE *arquivo001 = fopen("DECRESCENTE1.txt", "wt");
    //Colocar na ordem Crescente
    for (int i = 0; i < x; i++)
    {
        for (int j = i; j < x; j++)
        {
            if (array[i] < array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        fprintf(arquivo001, "%d ", array[i]);
    }
    fclose(arquivo001);
}

void Metodo01()
{
    //Declarar variaveis
    int x = 0;
    do
    {
        printf("Digite quantos valores deseja ler do arquivo: ");
        scanf("%d", &x);
    } while (x <= 0);
    int array[x];
    //Abrir arquivo .txt
    FILE *arquivo01 = fopen("DADOS1.txt", "rt");
    //Passar valores do arquivo para array
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo01, "%d", &array[i]);
    }
    //Utilizar a funcao
    OrdemDecrescente(array, x);
    //Fechar arquivo .txt
    fclose(arquivo01);
}
//fim do metodo01
//------------------------
//inicio do metodo02

void OrdemCrescente(int array[], int x)
{
    int aux = 0;
    //Abrir arquivo que recebe os valores na ordem
    FILE *arquivo002 = fopen("DECRESCENTE2.txt", "wt");
    //Colocar na ordem Crescente
    for (int i = 0; i < x; i++)
    {
        for (int j = i; j < x; j++)
        {
            if (array[i] > array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        fprintf(arquivo002, "%d ", array[i]);
    }
    fclose(arquivo002);
}

void Metodo02()
{
    //Declarar variaveis
    int x = 0;
    do
    {
        printf("Digite quantos valores deseja ler do arquivo: ");
        scanf("%d", &x);
    } while (x <= 0);
    int array[x];
    //Abrir arquivo .txt
    FILE *arquivo02 = fopen("DADOS2.txt", "rt");
    //Passar valores do arquivo para array
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo02, "%d", &array[i]);
    }
    //Utilizar a funcao
    OrdemCrescente(array, x);
    //Fechar arquivo .txt
    fclose(arquivo02);
}
//fim do metodo02
//------------------------
//inicio do metodo03

/* DUVIDA*/

int Funcao03(FILE* arquivo3)
{
    int menor = 0;
    int maior = 0;
    int aux = 0;
    int segundamenor = 0;
    int x = 0;
    int cont = 0;
    //abrir arquivo
    fscanf(arquivo3, "%d", &x);
    while (!feof(arquivo3))
    {
        fscanf(arquivo3, "%d", &x);
        cont++;
    }
    int array[cont];
    fclose(arquivo3);

    FILE *arq3=fopen("DADOS3.txt", "rt");

    for (int i = 0; i < cont; i++)
    {
        fscanf(arquivo3, "%d", &array[i]);
        printf("%d ", array[i]);
    }

    menor = array[0];
    maior = array[0];
    for (int y = 1; y < cont; y++)
    {
        if (menor > array[y])
        {
            menor = array[y];
        }
        else if (maior < array[y])
        {
            maior = array[y];
        }
    }

    segundamenor = array[0];
    for (int j = 1; j < cont; j++)
    {
        if (segundamenor > array[j] && array[j] != menor)
        {
            segundamenor = array[j];
        }
    }
    printf("\nMenor: %d\n", menor);
    return (segundamenor);
    fclose(arq3);
}

void Metodo03()
{
    FILE *arquivo3 = fopen("DADOS3.txt", "rt");
    //chamar a funcao
    printf("\nSegundo menor: %d\n", Funcao03(arquivo3));
}
//fim do metodo03
//------------------------
//inicio do metodo04

void Metodo04()
{
    //Declarar variaveis iniciais
    int t1 = 0, t2 = 0;
    int x;
    //abrir arquivos .txt
    FILE *arquivo = fopen("DADOS4.txt", "rt");
    FILE *arquivo2 = fopen("DADOS42.txt", "rt");
    //encontrar tamanho dos arquivos
    
    fscanf(arquivo, "%d", &x);
    while (!feof(arquivo))
    {
        fscanf(arquivo, "%d", &x);
        t1=t1+1;
    }
    fclose(arquivo);


    fscanf(arquivo2, "%d", &x);
    while (!feof(arquivo2))
    {
        fscanf(arquivo2, "%d", &x);
        t2=t2+1;
    }
    fclose(arquivo2);

    FILE *arq1=fopen("DADOS4.txt", "rt");
    FILE *arq2=fopen("DADOS42.txt", "rt");
    FILE *resp=fopen("FILTRADOS.txt", "wt");
    int array1[t1];
    int array2[t2];
    for (int i = 0; i < t1; i++)
    {
        fscanf(arq1, "%d", &array1[i]);
        printf("%d ", array1[i]);
    }
    printf("\n");
    for (int y = 0; y < t2; y++)
    {
        fscanf(arq2, "%d", &array2[y]);
        printf("%d ", array2[y]);
    }

    printf("\n");
    for (int z = 0; z < t1; z++)
    {
        for (int j = 0; j < t2; j++)
        {
            if (array1[z] == array2[j])
            {
                printf("%d ", array1[z]);
                fprintf(resp, "%d ", array1[z]);
            }
        }
    }
    fclose(arq1);
    fclose(arq2);
    fclose(resp);
    system("pause");
    
    
}
//fim do metodo04
//------------------------
//inicio do metodo 05

void Metodo05()
{
//declarar variaveis
    int x = 0;
    int result = 0;
    double potencia = 0.0;
//definir valores
    printf("Quantos valores deseja ler: ");
    scanf("%d", &x);
    int array[x];
    for(int i = 0; i < x; i++){
        do
        {
            printf("Digite os valores desejados:");
            scanf("%d", &array[i]);
        } while (array[i] < 0 || array[i] > 1);
    }
    int aux = x-1;
    for(int i = 0; i < x; i++)
    {
        potencia = pow(2, aux);
        result = result + array[i] * potencia;
        aux--;
    }
    printf("O resultado na forma decimal e: %d", result);
    
}
//fim do metodo05
//------------------------
//inicio do metodo06

void Metodo06()
{
    int n = 0;
    int matrix[n][n];

    printf("Digite o valor da matriz quadrada: ");
    scanf("%d", &n);
    int cont = 0;
    for(int i = 0; i < n; i++)
    {
        printf("\n");
        for(int y = 0; y < n; y++)
        {
            if(i > y && i - y > 1)
            {
                matrix[i][y] = 0;
                printf("%d ", matrix[i][y]);
            }else if(y > i && y - i > 1)
            {
                matrix[i][y] = 0;
                printf("%d ", matrix[i][y]);
            }else
            {
                cont++;
                matrix[i][y] = cont;
                printf("%d ", matrix[i][y]);
            }
        }
    }
    system("pause");
}
//fim do metodo06
//------------------------
//inicio do metodo07

void Metodo07()
{
    int n = 0;
    int matrix[n][n];

    printf("Digite o valor da matriz quadrada: ");
    scanf("%d", &n);
    int cont = 11;
    for(int i = 0; i < n; i++)
    {
        printf("\n");
        for(int y = 0; y < n; y++)
        {
            if(i > y && i - y > 1)
            {
                matrix[i][y] = 0;
                printf("%d ", matrix[i][y]);
            }else if(y > i && y - i > 1)
            {
                matrix[i][y] = 0;
                printf("%d ", matrix[i][y]);
            }else
            {
                cont--;
                matrix[i][y] = cont;
                printf("%d ", matrix[i][y]);
            }
        }
    }
    system("pause");
}
//fim do metodo07
//------------------------
//inicio do metodo08

void Metodo08()
{
    int n = 0;
    int result = 0;
    int matrix[n][n];

    printf("Digite o valor da matriz quadrada: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        printf("\n");
        for(int y = 0; y < n; y++)
        {
            result = pow(i+1,y);
            matrix[i][y] = result;
            printf("%d ", matrix[i][y]);
        }
    }
    system("pause");
}
//fim do metodo08
//------------------------
//inicio do metodo 09

void Metodo09()
{
}
//fim do metodo09
//------------------------
//inicio do metodo 10

void Metodo10()
{
}
//fim do metodo 10
//------------------------
//Main
int main()
{
    int x = 0;

    printf("Recuperação - 03 - Programa - v0.0\n\n");
    printf("Autor: Marcio Emanuel\n");
    printf("Metricula: 686391\n\n");

    do
    {
        printf("\nMetodo00 - 0\n");
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