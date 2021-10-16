#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

//inicio do metodo00
void Metodo00()
{

}
//Fim do Metodo00
//------------------------
//inicio do metodo01

void Metodo01()
{
    printf("\tEXEMPLO 1\n");
//Apresentação

    /*Marcio Emanuel Batista de Padua
     * Matrucula: 686391
     * Turno: Tarde
     * AED - Recuperacao 1 Exemplo 1
    * */

//Declarar Variaveis
    int x=0;
    int n=0;
    int i=0;
    int y=0;

    printf("Digite quantos numeros deseja testar: ");
    scanf("%d", &x);

    int Numero[x];

    for(i=0;i<x;i++)
        {
            printf("Digite um numero para testar: ");
            scanf("%d", &Numero[i]);
        }
    for(y=0;y<x;y++)
        {
            if(Numero[y]==0)
                {
                    printf("O valor %d e igual a Zero.\n", Numero[y]);
                }else if(Numero[y]>0)
                {
                    if(Numero[y]%2==0)
                        {
                            printf("O valor %d eh positivo e par.\n", Numero[y]);
                        }else
                        {
                            printf("O valor %d eh positivo e impar.\n", Numero[y]);
                        }
                }else if(Numero[y]<0)
                {
                    if(Numero[y]%2==0)
                        {
                            printf("O valor %d eh negativo e par.\n", Numero[y]);
                        }else
                        {
                            printf("O valor %d eh negativo e impar.\n", Numero[y]);
                        }
                }

        }
}
//fim do metodo01
//------------------------
//inicio do metodo02

void Metodo02()
{
        printf("\tEXEMPLO 2\n");
//Apresentação

/*Marcio Emanuel Batista de Padua
 * Matrucula: 686391
 * Turno: Tarde
 * AED - Recuperacao 1 Exemplo 2
 * */

//Declarar Variaveis
    int x=0;
    int y=0;
    int i=0;

    printf("Digite quantas veses deseja testar: ");
    scanf("%d", &x);
    int Numeros[x];


    for(i=0;i<x;i++)
        {
            printf("Digite um numero para testar: ");
            scanf("%d", &Numeros[i]);
        }

    int maior = Numeros[0];
    for(y=0; y<x; y++)
    {
        if(maior<Numeros[y])
        {
            maior=Numeros[y];
        }
    }

    for(y=0; y<x; y++)
    {
        if (Numeros[y]==0)
        {
            printf("O valor %d eh igual a Zero\n", Numeros[y]);
        }else if(Numeros[y]>0)
        {
            printf("O valor %d eh positivo. ", Numeros[y]);
            if(Numeros[y]%2==0)
            {
                printf("E par\n", Numeros[y]);
            }else
            {
                printf("E impar\n", Numeros[y]);
            }
        }else if(Numeros[y]<0)
        {
            printf("O valor %d eh negativo.", Numeros[y]);
            if(Numeros[y]%2==0)
            {
                printf("E par\n", Numeros[y]);
            }else
            {
                printf("E impar\n", Numeros[y]);
            }
        }
    }

    printf("O valor %d eh o maior valor digitado!\n\n", maior);
    system("pause");

}
//fim do metodo02
//------------------------
//inicio do metodo03

void FuncaoOperadorLigico(char* Palavra, int i, int Tamanho)
{
    Tamanho = strlen(Palavra);

    for(i=0; i<Tamanho; i++)
    {
        if(Palavra[i]=='&' || Palavra[i]=='||' || Palavra[i]=='!')
        {
            printf("E um Operador Logico.\n");
        }
    }
}

void FuncaoOperadorAritimetico(char* Palavra, int i, int Tamanho)
{
    Tamanho = strlen(Palavra);

    for(i=0; i<Tamanho; i++)
    {
        if(Palavra[i]=='+' || Palavra[i]=='-' || Palavra[i]=='*'|| Palavra[i]=='/' || Palavra[i]=='%')
        {
            printf("(%c) :E um Operador Aritmetico.\n", Palavra[i]);
        }
    }
}

void FuncaoOperadorRelacional(char* Palavra, int i, int Tamanho)
{
    Tamanho = strlen(Palavra);

    for(i=0; i<Tamanho; i++)
    {
        if(Palavra[i]=='<' || Palavra[i]=='>' || Palavra[i]=='=')
        {
            printf("(%c) : E um Operador Relacional.\n", Palavra[i]);
        }
    }
}

void FuncaoSeparadores(char* Palavra, int i, int Tamanho)
{
    Tamanho = strlen(Palavra);

    for(i=0; i<Tamanho; i++)
    {
        if(Palavra[i]==' ' || Palavra[i]==',' || Palavra[i]=='.'|| Palavra[i]==';' || Palavra[i]==':' || Palavra[i]=='_'|| Palavra[i]=='{' || Palavra[i]=='}' || Palavra[i]=='[' || Palavra[i]==']')
        {
            printf("(%c) : E um Separador.\n", Palavra[i]);
        }
    }
}

