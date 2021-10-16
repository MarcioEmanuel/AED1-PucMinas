#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//funcao 1
int TesteMaiusculo3(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int x=0;

    for(x>=0;x<=Quantidade;x++){
        if(Palavra[x]>='A'&&'Z'>=Palavra[x])
        printf("O digito %c Eh uma letra Maiuscula!\n", Palavra[x]);
    }
return 0;
}
//funcao 2
int TesteMinusculo3(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int y=0;

    for(y>=0;y<=Quantidade;y++){
        if(Palavra[y]>='a'&&'z'>=Palavra[y])
        printf("O digito %c Eh uma letra Minuscula!\n", Palavra[y]);
    }
return 0;
}
//funcao 3
int Testenum3(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int z=0;

    for(z>=0;z<=Quantidade;z++){
        if(Palavra[z]>='0'&&'9'>=Palavra[z])
        printf("O digito %c Eh um numero!\n", Palavra[z]);
    }
return 0;
}
void Metodo09()
{
//introducao
    printf("METODO-09");
    printf("Exercicios ED4 - ED0419 - v0.0. - 07 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    int Palavra[40];
    int X, Y, Z;
    printf("Digite uma palavra: ");
    scanf("%s", Palavra);
//chamar a funcao
    X=TesteMaiusculo3(Palavra);
    Y=TesteMinusculo3(Palavra);
    Z=Testenum3(Palavra);

//encerramento
system("pause");

}