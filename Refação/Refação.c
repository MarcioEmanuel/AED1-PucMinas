#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//inicio do metodo00
void Metodo00()
{

}
//Fim do Metodo00
//------------------------
//inicio do metodo01

void Metodo01()
{
    printf("EXERCICIO-01");
    int z=0;
    int y=0;
    int p=0;
    int x=686391;

    p=x;

    while(p>0)
    {
        if(p%10%2!=0)
        {
            y=y+p%10/2;
        }else
        {
            z=z+p%10;
        }
        p=p/10;
    }
    if(z-y>0)
    {
        printf("%s%d\n", "a. resposta=", (z-y));
    }else
    {
        printf("%s%d\n", "b. resposta=", (10+y-z));
    }
    system("pause");
}
//fim do metodo01
//------------------------
//inicio do metodo02

void Metodo02()
{
    int n = 0;
    int cont = 2;
    int i = 0;
    printf("Digite um valor: ");
    scanf("%d", &n);
//estrutura de repeticao
    for(i=0; i<n;i++)
    {
        if(i==0)
        {
            printf("1 ");
        }else if(i==1)
        {
            printf("2 ");
            cont=5;
        }else if(i%10==1)
        {
            printf("%d ", cont);
            cont=cont+9;
        }else if(cont%5==0)
        {
            printf("%d ", cont);
            cont= cont+1;
        }else
        {
            printf("%d ", cont);
            cont=cont+4;
        }

    }
    system("pause");
}
//fim do metodo02
//------------------------
//inicio do metodo03
char* funcao3(char* Palavra)
{
    printf("%s\n\n", Palavra);
    char* Letras = (char*) malloc((strlen(Palavra)+1)*sizeof(Palavra));
    char* Numeros = (char*) malloc((strlen(Palavra)+1)*sizeof(Palavra));
    char* Outros = (char*) malloc((strlen(Palavra)+1)*sizeof(Palavra));
    int i = 0;
    char* Resultado = (char*) malloc((strlen(Palavra)+1)*sizeof(Palavra));
    char Letra[2];
    strcpy(Letras, "");
    strcpy(Numeros, "");
    strcpy(Outros, "");
    strcpy(Resultado, "");
    //---------------------
    for(i=0;i<strlen(Palavra);i++){
    if(Palavra[i]>='a' && Palavra[i]<= 'z' || Palavra[i]>='A' && Palavra[i]<= 'Z' ){
        Letra[0]=Palavra[i];
        Letra[1]='\0';
        strcat(Letras ,Letra);
    }else if(Palavra[i]>='0' && Palavra[i]<='9')
    {
        Letra[0]=Palavra[i];
        Letra[1]='\0';
        strcat(Numeros ,Letra);
    }else
    {
        Letra[0]=Palavra[i];
        Letra[1]='\0';
        strcat(Outros, "-");
    }
    }
        printf("Letras: %s\n", Letras);
        printf("Numeros: %s\n", Numeros);
        printf("Outros: %s\n", Outros);
    strcat(Resultado, strcat(Letras,strcat(Numeros, Outros)));
    return (Resultado);
}

void Metodo03()
{
    char Palavra[]="A1%B$2c&3";
    printf("\n%s", funcao3("A1%B$2c&3"));
}
//fim do metodo03
//------------------------
//Main
int main()
{
    int x;
    printf("Exercicio - Refacao1 - v0.1. - 26 / 09 / 2019\n");
    printf("Autor: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");

        do{
        printf("Metodo00 - 0\n");
        printf("Metodo01 - 1\n");
        printf("Metodo02 - 2\n");
        printf("Metodo03 - 3\n");

//estrutura switch
        printf("Digite a opcao desejada: ");
        scanf("%d", &x);

            switch (x)
            {
            case 0:
                Metodo00();
                break;
            case 1:
                Metodo01();
                break;
            case 2:
                Metodo02();
                break;
            case 3:
                Metodo03();
                break;
            }
            }while(x!=0);
//encerramento
return 0;
}