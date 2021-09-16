#include <stdio.h>

int main()
{
//apresentação
    printf("Exercicio0312 - Programa - v0.0");
    printf("Autor: Marcio Emanuel Batista de Padua");
    printf("\n");
//entrada de dados
    char palavra[10] = "ABC";
    int X = 0;

    printf("\nEscreva uma palavra:");
    scanf("%s", palavra);
//estrutura de testes
    for(int i = 0 ; i<=10 ; ++i)
    {
       if(palavra[i] >= 'A' && 'Z'>= palavra[i])
       {
           X = X+1;
           printf("%d-%c \n", X, palavra[i] );
       }
    }
//encerramento
    printf("\nPressione ENTER para sair");
    fflush(stdin);
    getchar();
return 0;
}