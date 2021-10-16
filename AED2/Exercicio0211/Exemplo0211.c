#include <stdio.h>

int main (int argc, char* argv[])
{
    //introdução
    printf("\n Exercicio0211 - Programa = v0.0");
    printf("\n Autor: Marcio Emanuel Batista de Padua");
    printf("\n");
    //declaração de variaveis
    int X, ValorFinal;
    //entrada de dados
    printf("\n Digite um valor: ");
    scanf("%i", &X);
    //operação
    ValorFinal= X%2;
    //saida de dados
    if(ValorFinal == 0){
        printf("\n O numero %d e par.", X);
    }
    else{
        printf("\n O numero %d e impar", X);
    }
    //encerramento
    printf("\n Pressione ENTER para sair.");
    fflush(stdin);
    getchar();

return 0;
}