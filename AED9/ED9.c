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

int Funcao2(int x, int y, FILE* ED9)
{
    int i = 0;
    int a = 0;
    int matriz[x][y];
    if(x>0 && y>0){
    for(i=0;i<x;i++)
    {
        fflush(stdin);
        for(a=0;a<y;a++)
        {
            fscanf(ED9, "%d", &matriz[i][a]);
        }
        for(int i=0; i<x; i++)
        {
        printf("\n");
        }
        for(int a=0;a<y;a++)
        {
            printf("%d, ", matriz[i][a]);
        }
    }
    }else
    {
        printf("As dimencoes da matriz sao nulas.\n");
    }
    fclose(ED9);
    system("pause");
}

int Funcao1(int x, int y)
{
    int i=0;
    int a=0;
    int contLinha = 0;
    int matriz[x][y];
    if(x>0 && y>0){
    for(i=0; i<x; i++)
    {
        contLinha = contLinha + 1;
        for(a=0; a<y; a++)
        {
            do
            {
            printf("\nLINHA %d: Digite um valor para a posicao %d coluna da matriz:\n", contLinha, a);
            scanf("%d", &matriz[i][a]);
            } while (matriz[i][a]<0);
            
        }
    }
    for(int i=0; i<x; i++)
    {
        printf("\n");
        for(int a=0;a<y;a++)
        {
            printf("%d, ", matriz[i][a]);
        }
    }
    } else
    {
        printf("As dimencoes da matriz sao nulas.\n");
    }
    system("pause");
    return 0;
}

void Metodo01()
{
//Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 9 - Exemplo 1
    */
   printf("Metodo 1\n");
// declarar variaveis
    int x = 0;
    int y = 0;
//entrada de dados
    do
    {
        printf("Digite um valor para as linhas da Matriz: ");
        scanf("%d", &x);
    } while (x<0);
    do
    {
        printf("Digite um valor para as colunas da Matriz: ");
        scanf("%d", &y);
    } while (y<0);
    
    Funcao1(x, y);
    
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
    AED - 9 - Exemplo 2
    */
   printf("Metodo 2\n");
FILE* ED9=fopen("ed9.txt","rt");
    int x = 0;
    int y = 0;
//entrada de dados
    do
    {
        printf("Digite um valor para as linhas da Matriz: ");
        scanf("%d", &x);
    } while (x<0);
    do
    {
        printf("Digite um valor para as colunas da Matriz: ");
        scanf("%d", &y);
    } while (y<0);

    Funcao2(x, y, ED9);
}
//fim do metodo02
//------------------------
//inicio do metodo03

void Metodo03()
{
    //Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 9 - Exemplo 3
    */
   printf("Metodo 3\n");
// declarar variaveis
    int x = 0;
    int y = 0;
    int i = 0;
    int a = 0;
    int cont = 0;
//entrada de dados
    do
    {
        printf("Digite um valor para as linhas da Matriz: ");
        scanf("%d", &x);
    } while (x<0);
    do
    {
        printf("Digite um valor para as colunas da Matriz: ");
        scanf("%d", &y);
    } while (y<0);
    int Matriz[x][y];
    for(i=0;i<x;i++)
    {
        for(a=0;a<y;a++){
        printf("\nLINHA %d: Digite o valor da posicao %d da matriz: ", i+1, a);
        scanf("%d", &Matriz[i][a]);
        }
    }
    if(x!=0 && y!=0)
    {
        if(x==y)
        {
            printf("DIAGONAL PRINCIPAL\n\n");
            for(i=0;i<x;i++)
            {
                printf("\n");
                for(a=0;a<y;a++)
                {
                        if(cont==a){
                        printf("%d ", Matriz[i][a]);
                        }else
                        {
                            printf("- ");
                        }
                }
            cont=cont+1;
            }
        }else
        {
            printf("A Matriz nao e quadrada.\n");
        }
    }else
    {
        printf("As dimencoes da matriz sao nulas.\n");
    }
    printf("\n");
    system("pause");
}
//fim do metodo03
//------------------------
//inicio do metodo04

void Metodo04()
{
    //Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 9 - Exemplo 4
    */
   printf("Metodo 4\n");
// declarar variaveis
    int x = 0;
    int y = 0;
    int i = 0;
    int a = 0;
//entrada de dados
    do
    {
        printf("Digite um valor para as linhas da Matriz: ");
        scanf("%d", &x);
    } while (x<0);
    int cont = x-1;
    do
    {
        printf("Digite um valor para as colunas da Matriz: ");
        scanf("%d", &y);
    } while (y<0);
    int Matriz[x][y];
    for(i=0;i<x;i++)
    {
        for(a=0;a<y;a++){
        printf("\nLINHA %d: Digite o valor da posicao %d da matriz: ", i+1, a);
        scanf("%d", &Matriz[i][a]);
        }
    }
    if(x!=0 && y!=0)
    {
        if(x==y)
        {
            printf("DIAGONAL SECUNDARIA\n\n");
            for(i=0;i<x;i++)
            {
                printf("\n");
                for(a=0;a<y;a++)
                {
                        if(cont==a){
                        printf("%d ", Matriz[i][a]);
                        }else
                        {
                            printf("- ");
                        }
                }
            cont=cont-1;
            }
        }else
        {
            printf("A Matriz nao e quadrada.\n");
        }
    }else
    {
        printf("As dimencoes da matriz sao nulas.\n");
    }
    printf("\n");
    system("pause");
}

