#include <stdio.h>

int main()
{
    printf("\nExercicio0311 - Programa = v0.0");
    printf("\nAutor: Marcio Emanuel Batista de Padua - AED1 - ed03");
    printf("\n");
    //entrada de dados
    char palavra[10] = "ABC";
    printf("Digite uma palavra:");
    scanf("%s", palavra);
    printf("\n");
    //estrutura de testes

    for (int i = 0; i <= 10; ++i)
    {
         if(palavra[i]>= 'A' && 'Z'>= palavra[i])
         {
              printf("%c \n", palavra[i]); 
         }
    }
    //encerramento
    printf("\nPessione ENTER para sair.");
    fflush(stdin);
    getchar();

    return 0;
}