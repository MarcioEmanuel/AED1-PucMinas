#include <stdio.h>

int main(int argc, char* argv[]){
//introducao
    printf("\n Exercicio0217 - Programa = v0.0");
    printf("\n Autor: Marcio Emanuel Batista de Padua");
    printf("\n");
//entrada de dados
    float X, Y;

    printf("\n Digite o primeiro valor: ");
    scanf("%f", &X);
    printf("\n Digite o segundo valor: ");
    scanf("%f", &Y);

//estrutura de testes
    if(X==Y){
        printf("\n O primeiro valor e igual ao segundo.");
    } else if(X>Y){
        printf("\n O primeiro valor e maior do que o segundo.");
    } else{
        printf("\n O primeiro valor e menor do que o segundo");
    }
//encerramneto
    printf("\n Pressione ENTER para sair.");
    fflush(stdin);
    getchar();

return 0;
}