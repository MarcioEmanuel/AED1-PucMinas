#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Metodos
//______________________________
//Inicio do Metodo 0
void Metodo0()
{
    printf("O programa sera fechado!\n");
    system("pause");
}
//_______________________________
//Inicio do Metodo 1

void Metodo1()
{
//identificacao
    printf("Exercicios ED7 - ED0711 - v0.1. - 23 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Abrir o arquivo de texto
    FILE *arquivo = fopen("ED7-1.txt", "w");
//entrada de dados
    int x = 0;
    int i = 0;
    int y = 0;
    int z = 0;
    do
    {
        printf("Digite um valor maior que 5:");
        scanf("%d", &x);
    } while (x<5);

    for (i=5;i<=x+5;i++)
    {
        z=i%2;
        if(z!=0)
        {
            y=i*5;
            //gravar no arquivo
            fprintf(arquivo, "%d ", y);
        }
    }
    fclose(arquivo);
    printf("Os valores testados foram salvos no arquivo de texto (ED7-1.)\n");
    system("pause");
}
//Fim do Metodo 1
//_______________________________
//Inicio do Metodo 2

void Metodo2()
{
//identificacao
    printf("Exercicios ED7 - ED0712 - v0.1. - 23 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//abrir o arquivo de texto
    FILE* arquivo=fopen("ED7-2.txt", "w");
    int x = 0;
    int i = 0;
    int z = 0;
    int y = 0;
    printf("Digite quantos numeror deseja testar: ");
    scanf("%d", &x);
        for(i=0; i<=x; i++)
        {
            if(i<x)
            {
            z = i % 2;
                if(z==0)
                {
                    y = i * 5;
                    //gravar no arquivo
                    fprintf(arquivo, "%d, ", y);
                }
            }
            if(i==x)
            {
            z = i % 2;
                if(z==0)
                {
                    y = i * 5;
                    //gravar no arquivo
                    fprintf(arquivo, "%d. ", y);
                }
            }
        }
    printf("Os valores foram gravados no arquivo ED7-2.txt\n");
    printf("O programa sera fechado!\n");
    fclose(arquivo);
    system("pause");
}
//Fim do Metodo 2
//_______________________________
//Inicio do Metodo 3

void Metodo3()
{
//identificacao
    printf("Exercicios ED6 - ED0713 - v0.1. - 23 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Abrir o arquivo de texto
    FILE* arquivo = fopen("ED7-3.txt", "w");
//entrada de dados
    int x;
    int i;
    int a;
    double z;
    printf("Digite quantos valores deseja testar: ");
    scanf("%d", &x);
//estrutura de repeticao
    for(i=0; i<x; i++)
    {
        z = pow(5, i);
        a = (int)z;
        fprintf(arquivo, "%d ", a);    
    }
    fclose(arquivo);
    printf("Os valores foram gravados no arquivo ED7-3.txt\n");
    printf("O programa sera fechado!\n");
    system("pause");
}
//Fim do Metodo 3
//_______________________________
//Inicio do Metodo 4

void Metodo4()
{
//identificacao
    printf("Exercicios ED7 - ED0714 - v0.1. - 23 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Abrir o arquivo de texto
    FILE* arquivo04 = fopen("ED7-4.txt", "w");
//declarar variaveis
    int x = 0;
    int i = 0;
    int z = 0;
    double y = 0;
//entrada de dados
    do
    {
    printf("Digite quantos valores deseja testar: ");
    scanf("%d", &x);
    }while(x % 5 != 0);
//estrutura de repeticao
    for (i=x;i>=0;i--)
    {
        y = pow (5,i);
        z = y / 5;
        fprintf(arquivo04, "%d ", z);
    }
//encerramento
    fclose(arquivo04);
    printf("O programa sera fechado\n");
    system("pause");
}
//Fim do Metodo 4
//_______________________________
//Inicio do Metodo 5

void Metodo5()
{
//identificacao
    printf("Exercicios ED7 - ED0715 - v0.1. - 26 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Declarar variaveis
    int Valor1 = 0;
    double Valor2 = 0;
    int i = 0;
    double Result = 0;
    int a = 0;
//entrada de dados
    printf("Digite quantas vezes deseja testar: ");
    scanf("%d", &Valor1);
    printf("\n\nDigite o valor que deseja testar: ");
    scanf("%lf", &Valor2);
//abrir arquivo de texto
    FILE* arquivo05 = fopen("ED7-5.txt", "w");
//estrutura de repeticao
    for(i=1;i<=Valor1;i++)
    {
        Result = pow(i,Valor2);
        a = (int)Result;
        printf("%d ", a);
        fprintf(arquivo05, "%d\n", a);
    }
    fclose(arquivo05);
    printf("\n\nOs valores acima foram salvos no arquivo de texto (ED7-5).\n\n");
//encerramento
    printf("O programa sera fechado!");
    system("pause");
}
//Fim do Metodo 5
//_______________________________
//Inicio do Metodo 6

void Metodo6()
{
//identificacao
    printf("Exercicios ED7 - ED0716 - v0.1. - 26 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Declarar variaveis
    int ValorSoma = 0;
    int ValoresLidos = 0;
    int Result = 0;
//Entrada de dados
    printf("Digite o valor que deseja somar: ");
    scanf("%d", &ValorSoma);
//Abrir arquivo de texto
    FILE* arquivo06 = fopen("RESULTADO06.txt", "wt");
    FILE* arquivo05 = fopen("ED7-5.txt", "rt");
//Estrutura de repeticao
    fscanf(arquivo05,"%d", &ValoresLidos);
    while(!feof(arquivo05)){
        fscanf(arquivo05,"%d", &ValoresLidos);
        Result=ValoresLidos+ValorSoma;
        printf("%d + %d = %d\n", ValorSoma, ValoresLidos, Result);
        printf("O valor %d foi salvo em (RESULTADO06)\n", Result);
        fprintf(arquivo06,"%d + %d = %d\n",ValorSoma, ValoresLidos, Result);
    }   
//Fechar arquivo de texto
    fclose(arquivo06);
    fclose(arquivo05);
//Encerramento
    printf("O programa sera fechado!");
    system("pause");
}
//Fim do Metodo 6
//_______________________________
//Inicio do Metodo 7

void Metodo7()
{
//identificacao
    printf("Exercicios ED7 - ED0716 - v0.1. - 26 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//Declarar variaveis
    int x = 0;
    int ValorLido = 0;
    int Result = 0;
//entrada de dados
    printf("Digite um valor que deseja somar: ");
    scanf("%d", &x);
//abrir arquivos de texto
    FILE* arquivo07 = fopen("RESULTADO07.TXT", "wt");
    FILE* arquivo04 = fopen("ED7-4.txt", "rt");
//estrutura de repeticao
    fscanf(arquivo04, "%d", &ValorLido);
    while (!feof(arquivo04))
    {
        fscanf(arquivo04, "%d", &ValorLido);
        Result= x + ValorLido;
        printf("%d+%d = %d\n", x, ValorLido, Result);
        fprintf(arquivo07, "%d+%d = %d\n", x, ValorLido, Result);
        printf("O valor %d foi salvo em (RESULTADO07)\n", Result);
    }
//fechar arquivos de texto
    fclose(arquivo04);
    fclose(arquivo07);
//encerramento
    printf("O programa sera fechado!");
    system("pause");
}
//Fim do Metodo 7
//_______________________________
//Inicio do Metodo 8

void Metodo8()
{
//identificacao
    printf("Exercicios ED7 - ED0716 - v0.1. - 26 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//abrir arquivo de texto
    FILE* arquivo08=fopen("RESULTADO08.TXT", "wt");
//Declarar variaveis
    int x = 0;
    int fib1 = 0;
    int fib2 = 1;
    int y = 0;
    int i = 0;
//entrada de dados
    printf("Digite quantas vezes deseja testar: ");
    scanf("%d", &x);
//estrutura repeticao
    for(i=0; i<=x; i++)
    {
        y=fib1;
        fib1=fib2;
        if(fib2 % 2!=0)
        {
            printf("%d\n", fib2);
            fprintf(arquivo08, "%d\n", fib2);
            printf("O valor %d, foi salvo em (RESULTADO08)\n", fib2);
        }
        fib2+=y;
        
    }
//fechar arquivo
    fclose(arquivo08);
//encerramento
    printf("O programa sera fechado!");
    system("pause");
}
//Fim do Metodo 8
//_______________________________
//Inicio do Metodo 9

void Metodo9()
{
//identificacao
    printf("Exercicios ED7 - ED0716 - v0.1. - 26 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//abrir arquivo de texto
    FILE* arquivo009=fopen("RESULTADO09CARACTERES.txt", "rt");
    FILE* arquivo09=fopen("RESULTADO09.TXT", "wt");
//declarar variaveis
    char Palavra[100];
    int cont = 0;
//estrutura de repeticao
    while(!feof(arquivo009))
    {
        fscanf(arquivo009, "%s", &Palavra);
        for(int i = 0;i<strlen(Palavra); i++)
        {
            if(Palavra[i]>='a' && Palavra[i]<='z')
            {
                printf("%c", Palavra[i]);
                fprintf(arquivo09, "%c", Palavra[i]);
                cont++;
            }
        }
    }
    printf("\nO conjunto de caracteres possuem %d letra(s) minuscula(s).", cont);
    fprintf(arquivo09, "\nO conjunto de caracteres possuem %d letra(s) minuscula(s).", cont);
//encerramento
    printf("O programa sera fechado!\n");
    system("pause");
}
//Fim do Metodo 9
//_______________________________
//Inicio do Metodo 10

void Metodo10()
{
//identificacao
    printf("Exercicios ED7 - ED0716 - v0.1. - 26 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//abrir arquivo de texto
    FILE* arquivo10=fopen("RESULTADO10.TXT", "wt");
//declarar variaveis
    char Palavra[150];
    int cont = 0;
//entrada de dados
    printf("Digite um conjunto de caracteres: ");
    scanf("%s", Palavra);
//estrutura de repeticao
    for(int i = 0;i<strlen(Palavra);i++)
    {
         if(Palavra[i]>='0'&& Palavra[i]<='9')
        {
            printf("%c", Palavra[i]);
            fprintf(arquivo10, "%c", Palavra[i]);
            cont = cont + 1;
        }
     }

    printf("\nA cadeia de caracteres possui %d digito(s).", cont);
    fprintf(arquivo10, "\nA cadeia de caracteres possui %d digito(s).", cont);
//encerramento
    printf("\nO programa sera fechado!\n");
    system("pause");
}
//Fim do Metodo 10
//_______________________________
//Main

int main()
{
//identificacao
    printf("Exercicios ED7 - v0.1. - 23 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//estrutura switch
    int x = 0;
    do
    {
        printf ("ED07 - Programa - v0.0\n\n");
        printf("Metodo-0 - Parar!\n");
        printf("Metodo-1 - Gravar a quantidade em multiplos de 5, impares, em ordem crescente, comecando em 5.\n");
        printf("Metodo-2 - Gravar a quantidade em multiplos de 5, pares, em ordem decrescente encerrando em 5.\n");
        printf("Metodo-3 - Gravar a quantidade em valores da sequencia: 1 5 25 125 625 ...\n");
        printf("Metodo-4 - Gravar a quantidade em valores decrescentes da sequencia: ... 1/625 1/125 1/25 1/5 1.\n");
        printf("Metodo-5 - Gravar a quantidade (n) em valores reais da sequencia: 1 1/x 1/x3 1/x5...\n");
        printf("Metodo-6 - Calcular a soma dessa quantidade dentre os primeiros valores gravados no exercicio anterior.\n");
        printf("Metodo-7 - Calcular a soma dessa quantidade dentre os inversos das potencias de 5 do exercicio 04 acima.\n");
        printf("Metodo-8 - Gravar o valor correspondente aos primeiros termos impares da serie de Fibonacci.\n");
        printf("Metodo-9 - Calcular a quantidade de minusculas em cadeia de caracteres de um arquivo texto.\n");
        printf("Metodo-10 - Gravar em outro arquivo de texto cada cadeia de caracteres e seu resultado.\n");

        printf("\n\nDigite o valor da opcao desejada ou 0 para fechar o programa: ");
        scanf("%d", &x);

        switch(x)
        {
        case 0:
            Metodo0();
            break;
        case 1:
            Metodo1();
            break;
        case 2:
            Metodo2();
            break;
        case 3:
            Metodo3();
            break;
        case 4:
            Metodo4();
            break;
        case 5:
            Metodo5();
            break;
        case 6:
            Metodo6();
            break;
        case 7:
            Metodo7();
            break;
        case 8:
            Metodo8();
            break;
        case 9:
            Metodo9();
            break;
        case 10:
            Metodo10();
            break;
        }

    }while(x!=0);

    return 0;
}