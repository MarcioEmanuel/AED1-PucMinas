/*
EXercicios ED4 - ED0412 - v0.0. - 04 / 09 / 2019
Author: Marcio Emanuel Batista de Padua
Matricula: 686391
*/
// dependencias
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int TesteMaiusculo (char Palavra[40])
{
 int i=0;
 int X=0;
 int Quantidade = strlen(Palavra);
 while (i <= Quantidade)
 {
    if(Palavra[i]>= 'A' && 'Z' >= Palavra[i])
    {
        X++;
        printf("%c\t Eh letra maiuscula!\n", Palavra[i]);
    }
 i++;
 }
 
 return (X);
}

int main()
{
char Palavra[40];
int Quantidade = strlen(Palavra);
//int X=0;
printf("Digite uma palavra para ser testada: ");
scanf("%s", Palavra);

//TesteMaiusculo(Palavra);
printf("A palavra possui %d letras maiuscula(s).\n", TesteMaiusculo(Palavra));

//encerramento
system ("pause");
return 0;
}