//fim do metodo04
//------------------------
//inicio do metodo 05

void Metodo05()
{
    //Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 9 - Exemplo 5
    */
   printf("Metodo 5\n");
// declarar variaveis
    int x = 0;
    int y = 0;
    int i = 0;
    int a = 0;
//entrada de dados
    do
    {
        printf("Digite um valor para as linhas da Matriz: ");
        scanf("%d", &x);
    } while (x<0);
    int cont = 0;
    do
    {
        printf("Digite um valor para as colunas da Matriz: ");
        scanf("%d", &y);
    } while (y<0);
    int Matriz[x][y];
    for(i=0;i<x;i++)
    {
        for(a=0;a<y;a++){
        printf("\nLINHA %d: Digite o valor da posicao %d da matriz: ", i+1, a);
        scanf("%d", &Matriz[i][a]);
        }
    }
    if(x!=0 && y!=0)
    {
        if(x==y)
        {
            printf("VALORES ABAIXO DA DIAGONAL PRINCIPAL\n\n");
            for(i=0;i<x;i++)
            {
                printf("\n");
                for(a=0;a<y;a++)
                {
                        if(cont>=a){
                        printf("%d ", Matriz[i][a]);
                        }else
                        {
                            printf("- ");
                        }
                }
            cont=cont+1;
            }
        }else
        {
            printf("A Matriz nao e quadrada.\n");
        }
    }else
    {
        printf("As dimencoes da matriz sao nulas.\n");
    }
    printf("\n");
    system("pause");
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
    AED - 9 - Exemplo 6
    */
   printf("Metodo 6\n");
// declarar variaveis
    int x = 0;
    int y = 0;
    int i = 0;
    int a = 0;
//entrada de dados
    do
    {
        printf("Digite um valor para as linhas da Matriz: ");
        scanf("%d", &x);
    } while (x<0);
    int cont = 0;
    do
    {
        printf("Digite um valor para as colunas da Matriz: ");
        scanf("%d", &y);
    } while (y<0);
    int Matriz[x][y];
    for(i=0;i<x;i++)
    {
        for(a=0;a<y;a++){
        printf("\nLINHA %d: Digite o valor da posicao %d da matriz: ", i+1, a);
        scanf("%d", &Matriz[i][a]);
        }
    }
    if(x!=0 && y!=0)
    {
        if(x==y)
        {
            printf("VALORES ACIMA DA DIAGONAL PRINCIPAL\n\n");
            for(i=0;i<x;i++)
            {
                printf("\n");
                for(a=0;a<y;a++)
                {
                        if(cont<=a){
                        printf("%d ", Matriz[i][a]);
                        }else
                        {
                            printf("- ");
                        }
                }
            cont=cont+1;
            }
        }else
        {
            printf("A Matriz nao e quadrada.\n");
        }
    }else
    {
        printf("As dimencoes da matriz sao nulas.\n");
    }
    printf("\n");
    system("pause");
}
//fim do metodo06
//------------------------
//inicio do metodo07

