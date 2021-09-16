#include <stdio.h>

int main(int argc, char* argv[]){
//introducao
    printf("\n Exercicio0219 - Programa = v0.0");
    printf("\n Autor: Marcio Emanuel Batista de Padua");
    printf("\n");
//entrada de dados
    double X, Y, Z;

    printf("\n Digite o primeiro valor: ");
    scanf("%lf", &X);
    printf("\n Digite o segundo valor: ");
    scanf("%lf", &Y);
    printf("\n Digite o terceiro valor: ");
    scanf("%lf", &Z);
//estrutura de teste
    if (X!=Y && X!=Z){
        if(Y<X<Z){
            printf("\n O valor %lf esta entre os valores %lf e %lf", X, Y, Z);
        } else if (Z<X<Y){
            printf("\n O valor %lf esta entre os valores %lf e %lf", X, Z, Y);
        }
    } else{
       printf("\n Possuem valores iguais.");
    }
//encerramento
    printf("\n Pressione ENTER para sair.");
    fflush(stdin);
    getchar();
    return 0;
}
