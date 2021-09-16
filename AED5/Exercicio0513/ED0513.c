#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void Funcao3()
{
    int y;
    printf("Digite um valor: ");
    scanf("%d", &y);

    Met3(y);
}

void Met3(numero)
{
    int i, a,z;
    for(i=numero;i>=0;i--)
    {
        z = i*3;
        a = i%2;
        if(z!=0)
            {
                if(a!=0)
                    {
                        printf("%d\tO valor %d e impar e multiplo de 3!\n", i, z);
                    }
            }
    }
system("pause");
}

int main()
{
//identificacao
    printf("EXercicios ED5 - ED0513 - v0.0. - 11 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//entrada de dados
    printf("Digite um numero da funcao: ");
    int x=0;
    scanf("%d", &x);
//chamar a funcao
    switch(x){
    case 1:
        Funcao3();
        break;
    default:
        printf("Erro! Valor nao atribuido.\n");
    system("pause");
    }
return 0;
}
