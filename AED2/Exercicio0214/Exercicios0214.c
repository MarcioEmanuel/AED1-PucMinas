#include <stdio.h>

int main (int argc, char* argv[])
{
    //introdução
    printf("\nExercicio0214 - Programa = v0.0");
    printf("\nAutor: Marcio Emanuel Batista de Padua");
    printf("\n");
    //entrada de dados
    int X;
    
    printf("\nDigite um valor: ");
    scanf("%d", &X);
    //estrutura de teste
    if(X>20 & X<60){
        printf("\nO valor %d esta contido no intervalo [20:60]", X);
    }else {
        printf("\nO valor %d nao esta contido no intervalo [20:60]", X);
    }
    //encerramento
    printf("\nPressione ENTER para sair");
    fflush(stdin);
    getchar();
return 0;
}