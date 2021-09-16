#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

//inicio do metodo00
void Metodo00(void)
{
    cout << "Fim do programa" << endl;
}
//Fim do Metodo00
//------------------------
//inicio do metodo01

void Funcao01(int V1, int V2, int qtd)
{
    int y = V2 - V1;
    int array[qtd];
    // gerar valoresa aleatorios na array
    FILE *arquivo01 = fopen("DADOS01.txt", "wt");
    for (int i = 0; i < qtd; i++)
    {
        array[i] = V1 + (rand() % y);
        cout << array[i] << endl;
        fprintf(arquivo01, "%d ", array[i]);
    }
}

void Metodo01()
{
    cout << "Exercicio01" << endl;
    //declarar variaveis
    int V1 = 0;
    int V2 = 0;
    int qtd = 0;
    //entrada de dados
    cout << "Digite o valor inicial do intervalo: ";
    cin >> V1;
    cout << "Digite o valor final do intevalo: ";
    cin >> V2;
    cout << "Digite quantos valores aleatorios 0o programa ira gerar: ";
    cin >> qtd;
    // chamar a funcao
    Funcao01(V1, V2, qtd);
}
//fim do metodo01
//------------------------
//inicio do metodo02

int Funcao02(int x)
{
    int array[x];
    //passar valores para array
    FILE *arquivo002 = fopen("DADOS02.txt", "rt");
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo002, "%d", &array[i]);
    }

    int maior = array[0];

    for (int i = 1; i < x - 1; i++)
    {
        if (maior < array[i])
        {
            maior = array[i];
        }
    }

    return (maior);
}

void Metodo02()
{
    cout << "Exercicio02" << endl;
    //declarar variaveis
    int x = 0;
    int cont = 0;
    //abrir arquivo
    FILE *arquivo02 = fopen("DADOS02.txt", "rt");
    //descobrir o tamanho do arquivo
    fscanf(arquivo02, "%d", &x);
    while (!feof(arquivo02))
    {
        fscanf(arquivo02, "%d", &x);
        cont++;
    }
    fclose(arquivo02);
    //chamar a funcao
    cout << "O maior valor encontrado na array e: ";
    cout << Funcao02(cont) << endl;
}
//fim do metodo02
//------------------------
//inicio do metodo03

int Funcao03(int x)
{
    int array[x];
    //passar valores para array
    FILE *arquivo003 = fopen("DADOS03.txt", "rt");
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo003, "%d", &array[i]);
    }

    int menor = array[0];

    for (int i = 1; i < x - 1; i++)
    {
        if (menor > array[i])
        {
            menor = array[i];
        }
    }

    return (menor);
}

void Metodo03()
{
    cout << "Exercicio03" << endl;
    //declarar variaveis
    int x = 0;
    int cont = 0;
    //abrir arquivo
    FILE *arquivo03 = fopen("DADOS03.txt", "rt");
    //descobrir o tamanho do arquivo
    fscanf(arquivo03, "%d", &x);
    while (!feof(arquivo03))
    {
        fscanf(arquivo03, "%d", &x);
        cont++;
    }
    fclose(arquivo03);
    //chamar a funcao
    cout << "O menor valor encontrado na array e: ";
    cout << Funcao03(cont) << endl;
}
//fim do metodo03
//------------------------
//inicio do metodo04

int Funcao04(int x)
{
    int array[x];
    int soma = 0;
    //passar valores para a array
    FILE *arquivo004 = fopen("DADOS04.txt", "rt");
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo004, "%d", &array[i]);
    }

    //Somar valores da array
    for (int i = 0; i < x; i++)
    {
        soma = soma + array[i];
    }
    //retornar
    return (soma);
}

void Metodo04()
{
    cout << "Exercicio04" << endl;
    //declarar variaveis
    int x = 0;
    int cont = 0;
    //abrir arquivo
    FILE *arquivo04 = fopen("DADOS04.txt", "rt");
    //descobrir o tamanho do arquivo
    fscanf(arquivo04, "%d", &x);
    while (!feof(arquivo04))
    {
        fscanf(arquivo04, "%d", &x);
        cont++;
    }
    fclose(arquivo04);
    //chamar a funcao
    cout << "A soma de todos os valores da array e: ";
    cout << Funcao04(cont) << endl;
}
//fim do metodo04
//------------------------
//inicio do metodo 05

