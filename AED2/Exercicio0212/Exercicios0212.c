#include <stdio.h>

int main (int argc, char* argv[])
{
    //introdução
    printf("\nExercicio0212 - Programa = v0.0");
    printf("\nAutor: Marcio Emanuel Batista de Padua");
    printf("\n");
    //entrada de dados
    int X, ValorFinal;

    printf("\n Digite um valor: ");
    scanf("%d", &X);
    //operação
    ValorFinal= X%2;
    //estrutura de teste
    if(ValorFinal==0 && X>100)
    {
        printf("\n O numero %d e par e maior que 100", X);
    } else if (ValorFinal!=0 && X>100)
    {
        printf("\n O numero %d e impar e maior que 100", X);
    } else if(ValorFinal==0 && X<-100)
    {
        printf("\n O numero %d e par e menor que -100", X);
    } else if (ValorFinal!=0 && X<-100)
    {
        printf("\n O numero %d e impar e menor que -100", X);
    } else

    //encerramento
    printf("\n Pressione ENTER para sair.");
    fflush(stdin);
    getchar();

    return 0;
}