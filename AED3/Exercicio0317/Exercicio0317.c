#include <stdio.h>

int main()
{
//identificacao
    printf("Exercicio0317 - Programa - v0.0");
    printf("\nAutor: Marcio Emanuel Batista de Padua");
    printf("\n");
//entrada de dados
    int X, Y, Z, A=0;
    printf("Digite um valor: ");
    scanf(" %i", &X);
    printf("Digite um valor para definir um intervalo: ");
    scanf(" %i", &Y);
//estrutura de repeticao
        for(X=X;X<=Y;X++)
    {
    Z=X%5;  
        if(Z==0)
        {
            A=A+1;
            printf("%i\t%i\t%s",A , X, "Eh multiplo de 5\n");
        }
    }    
//encerramento
    printf("Pressione ENTER para sair.");
    fflush(stdin);
    getchar();
return 0;
}