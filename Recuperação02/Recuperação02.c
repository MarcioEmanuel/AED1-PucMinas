#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void Exercicio00();
void Exercicio01();
void Exercicio02();
void Exercicio03();
void Exercicio04();
void Exercicio05();
void Exercicio06();
void Exercicio07();
void Exercicio08();
void Exercicio09();
void Exercicio10();

int main()
{
    int x = 0;
    do
    {
        printf("Autor: Marcio Emanuel Batista de Padua\t");
        printf("Matricula: 686391");
        printf("REFACAO 02\n\n");
        printf("\nEscolha uma das alternativas abaixo.\n\n");
        printf("\nFechar o Programa: 0\n");
        printf("\nExercicio01: 1\n");
        printf("\nExercicio02: 2\n");
        printf("\nExercicio03: 3\n");
        printf("\nExercicio04: 4\n");
        printf("\nExercicio01: 5\n");
        printf("\nExercicio02: 6\n");
        printf("\nExercicio03: 7\n");
        printf("\nExercicio04: 8\n");
        printf("\nExercicio03: 9\n");
        printf("\nExercicio04: 10\n");
        printf("Digite o valor do exercicio: ");
        scanf("%d", &x);
        switch (x)
        {
        case 0:
            Exercicio00();
            break;
        case 1:
            Exercicio01();
            break;
        case 2:
            Exercicio02();
            break;
        case 3:
            Exercicio03();
            break;
        case 4:
            Exercicio04();
            break;
        case 5:
            Exercicio05();
            break;
        case 6:
            Exercicio06();
            break;
        case 7:
            Exercicio07();
            break;
        case 8:
            Exercicio08();
            break;
        case 9:
            Exercicio09();
            break;
        case 10:
            Exercicio10();
            break;
        default:
            break;
        }
    } while (x < 0 || x > 10);
}

//inicio do metodo00
void Exercicio00()
{
    /*Autor: Marcio Emanuel Batista de Padua
    Matricula: 686391
    Exercicio00. */
    printf("O programa sera fechado!\n");
    system("pause");
}
//Fim do Metodo00
//------------------------
//inicio do metodo01

int Funcao01()
{
    FILE *arquivoA1 = fopen("ArquivoA1.txt", "rt");
    FILE *arquivoB1 = fopen("ResultadoB1.txt", "wt");
    fprintf(arquivoB1, "Exercicio01\n");
    //declarar variaveis
    int i = 0;
    int y = 0;
    int x = 0;
    do
    {
        printf("Digite quantos numeros deseja ler do arquivo: ");
        scanf("%d", &x);
    } while (x < 0);
    int valor[x];

    for (i = 0; i < x; i++)
    {
        fscanf(arquivoA1, "%d", &valor[i]);
    }
    for (i = 0; i < x; i++)
    {
        printf("%d ", valor[i]);
    }

    for (i = 0; i < x; i++)
    {
        if (valor[i] != 0)
        {
            fprintf(arquivoB1, "\n%d: ", valor[i]);
            for (y = 1; y <= valor[i]; y++)
            {
                if (valor[i] % y == 0)
                {
                    fprintf(arquivoB1, "%d ", y);
                    printf("%d ", y);
                }
            }
        }
        printf("\n");
        fprintf(arquivoB1, "\n");
    }
    system("pause");
    return (0);
}

void Exercicio01()
{
    /*Autor: Marcio Emanuel Batista de Padua
    Matricula: 686391
    Exercicio01. */
    printf("Exercicio01\n");
    //chamar a funcao
    Funcao01();
}
//fim do metodo01
//------------------------
//inicio do metodo02

int Funcao02()
{
    //abrir arquivo
    FILE *arquivo02 = fopen("RESULTADO02.txt", "wt");
    //definir variaveis
    int i = 0;
    int x = 0;
    int soma = 0;
    do
    {
        printf("Digite um valor para o testar: ");
        scanf("%d", &x);
    } while (x < 1000 || x > 9999);

    //testar valores perfeitos
    for (i = 1; i < x; ++i)
    {
        if (x % i == 0)
            soma = soma + i;
    }
    if (x == soma)
    {
        printf("%d eh um numero perfeito.\n", x);
        fprintf(arquivo02, "%d eh um numero perfeito.\n", x);
    }
    else
    {
        printf("%d nao eh um numero perfeito.", x);
        fprintf(arquivo02, "%d nao eh um numero perfeito.\n", x);
    }
    return 0;
    system("pause");
}

void Exercicio02()
{
    /*Autor: Marcio Emanuel Batista de Padua
    Matricula: 686391
    Exercicio02. */
    printf("Exercicio02\n");
    //chamar a funcao
    Funcao02();
}
//fim do metodo02
//------------------------
//inicio do metodo03

int Funcao03(int x, int y)
{
    int resultado = 0;

    while (y != 0)
    {
        resultado = x % y;
        x = y;
        y = resultado;
    }
    return x;
}

