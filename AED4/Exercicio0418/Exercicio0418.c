#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Funcao 1
int TesteMaiusculo2(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int x=0;
    int y=0;
    int z=0;
    int contMaiuscula=0;
    int contminuscula=0;
    int contnum=0;

    for(x>=0;x<=Quantidade;x++)
    {
        if(Palavra[x]>='A' && Palavra[x] <= 'Z')
        {
            contMaiuscula++;
        }
    }
return (contMaiuscula);
}
//Funcao 2
int Testeminusculo2(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int y=0;
    int contminuscula=0;

    for(y>=0;y<=Quantidade;y++)
    {
        if(Palavra[y]>='a' && Palavra[y]<='z')
        {
            contminuscula++;
        }
    }
    return (contminuscula);
}
//Funcao 3
int Testenum2(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int z=0;
    int contnum=0;

    for(z>=0;z<=Quantidade;z++)
    {
        if(Palavra[z]>='0' && Palavra[z]<='9')
        {
            contnum++;
        }
    }
return (contnum);
}    
int main()
{
//introducao
    printf("METODO-08");
    printf("Exercicios ED4 - ED0418 - v0.0. - 07 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    char Palavra[40];
    //int Quantidade = strlen(Palavra);
    int X;
    int Y;
    int Z;
    printf("Digite uma palavra ou frase: ");
    scanf("%s", Palavra);
//chamar a funcao
X=TesteMaiusculo2(Palavra);
Y=Testeminusculo2(Palavra);
Z=Testenum2(Palavra);
//Y=TesteMinusculo(Palavra);
//retorno da funcao
    printf("A frase possui %d letras maiusculas!\n", X);
    printf("A frase possui %d letras minusculas!\n", Y);
    printf("A frase possui %d numeros!\n", Z);
//encerramento
system("pause");

return 0;
}