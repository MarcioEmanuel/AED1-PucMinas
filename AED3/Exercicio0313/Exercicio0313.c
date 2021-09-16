#include <stdio.h>
#include <string.h>
int main()
{
//identificacao
    printf("Exercicio0313 - Programa - v0.0");
    printf("\nAutor: Marcio Emanuel Batista de Padua");
    printf("\n");
//entrada de dados
    char palavra[30];
    int quantidade = strlen(palavra);
    int x = quantidade;
    int y = 0;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("A palavra e: %s", palavra);

//estrutura de repetição
    while(x >= 0){
        if(palavra[x]>='A' && 'Z'>=palavra[x] )
        {
            y=y+1;
            printf("\n%i, %c\t%s", y, palavra[x], "Eh letra maiuscula");
        }
    x--;
    }
  
//encerramento
    printf("\nPressione ENTER para sair.");
    fflush(stdin);
    getchar();

return 0;
}