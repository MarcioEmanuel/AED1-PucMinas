#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Separador2()
{
 char Palavra[10];
 int Quantidade = strlen(Palavra);
 int x=0;
 int y=0;
    printf("Digite uma palavra: ");
    scanf("%s", Palavra);
    for(x=0;x<=Quantidade;x++)
    {
        if(Palavra[x]>='1' && '9'>=Palavra[x])
        {
            if(y=x%2==0)
            {
                    printf("A posicao do caracter %c e par", Palavra[x]);
            }
        }
    }
    
;
    }

int main()
{
//introducao
    printf("METODO-07");
    printf("Exercicios ED4 - ED0417 - v0.0. - 07 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    //char Palavra[10];
    //int Quantidade = strlen(Palavra);

    //printf("Digite uma palavra: ");
    //scanf("%s", Palavra);
//chamar a funcao
    Separador2();
//encerramento
    system("pause");
return 0;
}