int Funcao05(int x)
{
    int array[x];
    int soma = 0;
    int media = 0;
    //passar valores para a array
    FILE *arquivo005 = fopen("DADOS05.txt", "rt");
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo005, "%d", &array[i]);
    }

    //Somar valores da array
    for (int i = 0; i < x; i++)
    {
        soma = soma + array[i];
    }
    media = soma / x;
    //retornar
    return (media);
}

void Metodo05()
{
    cout << "Exercicio05" << endl;
    //declarar variaveis
    int x = 0;
    int cont = 0;
    //abrir arquivo
    FILE *arquivo05 = fopen("DADOS05.txt", "rt");
    //descobrir o tamanho do arquivo
    fscanf(arquivo05, "%d", &x);
    while (!feof(arquivo05))
    {
        fscanf(arquivo05, "%d", &x);
        cont++;
    }
    fclose(arquivo05);
    //chamar a funcao
    cout << "A media dos valores da array e: ";
    cout << Funcao05(cont) << endl;
}
//fim do metodo05
//------------------------
//inicio do metodo06

bool Funcao06(int x)
{
    int array[x];
    int cont = 0;
    //passar valores para a array
    FILE *arquivo006 = fopen("DADOS06.txt", "rt");
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo006, "%d", &array[i]);
    }
    //testar valores
    for (int i = 0; i < x; i++)
    {
        if (array[i] != 0)
        {
            cont++;
        }
    }
    if (cont != 0)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

void Metodo06()
{
    cout << "Exercicio06" << endl;
    //declarar variaveis
    int x = 0;
    int cont = 0;
    int retorno = 0;
    //abrir arquivo
    FILE *arquivo06 = fopen("DADOS06.txt", "rt");
    //descobrir tamanho do arquivo
    fscanf(arquivo06, "%d", &x);
    while (!feof(arquivo06))
    {
        fscanf(arquivo06, "%d", &x);
        cont++;
    }
    fclose(arquivo06);
    //chamar a funcao
    retorno = Funcao06(cont);
    if (retorno == 0)
    {
        cout << "Os valores da array NAO sao todos iguais a 0." << endl;
    }
    else
    {
        cout << "Os valores da array sao todos iguais a 0." << endl;
    }
}
//fim do metodo06
//------------------------
//inicio do metodo07

bool Funcao07(int x)
{
    int array[x];
    int cont = 0;
    //passar valores para a array
    FILE *arquivo007 = fopen("DADOS07.txt", "rt");
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo007, "%d", &array[i]);
    }
    //testar valores
    for (int i = 0; i < x; i++)
    {
        if (array[i] > array[i + 1])
        {
            cont++;
        }
    }
    if (cont == 0)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

void Metodo07()
{
    cout << "Exercicio07" << endl;
    //declarar variaveis
    int x = 0;
    int cont = 0;
    int retorno = 0;
    //abrir arquivo
    FILE *arquivo07 = fopen("DADOS07.txt", "rt");
    //descobrir tamanho do arquivo
    fscanf(arquivo07, "%d", &x);
    while (!feof(arquivo07))
    {
        fscanf(arquivo07, "%d", &x);
        cont++;
    }
    fclose(arquivo07);
    //chamar a funcao
    retorno = Funcao07(cont);
    if (retorno == 0)
    {
        cout << "Os valores da array NAO estao em ordem." << endl;
    }
    else
    {
        cout << "Os valores da array estao em ordem crescente." << endl;
    }

    //chamar a funcao
}
//fim do metodo07
//------------------------
//inicio do metodo08

bool Funcao08(int x)
{
    int array[x];
    int valor = 0;
    int v1 = 0, v2 = 0;
    int cont = 0;
    //definir intervalo
    do
    {
        cout << "Digite o valor inicial do intervalo: ";
        cin >> v1;
    } while (v1 < 0 || v1 >= x);
    do
    {
        cout << "Digite o valor final do intervalo: ";
        cin >> v2;
    } while (v2 < v1 || v2 > x);
    cout << "Digite o valor que deseja procurar no intervalo: ";
    cin >> valor;
    //passar valores para array
    FILE *arquivo008 = fopen("DADOS08.txt", "rt");
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo008, "%d", &array[i]);
    }
    //procurar valor
    for (int i = v1; i < v2; i++)
    {
        if (array[i] == valor)
        {
            cont++;
        }
    }

    if (cont == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void Metodo08()
{
    cout << "Exercicio08" << endl;
    //declarar variaveis
    int x = 0;
    int cont = 0;
    int result = 0;
    //descobrir tamanho do arquivo
    FILE *arquivo08 = fopen("DADOS08.txt", "rt");
    fscanf(arquivo08, "%d", &x);
    while (!feof(arquivo08))
    {
        fscanf(arquivo08, "%d", &x);
        cont++;
    }
    //chamar a funcao
    result = Funcao08(cont);

    if (result == 0)
    {
        cout << "O valor nao existe no intervalo\n";
    }
    else
    {
        cout << "O valor esta presente no intervalo.\n";
    }
}
//fim do metodo08
//------------------------
//inicio do metodo 09

void Funcao09(int x)
{
    int array[x];
    const int y = 2;
    int result = 0;
    //passar valores para array
    FILE *arquivo009 = fopen("DADOS09.txt", "rt");
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo009, "%d", &array[i]);
    }
    //multiplicar valores pela constante
    for (int i = 0; i < x; i++)
    {
        result = 0;
        result = array[i] * y;
        cout << result << " ";
    }
    cout << endl;
    fclose(arquivo009);
}

