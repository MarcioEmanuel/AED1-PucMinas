#include <stdio.h>

int main(int argc, char* argv[]){
//introducao
printf("\n Exercicio0216 - Programa = v0.0");
printf("\n Autor: Marcio Emanuel Batista de Padua");
printf("\n");
//entrada de dados
int X, Y, ValorX, ValorY;
printf("\n Digite o primeiro valor: ");
scanf("%i", &X);
printf("\n Digite o segundo valor: ");
scanf("%i", &Y);
//operacao
ValorX= X%2;
ValorY= Y%2;
//estrutura de teste
if(ValorX!=0){
    printf("\n O valor %i e impar.", X);
} else{

}
if (ValorY==0){
    printf("\n O valor %i e par.", Y);
} else{
    printf("\n Fechar.");
}
//encerramento
printf("\n Pressione ENTER para sair.");
fflush(stdin);
getchar();

return 0;
}