void Metodo03()
{
//Apresentação

/*Marcio Emanuel Batista de Padua
 * Matrucula: 686391
 * Turno: Tarde
 * AED - Recuperacao 1 Exemplo 2
 * */

//Declarar Variaveis
    char Palavra[30];
//entrada de dados
    fflush(stdin);
    printf("Digite um conjunto de caracteres: ");
    gets (Palavra);
//chamar funcoes
    FuncaoOperadorLigico(Palavra, 0, 0);
    FuncaoOperadorAritimetico(Palavra, 0, 0);
    FuncaoOperadorRelacional(Palavra, 0, 0);
    FuncaoSeparadores(Palavra, 0, 0);
//encerramento
    printf("\nO programa sera fechado!\n");
}
//fim do metodo03
//------------------------
//inicio do metodo04

void FuncaoMaiusculaMinuscula(char* Palavra, int Tamanho, int i)
    {
        Tamanho = strlen(Palavra);

        for(i=0; i<Tamanho; i++)
        {
            if(Palavra[i]>='A' && Palavra[i]<='Z')
            {
                printf("(%c): E uma letra maiuscula\n", Palavra[i]);
            }else if(Palavra[i]>='a' && Palavra[i]<='z')
            {
                printf("(%c): E uma letra minuscula\n", Palavra[i]);
            }
        }
    }

void FuncaoDigitos(char* Palavra, int Tamanho, int i)
    {
        Tamanho = strlen(Palavra);

        for(i=0; i<Tamanho; i++)
        {
            if(Palavra[i]>='0' && Palavra[i]<='9')
            {
                printf("(%c): E um digito.\n", Palavra[i]);
            }
        }
    }

    void FuncaoOperadorLigico1(char* Palavra, int Tamanho, int i)
    {
        Tamanho = strlen(Palavra);

        for(i=0; i<Tamanho; i++)
        {
            if(Palavra[i]=='&' || Palavra[i]=='||' || Palavra[i]=='!')
        {
            printf("(%c): E um Operador Logico.\n", Palavra[i]);
        }
        }
    }

    void FuncaoOperadorAritimetico1(char* Palavra, int Tamanho, int i)
    {
        Tamanho = strlen(Palavra);

        for(i=0; i<Tamanho; i++)
        {
            if(Palavra[i]=='+' || Palavra[i]=='-' || Palavra[i]=='*'|| Palavra[i]=='/' || Palavra[i]=='%')
        {
            printf("(%c) :E um Operador Aritmetico.\n", Palavra[i]);
        }
        }
    }

    void FuncaoOperadorRelacional1(char* Palavra, int Tamanho, int i)
    {
        Tamanho = strlen(Palavra);

        for(i=0; i<Tamanho; i++)
        {
            if(Palavra[i]=='<' || Palavra[i]=='>' || Palavra[i]=='=')
        {
            printf("(%c) : E um Operador Relacional.\n", Palavra[i]);
        }
        }
    }

    void FuncaoSeparadores1(char* Palavra, int Tamanho, int i)
    {
        Tamanho = strlen(Palavra);

        for(i=0; i<Tamanho; i++)
        {
            if(Palavra[i]==' ' || Palavra[i]==',' || Palavra[i]=='.'|| Palavra[i]==';' || Palavra[i]==':' || Palavra[i]=='_'|| Palavra[i]=='{' || Palavra[i]=='}' || Palavra[i]=='[' || Palavra[i]==']')
        {
            printf("(%c) : E um Separador.\n", Palavra[i]);
        }
        }
    }

void Metodo04()
{
/*Marcio Emanuel Batista de Padua
 * Matrucula: 686391
 * Turno: Tarde
 * AED - Recuperacao 1 Exemplo 4
 * */
//declarar variaveis
    char Palavra[50];
//entrada de dados
    fflush(stdin);
    printf("Digite um conjunto de caracteres: ");
    gets (Palavra);
//chamar a funcao
    FuncaoMaiusculaMinuscula(Palavra, 0 , 0);
    FuncaoDigitos(Palavra, 0, 0);
    FuncaoOperadorLigico1(Palavra, 0, 0);
    FuncaoOperadorAritimetico1(Palavra, 0, 0);
    FuncaoOperadorRelacional1(Palavra, 0, 0);
    FuncaoSeparadores1(Palavra, 0, 0);
//encerramento
    printf("\nO programa sera fechado!\n\n");
}
//fim do metodo04
//------------------------
//inicio do metodo 05

