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
     Met2(y);
}

void Met2(int numero)
{
    int i;
    int z;
    for(i = 0; i <= numero; i++){
        
        z = i % 2;

        if(z == 0)
            {
            printf("O valor %d e multiplo de 2!\n", i);
            }
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
    printf("Entrar com Metodo 1: ");

    int x=0;
    scanf("%d", &x);
    switch(x){
    case 1:
        Funcao1();
        break;
    default:
        printf("ERRO: Valor nao atribuido!\n");

    system("pause");
    return 0;
    }
}
//fim do metodo01
//------------------------
//inicio do metodo02

void Metodo02()
{
    
}
//fim do metodo02
//------------------------
//inicio do metodo03

void Metodo03()
{
    
}
//fim do metodo03
//------------------------
//inicio do metodo04

void Metodo04()
{

}
//fim do metodo04
//------------------------
//inicio do metodo 05

void Metodo05()
{

}
//fim do metodo05
//------------------------
//inicio do metodo06

void Metodo06()
{
    
}
//fim do metodo06
//------------------------
//inicio do metodo07
void Metodo07()
{
    
}
//fim do metodo07
//------------------------
//inicio do metodo08
void Metodo08()
{

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
//Inicio do metodo 11

void Metodo11()
{

}
//fim do metodo 11
//------------------------
//Inicio do metodo 12

void Metodo12()
{

}
//fim do metodo 12

//Main
int main()
{
    int x=0;
    printf("Metodo00 - Nao faz nada!\n");
    printf("Metodo01 - Mostrar essa quantidade em valores multiplos de 2 em ordem crescente.\n");
    printf("Metodo02 - Conta e mostra a quantidade de letras maiusculas.\n");
    printf("Metodo03 - Contar as letras maiusculas mediante uma funcao.\n");
    printf("Metodo04 - Separa as letras maiusculas mediante uma funcao "
           "que recebera uma cadeia de caracteres como parametro.\n");
    printf("Metodo05 - Conta as letras maiusculas e minusculas mediante uma funcao.\n");
    printf("Metodo06 - Separa as letras (tanto maiusculas, quanto minusculas) mediante uma funcao\n");
    printf("Metodo07 - Conta e mostra apenas os digitos pares em uma cadeia de caracteres.\n");
    printf("Metodo08 - Conta todos os simbolos alfanumericos (letras e digitos) em uma cadeia de caracteres"
           "por meio de uma funcao.\n");
    printf("Metodo09 - Separa todos os simbolos alfanumericos (letras e digitos) em uma cadeia de caracteres"
           "por meio de uma funcao.\n");
    printf("Metodo10 - Contar a quantidade de simbolos alfanumericos (letras e digitos) em cada palavra,"
           "e calcular o total de todas as palavras.\n");
    printf("Metodo11 - contar a quantidade de simbolos alfanumericos (letras e digitos) em cada palavra "
           "e calcular o total de todas as palavras, usando gets()\n");
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
    case 11:
        Metodo11();
    case 12:
        Metodo12();
    default:
        printf("ERRO: Valor invalido!");
    }
//encerramento
return 0;
}