void Metodo09()
{
    cout << "Exercicio09" << endl;
    //declarar variaveis
    int x = 0;
    int cont = 0;
    //descobrir tamanho do arquivo
    FILE *arquivo09 = fopen("DADOS09.txt", "rt");
    fscanf(arquivo09, "%d", &x);
    while (!feof(arquivo09))
    {
        fscanf(arquivo09, "%d", &x);
        cont++;
    }
    fclose(arquivo09);
    //chamar a funcao
    Funcao09(cont);
}
//fim do metodo09
//------------------------
//inicio do metodo 10

void Funcao10(int x)
{
    int array[x];
    int aux = 0;
    //passar valores para array
    FILE *arquivo010 = fopen("DADOS10.txt", "rt");
    for (int i = 0; i < x; i++)
    {
        fscanf(arquivo010, "%d", &array[i]);
    }
    //colocar valores em ordem
    for(int i = 0; i < x; i++)
    {
        for(int a = i+1; a < x; a++)
        {
            if(array[i] > array[a])
            {
                	aux = array[i];
                    array[i] = array[a];
                    array[a] = aux;
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    fclose(arquivo010);
}

void Metodo10()
{
    cout << "Exercicio 10" << endl;
    //declarar variaveis
    int x = 0;
    int cont = 0;
    //descobrir tamanho do arquivo
    FILE *arquivo10 = fopen("DADOS10.txt", "rt");
    fscanf(arquivo10, "%d", &x);
    while (!feof(arquivo10))
    {
        fscanf(arquivo10, "%d", &x);
        cont++;
    }
    fclose(arquivo10);
    //chamar a funcao
    Funcao10(cont);
}
//fim do metodo 10
//------------------------
//inicio do Extra 01

void Extra01()
{
    int array1[10] = {1,2,3,4,5,6,7,8,9,10};
    int array2[10] = {1,3,2,4,5,6,7,8,9,10};
    int cont = 0;

    for (int i = 0; i < 10; i++)
    {
        if(array1[i] != array2[i])
        {
            cont++;
        }
    }
    if(cont != 0)
    {
        cout << "As arrays NAO sao iguais." << endl;
    }else
    {
        cout << "As arrays sao iguais." << endl;
    }
    
}

//fim do Extra 01
//------------------------
//inicio do Extra 02

void Extra02()
{
    int array1[10] = {11,12,13,14,15,16,17,18,19,20};
    int array2[10] = {10,9,8,7,6,5,4,3,2,1};
    int resultados[10];

    for (int i = 0; i < 10; i++)
    {
        resultados[i] = array1[i]-array2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << resultados[i]<< " ";
    }
    cout << endl;
}

//fim do extra 02
//------------------------
//Main
int main(void)
{
    int x;
    printf("ED11 - Programa - v0.0\n\n");

    do
    {
        cout << "Metodo00 - 0" << endl;
        cout << "Metodo01 - 1" << endl;
        cout << "Metodo02 - 2" << endl;
        cout << "Metodo03 - 3" << endl;
        cout << "Metodo04 - 4" << endl;
        cout << "Metodo05 - 5" << endl;
        cout << "Metodo06 - 6" << endl;
        cout << "Metodo07 - 7" << endl;
        cout << "Metodo08 - 8" << endl;
        cout << "Metodo09 - 9" << endl;
        cout << "Metodo10 - 10" << endl;
        cout << "Extra 01 - 11" << endl;
        cout << "Extra 02 - 12" << endl;

        //estrutura switch
        cout << "Digite a opcao desejada: ";
        cin >> x;

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
            break;
        case 11:
            Extra01();
            break;
        case 12:
            Extra02();
            break;
        }
    } while (x != 0);
    //encerramento
    return 0;
}