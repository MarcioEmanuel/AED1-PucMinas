#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int TesteMaiusculo(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int x=0;
    int y=0;
    int contMaiuscula=0;

    for(x>=0;x<=Quantidade;x++)
    {
        if(Palavra[x]>='A' && Palavra[x] <= 'Z')
        {
            contMaiuscula++;
        }
    }
 return (contMaiuscula);
}

int TesteMinusculo(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int x=0;
    int contMinusculo=0;

    for(x>=0;x<=Quantidade;x++)
    {
        if(Palavra[x]>='a' && Palavra[x] <= 'z')
        {
            contMinusculo++;
        }
    }
 return (contMinusculo);
}

void Metodo05()
{
//introducao
    printf("METODO-05");
    printf("Exercicios ED4 - ED0415 - v0.0. - 06 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    char Palavra[40];
    int Quantidade = strlen(Palavra);
    int X;
    int Y;
    printf("Digite uma palavra ou frase: ");
    scanf("%s", Palavra);
//chamar a funcao
X=TesteMaiusculo(Palavra);
Y=TesteMinusculo(Palavra);
//retorno da funcao
    printf("A frase possui %d letras maiusculas!\n", X);
    printf("A frase possui %d letras minusculas!\n", Y);
//encerramento
system("pause");
}