void Metodo07()
{
    //Apresentação

    /*Marcio Emanuel Batista de Padua
    Matrucula: 686391
    Turno: Tarde
    AED - 9 - Exemplo 7
    */
   printf("Metodo 7\n");
// declarar variaveis
    int x = 0;
    int y = 0;
    int i = 0;
    int a = 0;
//entrada de dados
    do
    {
        printf("Digite um valor para as linhas da Matriz: ");
        scanf("%d", &x);
    } while (x<0);
    int cont = x-1;
    do
    {
        printf("Digite um valor para as colunas da Matriz: ");
        scanf("%d", &y);
    } while (y<0);
    int Matriz[x][y];
    for(i=0;i<x;i++)
    {
        for(a=0;a<y;a++){
        printf("\nLINHA %d: Digite o valor da posicao %d da matriz: ", i+1, a);
        scanf("%d", &Matriz[i][a]);
        }
    }
    if(x!=0 && y!=0)
    {
        if(x==y)
        {
            printf("VALORES ABAIXO DA DIAGONAL SECUNDARIA\n\n");
            for(i=0;i<x;i++)
            {
                printf("\n");
                for(a=0;a<y;a++)
                {
                        if(cont<=a){
                        printf("%d ", Matriz[i][a]);
                        }else
                        {
                            printf("- ");
                        }
                }
            cont=cont-1;
            }
        }else
        {
            printf("A Matriz nao e quadrada.\n");
        }
    }else
    {
        printf("As dimencoes da matriz sao nulas.\n");
    }
    printf("\n");
    system("pause");
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
    AED - 9 - Exemplo 8
    */
   printf("Metodo 8\n");
// declarar variaveis
    int x = 0;
    int y = 0;
    int i = 0;
    int a = 0;
//entrada de dados
    do
    {
        printf("Digite um valor para as linhas da Matriz: ");
        scanf("%d", &x);
    } while (x<0);
    int cont = x-1;
    do
    {
        printf("Digite um valor para as colunas da Matriz: ");
        scanf("%d", &y);
    } while (y<0);
    int Matriz[x][y];
    for(i=0;i<x;i++)
    {
        for(a=0;a<y;a++){
        printf("\nLINHA %d: Digite o valor da posicao %d da matriz: ", i+1, a);
        scanf("%d", &Matriz[i][a]);
        }
    }
    if(x!=0 && y!=0)
    {
        if(x==y)
        {
            printf("VALORES ACIMA DA DIAGONAL SECUNDARIA\n\n");
            for(i=0;i<x;i++)
            {
                printf("\n");
                for(a=0;a<y;a++)
                {
                        if(cont>=a){
                        printf("%d ", Matriz[i][a]);
                        }else
                        {
                            printf("- ");
                        }
                }
            cont=cont-1;
            }
        }else
        {
            printf("A Matriz nao e quadrada.\n");
        }
    }else
    {
        printf("As dimencoes da matriz sao nulas.\n");
    }
    printf("\n");
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
    AED - 9 - Exemplo 9
    */
   printf("Metodo 9\n");
// declarar variaveis
    int x = 0;
    int y = 0;
    int i = 0;
    int a = 0;
//entrada de dados
    do
    {
        printf("Digite um valor para as linhas da Matriz: ");
        scanf("%d", &x);
    } while (x<0);
    int cont = 0;
    do
    {
        printf("Digite um valor para as colunas da Matriz: ");
        scanf("%d", &y);
    } while (y<0);
    int Matriz[x][y];
    for(i=0;i<x;i++)
    {
        for(a=0;a<y;a++){
        printf("\nLINHA %d: Digite o valor da posicao %d da matriz: ", i+1, a);
        scanf("%d", &Matriz[i][a]);
        }
    }
    if(x!=0 && y!=0)
    {
        if(x==y)
        {
            printf("VALORES ABAIXO DA DIAGONAL PRINCIPAL\n\n");
            for(i=0;i<x;i++)
            {
                printf("\n");
                for(a=0;a<y;a++)
                {
                        if(cont>=a){
                            if(Matriz[i][a]!=0){
                            printf("%d (Nao E Nulo!), ", Matriz[i][a]);
                            }else
                            {
                               printf("%d (E Nulo!), ", Matriz[i][a]);
                            }
                        }else
                        {
                            printf("- ");
                        }
                }
            cont=cont+1;
            }
        }else
        {
            printf("A Matriz nao e quadrada.\n");
        }
    }else
    {
        printf("As dimencoes da matriz sao nulas.\n");
    }
    printf("\n");
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
    AED - 9 - Exemplo 10
    */
   printf("Metodo 10\n");
    int x = 0;
    int y = 0;
    int i = 0;
    int a = 0;
//entrada de dados
    do
    {
        printf("Digite um valor para as linhas da Matriz: ");
        scanf("%d", &x);
    } while (x<0);
    int cont = 0;
    do
    {
        printf("Digite um valor para as colunas da Matriz: ");
        scanf("%d", &y);
    } while (y<0);
    int Matriz[x][y];
    for(i=0;i<x;i++)
    {
        for(a=0;a<y;a++){
        printf("\nLINHA %d: Digite o valor da posicao %d da matriz: ", i+1, a);
        scanf("%d", &Matriz[i][a]);
        }
    }
    if(x!=0 && y!=0)
    {
        if(x==y)
        {
            printf("VALORES ACIMA DA DIAGONAL PRINCIPAL\n\n");
            for(i=0;i<x;i++)
            {
                printf("\n");
                for(a=0;a<y;a++)
                {
                        if(cont<=a){
                            if(Matriz[i][a]!=0){
                            printf("%d (Nao E Nulo!), ", Matriz[i][a]);
                            }else
                            {
                               printf("%d (E Nulo!), ", Matriz[i][a]);
                            }
                        }else
                        {
                            printf("- ");
                        }
                }
            cont=cont+1;
            }
        }else
        {
            printf("A Matriz nao e quadrada.\n");
        }
    }else
    {
        printf("As dimencoes da matriz sao nulas.\n");
    }
    printf("\n");
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
            }while(x!=0);
//encerramento
return 0;
}