void Metodo05()
{
/*Marcio Emanuel Batista de Padua
 * Matrucula: 686391
 * Turno: Tarde
 * AED - Recuperacao 1 Exemplo 5
 * */
//declarar variaveis
    int x = 0;
    int i = 0;
    double media = 0;
    double media2 = 0;
    double media3 = 0;
    double result = 0;
    double result2 = 0;
    double result3 = 0;
    int cont = 0;
    int cont2 = 0;
    int cont3 = 0;
    double menor = 1000;
//entrada de dados
    printf("Digite quantos numeros deseja testar: ");
    scanf("%d", &x);
    int quantidade[x];

    for(i=0;i<x;i++)
        {
            printf("Digite um numero para testar: ");
            scanf("%d", &quantidade[i]);
        }

    for(i=0;i<x;i++)
    {
        if(quantidade[i]<-32.75)
        {
            media = media + quantidade[i];
            cont++;
        }else if(quantidade[i]>=-32.75 && quantidade[i]<=54.25)
        {
            media2 = media2 + quantidade[i];
            cont2++;
        }else if(quantidade[i]>54.25)
        {
            media3 = (media3 + quantidade[i]);
            cont3++;
        }
    }
    result = media/cont;
    result2 = media2/cont2;
    result3 = media3/cont3;

    for(i=0;i<x;i++)
    {
        if(menor>result)
        {
            menor = result;
        }
    }

    printf("\nA Media dos valores menores que -32,75 e = %lf\n\n", result);
    printf("\nA Media dos valores entre -32,75 e 54,25 e = %lf\n\n", result2);
    printf("\nA Media dos valores maiores que 54,25 e = %lf\n\n", result3);

    printf("A menor media e: %lf\n\n", menor);
//encerramento
    printf("O programa sera fechado!\n");
    system("pause");
}
//fim do metodo05
//------------------------
//inicio do metodo06

void Metodo06()
{
/*Marcio Emanuel Batista de Padua
 * Matrucula: 686391
 * Turno: Tarde
 * AED - Recuperacao 1 Exemplo 6
 * */
//declarar variaveis
 int a=0; int b = 0; int x = 0; int y = 0;
 printf("\nDigite um valor inicial do intervalo: ");
 scanf("%d", &a);
 printf("\nDigite um valor final do intervalo: ");
 scanf("%d", &b);
//Estrutura de testes e repeticao
    do
    {
    printf("Digite um valor para serem calculados: ");
    scanf("%d", &x);
        if(x>a && x<b){
        printf("\nO Valor %d PERTENCE ao intervalo aberto [%d - %d]\n", x, a, b);
        y = y + pow(x,3);
        }else
        {
            printf("\nO Valor %d NAO pertence ao intervalo aberto [%d - %d]\n", x, a, b);
        }
    } while (x!=-1);
    printf("\nA soma do cubo dos inversos e de: 1/%d\n", y);
//encerramento
    printf("\nO Programa sera fechado!\n");
    system("pause");

}
//fim do metodo06
//------------------------
//inicio do metodo07

void Metodo07()
{
/*Marcio Emanuel Batista de Padua
* Matrucula: 686391
* Turno: Tarde
* AED - Recuperacao 1 Exemplo 7
* */
//declarar variaveis
double a = 0; double b = 0; double x = 0;
double cont1 = 0; double cont2 = 0; double cont3 = 0; double contTotal = 0;
double porcento1 = 0; double porcento2 = 0; double porcento3 = 0;
//entrada de dados
 printf("\nDigite um valor inicial do intervalo: ");
 scanf("%lf", &a);
 printf("\nDigite um valor final do intervalo: ");
 scanf("%lf", &b);
//estrutura de teste e repeticao

    do
    {
    printf("Digite um valor para serem calculados: ");
    scanf("%lf", &x);
    contTotal++;
        if(x>b){
            printf("\nO Valor %lf esta ACIMA do intervalo aberto [%lf - %lf]\n", x, a, b);
            cont1++;
        }else if(x>a && x<b)
        {
            printf("\nO Valor %lf PERTENCE ao intervalo aberto [%lf - %lf]\n", x, a, b);
            cont2++;
        }else if(x<a)
        {
            printf("\nO Valor %lf esta ABAIXO do intervalo aberto [%lf - %lf]\n", x, a, b);
            cont3++;
        }
    } while (x!=0);
    porcento1= (cont1/contTotal)*100;
    printf("\n%lf POR CENTO dos valores estao ACIMA do intervalo [%lf - %lf]\n\n", porcento1, a, b);
    porcento2= (cont2/contTotal)*100;
    printf("\n%lf POR CENTO dos valores estao DENTRO do intervalo [%lf - %lf]\n\n", porcento2, a, b);
    porcento3= (cont3/contTotal)*100;
    printf("\n%lf POR CENTO dos valores estao ABAIXO do intervalo [%lf - %lf]\n\n", porcento1, a, b);

//encerramento
    printf("\nO Programa sera fechado!\n");
    system("pause");
}
//fim do metodo07
//------------------------
//inicio do metodo08

