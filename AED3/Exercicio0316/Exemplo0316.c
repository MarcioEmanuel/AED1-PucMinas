#include <stdio.h>
#include <string.h>

int main()
{
//identificacao
    printf("Exercicio0316 - Programa - v0.0");
    printf("\nAutor: Marcio Emanuel Batista de Padua");
    printf("\n");
//entrada de dados
    char palavra[10];
    int quantidade = strlen(palavra);
    int i = quantidade;
    int y = 0;

    printf("Digite algo: ");
    scanf("%s", palavra);
//estrutura de repetição
    while(i<=10)
    {
        if(!(palavra[i]>='a'&&palavra[i]<='z'||palavra[i]>='0'&& palavra[i]<='9'||palavra[i]>='A' && palavra[i]<='Z'))
        {
            y=y+1;
            printf("\n%i\t%c\t%s", y, palavra[i], "Nao eh letra nem digito");
        }
    i++;
    }
//encerramento
    printf("\nPressione ENTER para sair.");
    fflush(stdin);
    getchar();
    return 0;
    }
