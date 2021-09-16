#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//funcao 1
int TesteMaiusculo4(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int x=0;
    int contmai=0;

    for(x>=0;x<=Quantidade;x++){
        if(Palavra[x]>='A'&&'Z'>=Palavra[x])
        contmai++;
    }
return (contmai);
}
//funcao 2
int TesteMinusculo4(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int y=0;
    int contmin=0;

    for(y>=0;y<=Quantidade;y++){
        if(Palavra[y]>='a'&&'z'>=Palavra[y])
        contmin++;
    }
return (contmin);
}
//funcao 3
int Testenum4(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int z=0;
    int contnum=0;

    for(z>=0;z<=Quantidade;z++){
        if(Palavra[z]>='0'&&'9'>=Palavra[z])
        contnum++;
    }
return (contnum);
}
int main()
{
//introducao
    printf("METODO-11");
    printf("Exercicios ED4 - EDE421 - v0.0. - 07 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    char Palavra[40];
    int Quantidade = strlen(Palavra);
    int X, Y, Z, QtdChar;
    fflush(stdin);
    printf("Digite uma palavra: ");
    gets( Palavra);
    printf("A frase e: %s\n", Palavra);
//chamar a funcao
    X=TesteMaiusculo4(Palavra);
    Y=TesteMinusculo4(Palavra);
    Z=Testenum4(Palavra);
//retorno da funcao
    QtdChar= X+Y+Z;
//saida de dados
    printf("O total de caracteres da frase sao %d!\n", QtdChar);

//encerramento
system("pause");
return 0;
}