void Metodo08()
{
/*Marcio Emanuel Batista de Padua
* Matrucula: 686391
* Turno: Tarde
* AED - Recuperacao 1 Exemplo 8
* */
//declarar variaveis
double x = 0; double y = 0; double z = 0;
//estrutura de teste e repeticao
    printf("\nDigite o primeiro numero: ");
    scanf("%lf", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%lf", &y);
    printf("\nDigite o terceiro numero: ");
    scanf("%lf", &z);

    if(x<y)
    {
        if(y<z){
        printf("\nOs valores estao em ordem CRESCENTE.\n");
        }else
        {
            printf("\nOs valores nao estao em NENHUM dessas ordens.\n");
        }
    }else if(x>y)
    {
        if(y>z){
        printf("\nOs valores estao em ordem DECRESCENTE.\n");
        }else
        {
            printf("\nOs valores nao estao em NENHUM dessas ordens.\n");
        }
    }else
    {
        printf("\nOs valores nao estao em NENHUM dessas ordens.\n");
    }
//encerramento
    printf("\nO Programa sera fechado!\n");
    system("pause");
}
//fim do metodo08
//------------------------
//inicio do metodo 09

char FuncaoLogica(char x, char y, char z)
{
    if(x>= 'a' && x<= 'z' && y>='a' && y<='z' && z>='a' && z<='z' || x>='A' && x<='Z' && y>='A' && y<='Z' && z>='A' && z<='Z'){
    if(x<y)
    {
        if(y<z){
        printf("\nOs valores estao em ordem CRESCENTE.\n");
        }else
        {
            printf("\nOs valores nao estao em NENHUMA dessas ordens.\n");
        }
    }else if(x>y)
    {
        if(y>z){
        printf("\nOs valores estao em ordem DECRESCENTE.\n");
        }else
        {
            printf("\nOs valores nao estao em NENHUMA dessas ordens.\n");
        }
    }else
    {
        printf("\nOs valores nao estao em NENHUMA dessas ordens.\n");
    }
    }else
    {
        printf("Caracteres invalidos!\n");
    }
}

void Metodo09()
{
/*Marcio Emanuel Batista de Padua
* Matrucula: 686391
* Turno: Tarde
* AED - Recuperacao 1 Exemplo 9
* */
//declarar variaveis
    char x;
    char y;
    char z;
//estrutura de teste e repeticao
    getchar();
    printf("\nDigite o primeiro caracter: ");
    scanf("%c", &x);
    getchar();
    printf("\nDigite o segundo caracter: ");
    scanf("%c", &y);
    getchar();
    printf("\nDigite o terceiro caracter: ");
    scanf("%c", &z);
//chamar a funcao
    FuncaoLogica(x, y, z);
//encerramento
    printf("\nO Programa sera fechado!\n");
    system("pause");
}
//fim do metodo09
//------------------------
//inicio do metodo 10

void FuncaoLogica1(char* Palavra1, char* Palavra2, char* Palavra3)
{
    int a = strcmp(Palavra1, Palavra2);
    int b = strcmp(Palavra2, Palavra3);
    int c = strcmp(Palavra1, Palavra3);
    int resultado = 0;
    printf("%i %i %i\n", a, b, c);

    if(a==b && b==c && c==0)
        {
            resultado = 0;
            printf("As palavras sao iguais. O resultado e igual a: %d\n", resultado);
        }else
        {
            if(a!=0 && b!=0 && c!=0)
            {
            printf("As palavras %s, %s, %s sao todas diferentes.\n", Palavra1, Palavra2, Palavra3);
            }else if(a!=0)
            {
            printf("O valor de %s e diferente de %s.\n", Palavra1, Palavra2);
            }else if(c!=0)
            {
            printf("O valor de %s e diferente de %s.\n", Palavra1, Palavra3);
            }else if(b!=0)
            {
            printf("O valor de %s e diferente de %s.\n", Palavra2, Palavra3);
            }
        }
}

void Metodo10()
{
/*Marcio Emanuel Batista de Padua
* Matrucula: 686391
* Turno: Tarde
* AED - Recuperacao 1 Exemplo 10
* */
char Palavra1[50];
char Palavra2[50];
char Palavra3[50];

printf("Digite uma palavra: ");
scanf("%s", Palavra1);
printf("Digite uma palavra: ");
scanf("%s", Palavra2);
printf("Digite uma palavra: ");
scanf("%s", Palavra3);

FuncaoLogica1(Palavra1, Palavra2, Palavra3);
}
//fim do metodo 10
//------------------------
//Main
int main()
{
    int x;
    printf("Exercicio - Recuperacao - 01 - v0.1. - 30 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");

        do{
        printf("Metodo00 - 0 - Fechar\n");
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