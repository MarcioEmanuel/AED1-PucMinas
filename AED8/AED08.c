#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

//inicio do metodo00
void Metodo00()
{

}
//Fim do Metodo00
//------------------------
//inicio do metodo01

void Metodo01()
{
//Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 8 - Exemplo 1
    */
   printf("Metodo 1\n");
//Declarar Variaveis
    
    int x = 0;
    int i = 0;
//entrada de dados
    do{
    printf("Digite a quantidade de numeros na Array: ");
    scanf("%d", &x);
    } while(x<0);
    int array[x];
    for(i=0; i<x;i++)
    {
        do
        {
        printf("Digite o %d valor para a Array: ", i+1);
        scanf("%d", &array[i]);
        } while(array[i]<=0);
    }

    printf("\nOs tamanhos de cada elemento da Array\n");

    for(i=0; i<x; i++)
    {
        printf("O tamanho do elemento %d da Array e de: %d Byte(s)\n", i+1, sizeof(array[i]));
    }
    
printf("O tamanho da Array e de: %d Byte(s)\n", sizeof(array));

getchar();

}
//fim do metodo01
//------------------------
//inicio do metodo02

void Metodo02()
{
//Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 8 - Exemplo 2
    */
   printf("Metodo 2\n");
int x = 0;
int i = 0;
//abrir arquivo
FILE* File1=fopen("Metodo2.txt", "wt");
//entrada de dados
do{
printf("Digite quantos valores deseja ler do arquivo: ");
scanf("%d", &x);
} while(x<0);
int array[x];
//estrutura de repeticao
    for(i=0;i<x;i++)
    {
        do
        {
            printf("Digite o %d valor da Array: ", i+1);
            scanf("%d", &array[i]);
        } while (array[i]<0 || array[i]%2!=0);        
    }
    fprintf(File1, "O tamanho da Array e de: %d Byte(s)\n", sizeof(array));
    fprintf(File1, "\nElementos da Array\n\n");
    for(i=0;i<x;i++)
    {
    fprintf(File1, "Elemento %d: %d\n",i+1 , array[i]);
    }
    fclose(File1);
getchar();

}
//fim do metodo02
//------------------------
//inicio do metodo03

void Funcao1(int V1, int V2)
{
    int x = 0;
    int i = 0;
    int y = V2-V1;
    //int Valores = 0;
    printf("Digite quantos valores aleatorios deseja gerar: ");
    scanf("%d", &x);
    FILE* File3=fopen("DADOS3.txt","wt");
    fprintf(File3, "Vao ser gerados %d valores aleatorios no intervalo de %d - %d.\n", x, V1, V2);
    int array[x];
    for(i=0; i<x; i++)
    {
        printf("%d\n",array[i] = V1 + (rand() % y));
    }
    for(i=0; i<x; i++)
    {
    fprintf(File3, "%d\n", array[i]);
    }
    fclose(File3);
    getchar();
}

void Metodo03()
{
//Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 8 - Exemplo 3
    */
printf("Metodo 3\n");
//declarar variaveis
int V1 = 0;
int V2 = 0;
//entrada de dados
    printf("Digite o primeiro valor do intevalo: ");
    scanf("%d", &V1);
    printf("Digite o ultimo valor do intervalo: ");
    scanf("%d", &V2);
//chamar a funcao
    Funcao1(V1, V2);

}
//fim do metodo03
//------------------------
//inicio do metodo04

void Funcao4(int x)
{
    int i = 0;
    int Array[x];
    for(i=0; i<x; i++)
    {
        printf("Digite o %d valor da Array: ", i+1);
        scanf("%d", &Array[i]);
    }
    int ArrayMaior = Array[0];
    for(i=0; i<x; i++)
    {
        if(ArrayMaior<Array[i])
        {
            ArrayMaior=Array[i];
        }
    }
    printf("O maior valor da Array e: %d", ArrayMaior);
    FILE* File4=fopen("Metodo4.txt","wt");
    fprintf(File4, "O maior valor da Array e: %d", ArrayMaior);
    getchar();
}

void Metodo04()
{
    //Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 8 - Exemplo 4
    */

printf("Metodo 4\n");
//declarar variaveis
    int x = 0;
//entrada de dados
    printf("Digite quantos valores tera na Array: ");
    scanf("%d", &x);
//chyamar a funcao
    Funcao4(x);
}
//fim do metodo04
//------------------------
//inicio do metodo 05

void Funcao5(int x)
{
    int i = 0;
    int Array[x];
    for(i=0; i<x; i++)
    {
        printf("Digite o %d valor da Array: ", i+1);
        scanf("%d", &Array[i]);
    }
    int ArrayMenor = Array[0];
    for(i=0; i<x; i++)
    {
        if(ArrayMenor>Array[i])
        {
            ArrayMenor=Array[i];
        }
    }
    printf("O menor valor da Array e: %d", ArrayMenor);
    FILE* File5=fopen("Metodo5.txt","wt");
    fprintf(File5, "O menor valor da Array e: %d", ArrayMenor);
    getchar();
}

void Metodo05()
{
    //Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 8 - Exemplo 5
    */
printf("Metodo 5\n");
//declarar variaveis
    int x = 0;
//entrada de dados
    printf("Digite quantos valores tera na Array: ");
    scanf("%d", &x);
//chyamar a funcao
    Funcao5(x);
}
//fim do metodo05
//------------------------
//inicio do metodo06

