#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Separador1(char Palavra[40])
{
 int Quantidade = strlen(Palavra);
 int x = 0;
 int y = 0;

    printf("Letras MAIUSCULAS:\n");
    for(x>=0;x<=Quantidade;x++)
    {
        if(Palavra[x]>='A' && 'Z'>=Palavra[x])
        {
            printf("%c\t Eh letra MAIUSCULA\n", Palavra[x]);
        }
    }
    printf("\n");
    printf("Letras minusculas:\n");
    for(y>=0;y<=Quantidade;y++)
    {
        if(Palavra[y]>='a' && 'z'>=Palavra[y])
        {
            printf("%c\t Eh letra minuscula.\n", Palavra[y]);
        }
    }
return 0;
}

void Matodo06()
{
//introducao
    printf("METODO-06");
    printf("Exercicios ED4 - ED0416 - v0.0. - 07 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    char Palavra[40];
    int Quantidade = strlen(Palavra);

    printf("Digite uma palavra: ");
    scanf("%s", Palavra);
//chamar a funcao
    Separador1(Palavra);
//encerramneto
    system("pause");
return 0;
}
