/*
EXercicios ED4 - ED0411 - v0.0. - 03 / 09 / 2019
Author: Marcio Emanuel Batista de Padua
Matricula: 686391
*/
// dependencias
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    double Valor1, Valor2;
    double Algarismos[30];
    int Quantidade, X=0, Y=0;
    printf("Digite o primeiro valor do intevalo: ");
    scanf("%lf", &Valor1);
    printf("Digite o segundo valor do intevalo: ");
    scanf("%lf", &Valor2);
    printf("Quantos numeros deseja testar: ");
    scanf("%d", &Quantidade);
    for(int i=0;i< Quantidade;i++)
    {
        printf("Digite o %i numero\n", i+1);
        scanf("%lf", &Algarismos[i]);
        system ("cls");
    }
    for(int i=0;i< Quantidade;i++)
    {
            if(Algarismos[i]>= Valor1 && Valor2>= Algarismos[i])
        {
            X++;
            printf("%lf\t pertence ao intervalo %lf ao %lf.\t\n", Algarismos[i], Valor1, Valor2);
        }else
        {
            Y++;
            printf("%lf\t nao pertence ao intervalo %lf ao %lf.\t\n", Algarismos[i], Valor1, Valor2);
        }        
    }
    printf("Foram cadastrados %i numeros dentro do intervalo\n", X);
    printf("Foram cadastrados %i numeros fora do intervalo", Y);
//encerramento
    printf("Pressione ENTER para sair.");
    fflush(stdin);
    getchar();
}