#include <stdio.h>

int main(int argc, char* argv[])
{
    //introdução
    printf("\nExercicio0213 - Programa = v0.0");
    printf("\nAutor: Marcio Emanuel Batista de Padua");
    printf("\n");
    //entrada de dados
    int X;
    printf("\n Digite um valor: ");
    scanf("%d", &X);
    //estrutura de testes
    if(20<=X & X<=60)
    {
        printf("\n O valor %d esta contido no intervalo (20:60)", X);
    } else {
        printf("\n O valor %d nao esta contido no intervalo (20:60)", X);
    }
    //encerramento
    printf("\nPressione ENTER para sair.");
    fflush(stdin);
    getchar();

    return 0;
}
