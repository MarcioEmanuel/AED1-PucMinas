#include <stdio.h>

int main(int argc, char* argv[])
{
    //introdução
    printf("\n Exercicio0215 - Programa = v0.0");
    printf("\n Autor: Marcio Emanuel Batista de Padua");
    printf("\n");
    //entrada de dados
    int X;

    printf("\n Digire um valor:");
    scanf("%d", &X);
    //estrutura de teste
    if (X>25 & X<33){
        printf("\n O valor %d pertence ao intervalo [24:45].", X);
    } else if (X>33 & X<45) {
    printf("\n O valor %d pertence aos intervalos [25:45] e [33:99].", X);
    } else if (X>45 & X<99){
    printf("\n O valor %d pertence ao intervalo [33:99].", X);
    } else {
    printf("\n O valor %d nao pertence a nenhum desses intervalos.", X);
    }
    //encerramento
    printf("\n Pressione ENTER para sair.");
    fflush(stdin);
    getchar();
}