void Exercicio03()
{
    /*Autor: Marcio Emanuel Batista de Padua
      Matricula: 686391
      Exercicio03. */
    printf("Exercicio03\n");
    int x = 0;
    int y = 0;
    FILE *arquivo03 = fopen("NUMEROS.txt", "rt");
    fscanf(arquivo03, "%d %d", &x, &y);
    fprintf(arquivo03, "MDC: %d", Funcao03(x, y));
    printf("MDC: %d", Funcao03(x, y));
}
//fim do metodo03
//------------------------
//inicio do metodo04

int Funcao04(int x, int y)
{
    int cont = 2;
    int r = 1;
    int result1 = x;
    int result2 = y;
    while (result1 + result2 != 2)
    {
        if (result1 % cont == 0 || result2 % cont == 0)
        {
            r = r * cont;
            if (result1 % cont == 0)
            {
                result1 = result1 / cont;
            }
            if (result2 % cont == 0)
            {
                result2 = result2 / cont;
            }
        }
        else
        {
            cont++;
        }
    }
    return r;
}

void Exercicio04()
{
    /*Autor: Marcio Emanuel Batista de Padua
      Matricula: 686391
      Exercicio04. */
    printf("Exercicio04\n");
    int x = 0;
    int y = 0;
    FILE *arquivo04 = fopen("NUMEROS.txt", "rt");
    fscanf(arquivo04, "%d %d", &x, &y);
    fprintf(arquivo04, "MDC: %d", Funcao04(x, y));
    printf("MDC: %d", Funcao04(x, y));
}
//fim do metodo04
//------------------------
//inicio do metodo 05

void Funcao05(char *str, int qtd)
{
    int i = 0;
    FILE* arquivo05=fopen("Resultado05.txt", "wt");

    for (i = 0; i < qtd; i++)
    {
        fprintf(arquivo05, "%c", str[i]);
        printf("%c", str[i]);
    }
}

void Exercicio05()
{
    /*Autor: Marcio Emanuel Batista de Padua
      Matricula: 686391
      Exercicio05. */

    char str[100];
    int qtd = 0;
    printf("Digite uma palavra ou frase: ");
    getchar();
    gets(str);
    printf("Digite quantas letras deseja imprimir na tela: ");
    scanf("%d", &qtd);

    Funcao05(str, qtd);

    printf("\n");
    system("pause");
}

/* Professor, tentei fazer essa função retornando os caracteres, 
   porem não consegui retornar, mudei para uma função void e
   gravei no arquivo dentro da função, para não deixar em branco 
   esse exercicio.
*/

//fim do metodo05
//------------------------
//inicio do metodo06

void Funcao06(char *str, int qtd)
{
    int i = 0;
    int tamanho = strlen(str);
    FILE* arquivo06=fopen("Resultado06.txt", "wt");

    for (i = qtd; i < tamanho; i++)
    {
        fprintf(arquivo06, "%c", str[i]);
        printf("%c", str[i]);
    }
}

void Exercicio06()
{
    /*Autor: Marcio Emanuel Batista de Padua
      Matricula: 686391
      Exercicio06. */

    char str[100];
    int qtd = 0;
    printf("Digite uma palavra ou frase: ");
    getchar();
    gets(str);
    printf("Digite a partir de qual letra deseja imprimir na tela: ");
    scanf("%d", &qtd);

    Funcao06(str, qtd);

    printf("\n");
    system("pause");
}

/* Professor, assim como no Exercicio 5, não consegui retornar um char nete tambem,
   mudei para uma função void novamente e gravei no arquivo dentro da função,
   para não deixar em branco esse exercicio também.
*/


//fim do metodo06
//------------------------
//inicio do metodo07

void Exercicio07()
{
    /*Autor: Marcio Emanuel Batista de Padua
      Matricula: 686391
      Exercicio07. */

    /* Duvida no Exercicio */
}
//fim do metodo07
//------------------------
//inicio do metodo08

void Exercicio08()
{
    /*Autor: Marcio Emanuel Batista de Padua
      Matricula: 686391
      Exercicio08. */

    /* Duvida no Exercicio */
    
}
//fim do metodo08
//------------------------
//inicio do metodo 09

int Funcao09(int* array)
{
    int i = 0;
    int soma = 0;
    int pot = 7;

    for(i = 0; i < 7; i++)
    {
        soma = soma + array[i] * pow(2, pot);
        pot--;
    }
    return soma+1;
}

void Exercicio09()
{
    /*Autor: Marcio Emanuel Batista de Padua
      Matricula: 686391
      Exercicio09. */

    printf("Exercicio9\n");
    int array[8];
    int i = 0;
    for (i = 7; i >= 0; i--)
    {
        do
        {
            printf("Digite o valora da posicao %d da array: ", i);
            scanf("%d", &array[i]);
        } while (array[i] < 0 || array[i] > 1);
    }
    printf("Resultado = %d", Funcao09(array));
    printf("\n");
    system("pause");
}
//fim do metodo09
//------------------------
//inicio do metodo 10

void Exercicio10()
{
    /*Autor: Marcio Emanuel Batista de Padua
      Matricula: 686391
      Exercicio10. */
}
//fim do metodo 10
//------------------------