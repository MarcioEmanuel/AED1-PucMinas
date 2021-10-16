#include <stdio.h>
#include <string.h>

int main()
{
//identificacao
    printf("Exercicio0315 - Programa - v0.0");
    printf("\nAutor: Marcio Emanuel Batista de Padua");
    printf("\n");
//entrada de dados
    char palavra[6];
    int quantidade = strlen(palavra);
    int x = quantidade;
    int y = 0;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
//estrutura de repetição
    for(x=6;x>=0;x--)
    {
        if(palavra[x]>= 'A' && palavra[x]<= 'Z')
        {
            y=y+1;
            printf("\n%i\t%c\t%s", y, palavra[x], "Eh letra Maiuscula");
        }else
        {
            y=y+1;
            printf("\n%i\t%c\t%s", y, palavra[x], "Eh letra minuscula");
        }
    }
//encerramento
    printf("\nPressione ENTER para sair.");
    fflush(stdin);
    getchar();
    return 0; 
    }