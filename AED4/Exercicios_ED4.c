#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//inicio do metodo00
void Metodo00()
{
printf("O programa sera fechado.\n");
//encerramento
system("pause");

}
//Fim do Metodo00
//------------------------
//inicio do metodo01
void Metodo01()
{
    printf("METODO-01");
    printf("Exercicios - ED4 - ED0411 - v0.1. - 05 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
    double Valor1, Valor2;
    double Algarismos[30];
    int Quantidade, X=0, Y=0;
    printf("Digite o primeiro valor do intevalo: ");
    scanf("%lf", &Valor1);
    printf("Digite o segundo valor do intevalo: ");
    scanf("%lf", &Valor2);
    printf("Quantos numeros deseja testar: ");
    scanf("%d", &Quantidade);
    for(int i=0;i< Quantidade;i++)
    {
        printf("Digite o %i numero\n", i+1);
        scanf("%lf", &Algarismos[i]);
        system ("cls");
    }
    for(int i=0;i< Quantidade;i++)
    {
            if(Algarismos[i]>= Valor1 && Valor2>= Algarismos[i])
        {
            X++;
            printf("%lf\t pertence ao intervalo %lf ao %lf.\t\n", Algarismos[i], Valor1, Valor2);
        }else
        {
            Y++;
            printf("%lf\t nao pertence ao intervalo %lf ao %lf.\t\n", Algarismos[i], Valor1, Valor2);
        }
    }
    printf("Foram cadastrados %i numeros dentro do intervalo\n", X);
    printf("Foram cadastrados %i numeros fora do intervalo\n", Y);
//encerramento
    system("pause");
}
//fim do metodo01
//------------------------
//inicio do metodo02
int TesteMaiusculo (char Palavra[40])
{
 int i=0;
 int X=0;
 int Quantidade = strlen(Palavra);
  while (i <= Quantidade) {
    if(Palavra[i]>= 'A' && 'Z' >= Palavra[i])
    {
        X++;
        printf("%c\t Eh letra maiuscula!\n", Palavra[i]);
    }
  i++;
  }
 return (X);
}
void Metodo02()
{
    printf("METODO-02");
    printf("Exercicios ED4 - ED0412 - v0.0. - 04 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
 char Palavra[40];
 int Quantidade = strlen(Palavra);
//int X=0;
    printf("Digite uma palavra para ser testada: ");
    scanf("%s", Palavra);

//TesteMaiusculo(Palavra);
    printf("A palavra possui %d letras maiuscula(s).\n", TesteMaiusculo(Palavra));

//encerramento
    system ("pause");
}
//fim do metodo02
//------------------------
//inicio do metodo03
 char teste (char Palavra[]){
 int Quantidade= strlen(Palavra);
 int cont=0;
 int x= Quantidade;

for(x=Quantidade-1;x>=0;x--){
        if(Palavra[x]>='A' && Palavra[x]<='Z'){
    cont++;}
}
return ( cont );
}
void Metodo03()
{
    printf("Exercicios ED4 - ED0413 - v0.0. - 05 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
 char Palavra[40];
 int cont=0;
    printf("Digite uma palavra:");
    scanf("%s", Palavra);
 cont = teste(Palavra);
    printf("A palavra possui %d letras maiusculas\n", cont);

 //encerramentos
    system("pause");
}
//fim do metodo03
//------------------------
//inicio do metodo04
int funcao(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int x = 0;
    int y = 0;

    printf("As letras maiusculas sao:\n");
    for(x>=0;x<=Quantidade;x++){
        if(Palavra[x]>='A' && 'Z'>= Palavra[x]){
            printf("%c, \tEh letra maiuscula\n", Palavra[x]);
        }
    }
    printf("As letras minusculas sao:\n");
    for (y>=0;y<=Quantidade;y++){
        if(Palavra[y]>='a' && 'z'>= Palavra[y]){
            printf("%c \tEh letra minuscula\n", Palavra[y]);
        }
    }
return 0;
}

void Metodo04()
{
    printf("METODO-04");
    printf("Exercicios ED4 - ED0414 - v0.0. - 06 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
    char Palavra[40];
    int Quantidade = strlen(Palavra);
    char Letras;
    printf("Digite uma palavra: ");
    scanf("%s", Palavra);
//Chamar a funcao
funcao (Palavra);
//encerramento
system ("pause");
}
//fim do metodo04
//------------------------
//inicio do metodo 05
int TesteMaiusculo1(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int x=0;
    int y=0;
    int contMaiuscula=0;

    for(x>=0;x<=Quantidade;x++)
    {
        if(Palavra[x]>='A' && Palavra[x] <= 'Z')
        {
            contMaiuscula++;
        }
    }
 return (contMaiuscula);
}

int TesteMinusculo1(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int x=0;
    int contMinusculo=0;

    for(x>=0;x<=Quantidade;x++)
    {
        if(Palavra[x]>='a' && Palavra[x] <= 'z')
        {
            contMinusculo++;
        }
    }
 return (contMinusculo);
}

void Metodo05()
{
//introducao
    printf("METODO-05");
    printf("Exercicios ED4 - ED0415 - v0.0. - 06 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    char Palavra[40];
    int Quantidade = strlen(Palavra);
    int X;
    int Y;
    printf("Digite uma palavra ou frase: ");
    scanf("%s", Palavra);
//chamar a funcao
    X=TesteMaiusculo1(Palavra);
    Y=TesteMinusculo1(Palavra);
//retorno da funcao
    printf("A frase possui %d letras maiusculas!\n", X);
    printf("A frase possui %d letras minusculas!\n", Y);
//encerramento
    system("pause");
}
//fim do metodo05
//------------------------
//inicio do metodo06
int Separador1(char Palavra[40])
{
 int Quantidade = strlen(Palavra);
 int x = 0;
 int y = 0;

    printf("Letras MAIUSCULAS:\n");
    for(x>=0;x<=Quantidade;x++)
    {
        if(Palavra[x]>='A' && 'Z'>=Palavra[x])
        {
            printf("%c\t Eh letra MAIUSCULA\n", Palavra[x]);
        }
    }
    printf("\n");
    printf("Letras minusculas:\n");
    for(y>=0;y<=Quantidade;y++)
    {
        if(Palavra[y]>='a' && 'z'>=Palavra[y])
        {
            printf("%c\t Eh letra minuscula.\n", Palavra[y]);
        }
    }
return 0;
}
void Metodo06()
{
//introducao
    printf("METODO-06");
    printf("Exercicios ED4 - ED0416 - v0.0. - 07 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    char Palavra[40];
    int Quantidade = strlen(Palavra);

    printf("Digite uma palavra: ");
    scanf("%s", Palavra);
//chamar a funcao
    Separador1(Palavra);
//encerramneto
    system("pause");
return 0;
}
//fim do metodo06
//------------------------
//inicio do metodo07
void Metodo07()
{
    printf("Duvida no exercicio!\n");
    system("pause");
}
//fim do metodo07
//Funcao 1
int TesteMaiusculo2(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int x=0;
    int y=0;
    int z=0;
    int contMaiuscula=0;
    int contminuscula=0;
    int contnum=0;

    for(x>=0;x<=Quantidade;x++)
    {
        if(Palavra[x]>='A' && Palavra[x] <= 'Z')
        {
            contMaiuscula++;
        }
    }
return (contMaiuscula);
}
//Funcao 2
int Testeminusculo2(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int y=0;
    int contminuscula=0;

    for(y>=0;y<=Quantidade;y++)
    {
        if(Palavra[y]>='a' && Palavra[y]<='z')
        {
            contminuscula++;
        }
    }
    return (contminuscula);
}
//Funcao 3
int Testenum2(char Palavra[40])
{
    int Quantidade = strlen(Palavra);
    int z=0;
    int contnum=0;

    for(z>=0;z<=Quantidade;z++)
    {
        if(Palavra[z]>='0' && Palavra[z]<='9')
        {
            contnum++;
        }
    }
return (contnum);
} 
//------------------------
//inicio do metodo08
void Metodo08()
{
//introducao
    printf("METODO-08");
    printf("Exercicios ED4 - ED0418 - v0.0. - 07 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    char Palavra[40];
    //int Quantidade = strlen(Palavra);
    int X;
    int Y;
    int Z;
    printf("Digite uma palavra ou frase: ");
    scanf("%s", Palavra);
//chamar a funcao
X=TesteMaiusculo2(Palavra);
Y=Testeminusculo2(Palavra);
Z=Testenum2(Palavra);
//Y=TesteMinusculo(Palavra);
//retorno da funcao
    printf("A frase possui %d letras maiusculas!\n", X);
    printf("A frase possui %d letras minusculas!\n", Y);
    printf("A frase possui %d numeros!\n", Z);
//encerramento
system("pause");
}
//fim do metodo08
//------------------------
//inicio do metodo 09
//funcao 1
int TesteMaiusculo3(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int x=0;

    for(x>=0;x<=Quantidade;x++){
        if(Palavra[x]>='A'&&'Z'>=Palavra[x])
        printf("O digito %c Eh uma letra Maiuscula!\n", Palavra[x]);
    }
return 0;
}
//funcao 2
int TesteMinusculo3(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int y=0;

    for(y>=0;y<=Quantidade;y++){
        if(Palavra[y]>='a'&&'z'>=Palavra[y])
        printf("O digito %c Eh uma letra Minuscula!\n", Palavra[y]);
    }
return 0;
}
//funcao 3
int Testenum3(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int z=0;

    for(z>=0;z<=Quantidade;z++){
        if(Palavra[z]>='0'&&'9'>=Palavra[z])
        printf("O digito %c Eh um numero!\n", Palavra[z]);
    }
return 0;
}
void Metodo09()
{
    //introducao
    printf("METODO-09");
    printf("Exercicios ED4 - ED0419 - v0.0. - 07 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    int Palavra[40];
    int X, Y, Z;
    printf("Digite uma palavra: ");
    scanf("%s", Palavra);
//chamar a funcao
    X=TesteMaiusculo3(Palavra);
    Y=TesteMinusculo3(Palavra);
    Z=Testenum3(Palavra);

//encerramento
system("pause");

}
//fim do metodo09
//------------------------
//inicio do metodo 10
//funcao 1
int TesteMaiusculo4(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int x=0;
    int contmai=0;

    for(x>=0;x<=Quantidade;x++){
        if(Palavra[x]>='A'&&'Z'>=Palavra[x])
        contmai++;
    }
return (contmai);
}
//funcao 2
int TesteMinusculo4(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int y=0;
    int contmin=0;

    for(y>=0;y<=Quantidade;y++){
        if(Palavra[y]>='a'&&'z'>=Palavra[y])
        contmin++;
    }
return (contmin);
}
//funcao 3
int Testenum4(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int z=0;
    int contnum=0;

    for(z>=0;z<=Quantidade;z++){
        if(Palavra[z]>='0'&&'9'>=Palavra[z])
        contnum++;
    }
return (contnum);
}
void Metodo10()
{
    //introducao
    printf("METODO-10");
    printf("Exercicios ED4 - ED0420 - v0.0. - 07 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    char Palavra[40];
    int Quantidade = strlen(Palavra);
    int X, Y, Z, QtdChar;
    printf("Digite uma palavra: ");
    scanf(" %[^\n]s", Palavra);
    setbuf(stdin, NULL);
//chamar a funcao
    X=TesteMaiusculo4(Palavra);
    Y=TesteMinusculo4(Palavra);
    Z=Testenum4(Palavra);
//retorno da funcao
    QtdChar= X+Y+Z;
//saida de dados
    printf("\nO total de caracteres da frase sao %d!\n", QtdChar);

//encerramento
system("pause");
}
//fim do metodo 10
//------------------------
//Inicio do metodo 11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//funcao 1
int TesteMaiusculo5(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int x=0;
    int contmai=0;

    for(x>=0;x<=Quantidade;x++){
        if(Palavra[x]>='A'&&'Z'>=Palavra[x])
        contmai++;
    }
return (contmai);
}
//funcao 2
int TesteMinusculo5(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int y=0;
    int contmin=0;

    for(y>=0;y<=Quantidade;y++){
        if(Palavra[y]>='a'&&'z'>=Palavra[y])
        contmin++;
    }
return (contmin);
}
//funcao 3
int Testenum5(char Palavra[40])
{
    int Quantidade= strlen(Palavra);
    int z=0;
    int contnum=0;

    for(z>=0;z<=Quantidade;z++){
        if(Palavra[z]>='0'&&'9'>=Palavra[z])
        contnum++;
    }
return (contnum);
}
void Metodo11()
{
//introducao
    printf("METODO-11\n");
    printf("Exercicios ED4 - EDE421 - v0.0. - 07 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua - Matricula: 686391\n");
//entrada de dados
    char Palavra[40];
    int Quantidade = strlen(Palavra);
    int X, Y, Z, QtdChar;
    fflush(stdin);
    printf("Digite uma palavra: ");
    gets (Palavra);
    printf("A frase e: %s\n", Palavra);
//chamar a funcao
    X=TesteMaiusculo5(Palavra);
    Y=TesteMinusculo5(Palavra);
    Z=Testenum5(Palavra);
//retorno da funcao
    QtdChar= X+Y+Z;
//saida de dados
    printf("O total de caracteres da frase sao %d!\n", QtdChar);

//encerramento
system("pause");
}
int main()
{
    int x=0;
    printf("Metodo00 - Nao faz nada!\n");
    printf("Metodo01 - Contar quantos valores pertencem ao intervalo, e quantos estao fora.\n");
    printf("Metodo02 - Conta e mostra a quantidade de letras maiusculas.\n");
    printf("Metodo03 - Contar as letras maiusculas mediante uma funcao.\n");
    printf("Metodo04 - Separa as letras maiusculas mediante uma funcao "
           "que recebera uma cadeia de caracteres como parametro.\n");
    printf("Metodo05 - Conta as letras maiusculas e minusculas mediante uma funcao.\n");
    printf("Metodo06 - Separa as letras (tanto maiusculas, quanto minusculas) mediante uma funcao\n");
    printf("Metodo07 - Conta e mostra apenas os digitos pares em uma cadeia de caracteres.\n");
    printf("Metodo08 - Conta todos os simbolos alfanumericos (letras e digitos) em uma cadeia de caracteres "
           " por meio de uma funcao.\n");
    printf("Metodo09 - Separa todos os simbolos alfanumericos (letras e digitos) em uma cadeia de caracteres "
           " por meio de uma funcao.\n");
    printf("Metodo10 - Contar a quantidade de simbolos alfanumericos (letras e digitos) em cada palavra, "
           "e calcular o total de todas as palavras.\n");
    printf("Metodo11 - contar a quantidade de simbolos alfanumericos (letras e digitos) em cada palavra "
           "e calcular o total de todas as palavras, usando gets()\n");
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
    case 4:
        Metodo04();
        break;
    case 5:
        Metodo05();
        break;
    case 6:
        Metodo06();
        break;
    case 7:
        Metodo07();
        break;
    case 8:
        Metodo08();
        break;
    case 9:
        Metodo09();
        break;
    case 10:
        Metodo10();
    case 11:
        Metodo11();
    default:
        printf("ERRO: Valor invalido!");
    }
//encerramento
return 0;
}