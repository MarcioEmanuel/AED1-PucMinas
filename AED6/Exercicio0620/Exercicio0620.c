#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Funcao10(char Palavra[], int tamanho, int i, int cont)
{
    tamanho = strlen(Palavra);
    if(i<=tamanho)
    {
        if(Palavra[i]>='A' && Palavra[i]<='Z')
        {
            printf("A letra %c eh Maiuscula!\n", Palavra[i]);
            cont++;
        }
    i++;
    return Funcao10(Palavra, tamanho, i, cont);
    }
    return (cont);
}

int main()
{
    char Palavra[100];
    int y = 0;
    printf("Digite uma palavra: ");
    scanf("%s", Palavra);
//chamar a funcao
    y = Funcao10(Palavra, 0 , 0, 0);
//Retorno da Funcao
    printf("A palavra possui %d letras maiusculas\n", y);
//encerramento
    system("pause");
}