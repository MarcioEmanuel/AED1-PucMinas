#include <stdio.h>
#include <string.h>

int main()
{
//identificacao
    printf("Exercicio0314 - Programa - v0.0");
    printf("\nAutor: Marcio Emanuel Batista de Padua");
    printf("\n");
//entrada de dados
    char palavra[10];
    int quantidade = strlen(palavra);
    int x = quantidade;
    int y = 0;
    int z = 0;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
//estrutura de repeticao
    for(x=0;x<=10;x++)
    {
        if(palavra[x] >= 'A' && 'Z'>= palavra[x])
        {
            y=y+1;
            printf("\n%i, %c\t%s", y, palavra[x], "Eh letra maiuscula\n");
        }
    }
    for(x=0;x<=10;x++)
    {
        if(palavra[x]>= 'a' && 'z'>= palavra[x])
        {
            z=z+1;
            printf("\n%i, %c\t%s", z, palavra[x], "Eh letra minuscula\n");
        }

    }
  //encerramento
    printf("\nPressione ENTER para sair.");
    fflush(stdin);
    getchar();

return 0;
}