void Metodo06()
{
//Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 8 - Exemplo 6
    */
   printf("Metodo 6\n");
    FILE* arquivo61=fopen("ED6Menores.txt", "wt");
    FILE* arquivo62=fopen("ED6Maiores.txt", "wt");

    int x = 0;
    do
    {
        printf("Digite o valor da array: ");
        scanf("%d", &x);
    } while (x < 0);
    int array[x];
    double media=0;
    int i = 0;
    for(i=0; i<x; i++)
    {
        printf("Digite o %d valor da array: ", i+1);
        scanf("%d", &array[i]);
    }
    for (i=0; i<x;i++)
    {
       media = media + array[i]; 
    }
    media = media / x;
    printf("MEDIA: %lf", media);
    for(i=0;i<x;i++)
    {
        if(array[i] < media)
        {
            printf("\nE menor que a media: %d\n", array[i]);
            fprintf(arquivo61, "%d ", array[i]);
        }else if(array[i] > media)
        {
            printf("\nE MAIOR que a media: %d\n", array[i]);
            fprintf(arquivo62, "%d ", array[i]);
        }else
        {
            printf("\nE igual a media: %d\n", array[i]);
        }
    }
    fclose(arquivo61);
    fclose(arquivo62);
    system("pause");
}
//fim do metodo06
//------------------------
//inicio do metodo07

void Funcao7(int x, int* array)
{
int i = 0;
int valor = array[0];
int cont = 0;
int cont2 = 0;
    for(i=1; i<x; i++)
    {
        if(array[i] > valor)
        {
            cont++;
            valor = array[i];
        } else if(array[i] < valor)
        {
            cont2++;
            valor = array[i];
        }
    }
    if(cont == x-1)
    {
        printf("\nOs valores estao em ordem crescente\n");
    } else if(cont2 == x-1)
    {
        printf("\nOs valores estao em ordem decrescente\n");
    } else
    {
        printf("\nOs valores nao estao em ordem\n");
    }
    system("pause");
}

void Metodo07()
{
    //Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 8 - Exemplo 7
    */
   printf("Metodo 7\n");
int x = 0;
int i = 0;
    do
    {
        printf("Digite o valor da array: ");
        scanf("%d", &x);
    } while (x < 0);
    int array[x];
    for(i=0; i<x; i++)
    {
        printf("Digite o %d valor da array: ", i+1);
        scanf("%d", &array[i]);
    }
//chamar a funcao
    Funcao7(x, array);

}
//fim do metodo07
//------------------------
//inicio do metodo08

void Metodo08()
{
    //Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 8 - Exemplo 8
    */
   printf("Metodo 8\n");
int x = 0;
int i = 0;
int y = 0;
int cont = 0;
    do
    {
        printf("Digite o valor da array: ");
        scanf("%d", &x);
    } while (x < 0);
    int array[x];
    
    for(i=0; i<x; i++)
    {
        printf("Digite o %d valor da array: ", i+1);
        scanf("%d", &array[i]);
    }
        do
    {
        printf("Digite em qual posicao deseja iniciar a procura: ");
        scanf("%d", &i);
    } while (i<0 || i>x);
        
        printf("Digite um valor que deseja procurar na array: ");
        scanf("%d", &y);

        
    for(i=i;i<x;i++)
    {
        if(array[i] == y)
        {
            printf("O valor %d, esta na array.\n", y);
            cont++;
            break;
        }
    }
    if(cont == 0)
        {
            printf("O valor procurado nao existe na array.\n");
        }
    system("pause");
}
//fim do metodo08
//------------------------
//inicio do metodo 09

void Metodo09()
{
    //Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 8 - Exemplo 9
    */
   printf("Metodo 9\n");
int x = 0;
int i = 0;
int y = 0;
int cont = 0;
    do
    {
        printf("Digite o valor da array: ");
        scanf("%d", &x);
    } while (x < 0);
    int array[x];
    
    for(i=0; i<x; i++)
    {
        printf("Digite o %d valor da array: ", i+1);
        scanf("%d", &array[i]);
    }
        do
    {
        printf("Digite em qual posicao deseja iniciar a procura: ");
        scanf("%d", &i);
    } while (i<0 || i>x);
        
        printf("Digite um valor que deseja procurar na array: ");
        scanf("%d", &y);

        
    for(i=i;i<x;i++)
    {
        if(array[i] == y)
        {
            printf("O valor %d, esta na posicao %d da array.\n", y, i);
            cont++;
            break;
        }
    }
    if(cont == 0)
        {
            printf("O valor procurado nao existe na array.\n");
        }
    system("pause");
}
//fim do metodo09
//------------------------
//inicio do metodo 10

void Metodo10()
{
    //Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 8 - Exemplo 10
    */
   printf("Metodo 10\n");
int x = 0;
int i = 0;
int y = 0;
int cont = 0;
    do
    {
        printf("Digite o valor da array: ");
        scanf("%d", &x);
    } while (x < 0);
    int array[x];
    
    for(i=0; i<x; i++)
    {
        printf("Digite o %d valor da array: ", i+1);
        scanf("%d", &array[i]);
    }
        do
    {
        printf("Digite em qual posicao deseja iniciar a procura: ");
        scanf("%d", &i);
    } while (i<0 || i>x);
        
        printf("Digite um valor que deseja procurar na array: ");
        scanf("%d", &y);

        
    for(i=i;i<x;i++)
    {
        if(array[i] == y)
        {
            cont = cont+1;
        }
    }
    if(cont == 0)
        {
            printf("O valor procurado nao existe na array.\n");
        }else
        {
            printf("O valor %d, aparece %d vezes na array.\n", y, cont);
        }
    system("pause");
}
//fim do metodo 10
//------------------------
//Main
int main()
{
    int x;
    printf ("ED05 - Programa - v0.0\n\n");
    printf("Matrucula: 686391\n");
    printf("AED - 8 - Exemplo 1\n\n");

        do{
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
            }while(x!=0);
//encerramento
return 0;
}