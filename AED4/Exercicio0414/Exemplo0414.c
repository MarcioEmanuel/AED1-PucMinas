#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int funcao(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int x = 0;
    int y = 0;

    printf("As letras maiusculas sao:\n");
    for(x>=0;x<=Quantidade;x++){
        if(Palavra[x]>='A' && 'Z'>= Palavra[x]){
            printf("%c, \tEh letra maiuscula\n", Palavra[x]);
        }
    }
    printf("As letras minusculas sao:\n");
    for (y>=0;y<=Quantidade;y++){
        if(Palavra[y]>='a' && 'z'>= Palavra[y]){
            printf("%c \tEh letra minuscula\n", Palavra[y]);
        }
    }
return 0;
}

void Metodo04()
{
    printf("METODO-04");
    printf("Exercicios ED4 - ED0414 - v0.0. - 06 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
    char Palavra[40];
    int Quantidade = strlen(Palavra);
    char Letras;
    printf("Digite uma palavra: ");
    scanf("%s", Palavra);
//Chamar a funcao
funcao (Palavra);
//encerramento
system ("pause");
}