#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//funcao
int teste (char Palavra[]){
    int Quantidade= strlen(Palavra);
    int cont=0;
    int x= Quantidade;

    for(x=Quantidade-1;x>=0;x--){
        if(Palavra[x]>='A' && Palavra[x]<='Z'){
        cont++;}
}
return ( cont );
}

int main()
{
//identificacao
    printf("Exercicios ED4 - ED0413 - v0.0. - 05 / 09 / 2019");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
    char Palavra[40];
    int cont=0;
//entrada de dados
    printf("Digite uma palavra:");
    scanf("%s", Palavra);
    cont = teste(Palavra);
//saida de dados
    printf("A palavra possui %d letras maiusculas\n", cont);
 //encerramentos
    system("pause");
return 0;
}