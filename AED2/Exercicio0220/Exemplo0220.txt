#include <stdio.h>

int main(int argc, char* argv[]){
//introducao
    printf("\n Exercicio0220 - Programa = v0.0");
    printf("\n Autor: Marcio Emanuel Batista de Padua");
    printf("\n");
//entrada de dados
    float X, Y, Z;

    printf("\n Digite o primeiro valor: ");
    scanf("%f", &X);
    printf("\n Digite o segundo valor: ");
    scanf("%f", &Y);
    printf("\n Digite o terceiro valor: ");
    scanf("%f", &Z);
//estrutura de testes
    if(X!=Y & X!=Z){
        if (X<Y & Y<Z){
        printf("\n O Valor %f nao esta entre %f e %f.", X, Y, Z);
        } else if (X>Z & Z>Y){
        printf("\n O valor %f nao esta entre %f e %f.", X, Y, Z);
        }
    } else {
        printf("\n Os numeros sao iguais.");
    }
    //encerramento
    printf("\n Pressione ENTER para sair.");
    fflush(stdin);
    getchar();
    
return 0;
}