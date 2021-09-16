#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

//inicio do metodo00
void Metodo00(void)
{
    cout << "Fim do programa" << endl;
}
//Fim do Metodo00
//------------------------
//inicio do metodo01

class randon
{
};

class Variaveis
{
public:
    int x, y;
    int qtd;
    int controle;
};

void Metodo01()
{
    Variaveis valor;

    cout << "Digite quantas linhas tera a matriz: ";
    cin >> valor.x;
    cout << "Digite quantas colunas tera a matriz: ";
    cin >> valor.y;
    //criar a matriz
    int matrix[valor.x][valor.y];
    int qtd = valor.x * valor.y;
    //abrir arquivo
    ofstream arquivo;
    arquivo.open("MATRIX1.txt");
    arquivo << "A matriz tera " << qtd << " numeros aleatorios;" << endl;
    // gerar aleatorios dentro da matriz
    for (int i = 0; i < valor.x; i++)
    {
        cout << endl;
        arquivo << endl;
        for (int j = 0; j < valor.y; j++)
        {
            matrix[i][j] = valor.x + (rand() % 5);
            cout << matrix[i][j] << " ";
            arquivo << matrix[i][j] << " ";
        }
    }
    system("pause");
}
//fim do metodo01
//------------------------
//inicio do metodo02

class Const
{
public:
    int x;
    const int j = 2;

    int mult(int y)
    {
        x = j * y;

        return x;
    }
};

void Funcao02(int x, int y)
{
    Const operar;
    fstream arquivo2;
    arquivo2.open("MatrizEscalar.txt", ios::in);
    int matrix[x][y];
    int aux = 0;
    //definir valores da matriz
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arquivo2 >> aux;
            matrix[i][j] = operar.mult(aux);
        }
    }
    for (int i = 0; i < x; i++)
    {
        cout << endl;
        for (int j = 0; j < y; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
    arquivo2.close();
    system("pause");
}

void Metodo02()
{
    int x, y;

    cout << "Digite quantas linhas tera a matriz: ";
    cin >> x;
    cout << "Digite quantas colunas tera a matriz: ";
    cin >> y;
    //funcao para escalar a matriz
    Funcao02(x, y);
}
//fim do metodo02
//------------------------
//inicio do metodo03

class Identidade
{
public:
    int n;

    bool matriz(int n)
    {
        int cont = 0;
        int aux = 0;
        int matrix[n][n];
        //abrir arquivo
        fstream arquivo3;
        arquivo3.open("MatrizIdentidade.txt", ios::in);
        //definir valores para a matriz
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                arquivo3 >> matrix[i][j];
                cout << matrix[i][j];
            }
        }
        cout << endl;
        //Verificar matriz
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < i+1; j++)
            {
                if (matrix[i][j] != 1)
                {
                    cont ++;
                    break;
                    return 0;
                }
            }
        }
        if(cont == 0)
        {
        return 1;            
        }
        //fechar arquivo
        arquivo3.close();
    }
};

void Metodo03()
{
    //entrada de dados e variaveis
    Identidade v;
    int result;
    cout << "Digite um valor para definir as dimencoes da matriz quadrada: ";
    cin >> v.n;
    //chamar classe
    result = v.matriz(v.n);
    if(result == 1)
    {
        cout << endl;
        cout << "Essa matriz e identidade." << endl; 
    }else
    {
        cout << endl;
        cout << "Essa matriz NAO e identidade." << endl;
    }
    system("pause");
}
//fim do metodo03
//------------------------
//inicio do metodo04

class Iguais
{
public:
    int n;

    bool Igualdade(int n)
    {
        int cont = 0;
        int matrix[n][n];
        int matrix2[n][n];
        int total = n * n;
        //abrir arquivos
        fstream arquivo41;
        arquivo41.open("MatrizIgual1.txt", ios::in);
        fstream arquivo42;
        arquivo42.open("MatrizIgual2.txt", ios::in);
        //Passar valores para as matrizes
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                arquivo41 >> matrix[i][j];
                cout << matrix[i][j];
                arquivo42 >> matrix2[i][j];
            }
        }
        //mostrar a segunda matriz na tela
        cout << endl;
        for(int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                cout << matrix2[i][j];
            }
        }
        cout << endl;
        //Verificar igualdade das matrizes
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == matrix2[i][j])
                {
                    cont ++;
                }else
                {
                    break;
                }
            }
        }
        if(cont == total)
        {
            return 1;            
        }else
        {
            return 0;
        }
        //fechar arquivo
        arquivo41.close();
        arquivo42.close();
    }
};

void Metodo04()
{
    Iguais v;
    int result;
    cout << "Digite um valor para definir as dimencoes da matriz quadrada: ";
    cin >> v.n;
    //chamar classe
    result = v.Igualdade(v.n);
    if(result == 1)
    {
        cout << endl;
        cout << "Essas matrizes sao iguais." << endl; 
    }else
    {
        cout << endl;
        cout << "Essas matriz NAO sao iguais." << endl;
    }
    system("pause");
}
//fim do metodo04
//------------------------
//inicio do metodo 05

class Soma
{
public:
    int n;

    void Somar(int n)
    {
        int matrix[n][n];
        int matrix2[n][n];
        int matrixResult[n][n];
        //abrir arquivos
        fstream arquivo51;
        arquivo51.open("MatrizSoma1.txt", ios::in);
        fstream arquivo52;
        arquivo52.open("MatrizSoma2.txt", ios::in);
        //Passar valores para as matrizes
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                arquivo51 >> matrix[i][j];
                cout << matrix[i][j];
                arquivo52 >> matrix2[i][j];
            }
        }
        //mostrar a segunda matriz na tela
        cout << endl;
        for(int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                cout << matrix2[i][j];
            }
        }
        cout << endl;
        //Somar as matrizes
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrixResult[i][j] = matrix[i][j] + matrix2[i][j];
            }
        }
        //mostrar valor da soma das matrizes na tela
        for(int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                cout << matrixResult[i][j];
            }
        }        
        //fechar arquivo
        arquivo51.close();
        arquivo52.close();
    }
};

void Metodo05()
{
    Soma v;
    int result;
    cout << "Digite um valor para definir as dimencoes da matriz quadrada: ";
    cin >> v.n;
    //chamar classe
    v.Somar(v.n);
    cout << endl;
    system("pause");
}
//fim do metodo05
//------------------------
//inicio do metodo06

class SomaConst
{
public:
    int n;

    void SomarConst(int n)
    {
        const int y = 5;
        int matrix[n][n];
        //abrir arquivos
        fstream arquivo61;
        arquivo61.open("Constante1.txt", ios::in);
        //Passar valor para a matriz
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                arquivo61 >> matrix[i][j];
                cout << matrix[i][j];
            }
        }
        cout << endl;
        //Somar a matriz
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = matrix[i][j] + (matrix[i][j] * 5);
            }
        }
        //mostrar valor da soma das matrizes na tela
        for(int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j];
            }
        }        
        //fechar arquivo
        arquivo61.close();
    }
};

void Metodo06()
{
    SomaConst v;
    cout << "Digite um valor para definir as dimencoes da matriz quadrada: ";
    cin >> v.n;
    //chamar classe
    v.SomarConst(v.n);
    cout << endl;
    system("pause");
}
//fim do metodo06
//------------------------
//inicio do metodo07

class SomaConst2
{
public:
    int n;

    void SomarConst2(int n)
    {
        const int y = 5;
        int matrix[n][n];
        //abrir arquivos
        fstream arquivo71;
        arquivo71.open("Constante2.txt", ios::in);
        //Passar valor para a matriz
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                arquivo71 >> matrix[i][j];
                cout << matrix[i][j];
            }
        }
        cout << endl;
        //Somar a matriz
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                matrix[i][j] = matrix[i][j] - (matrix[i][j] * 5);
            }
        }
        //mostrar valor da soma das matrizes na tela
        for(int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j];
            }
        }        
        //fechar arquivo
        arquivo71.close();
    }
};

void Metodo07()
{
    SomaConst2 v;
    cout << "Digite um valor para definir as dimencoes da matriz quadrada: ";
    cin >> v.n;
    //chamar classe
    v.SomarConst2(v.n);
    cout << endl;
    system("pause");
}
//fim do metodo07
//------------------------
//inicio do metodo08

class Procura
{
public:
    int n;
    int x;
    int linha = 0;
    int Procurar(int n, int x)
    {
        int matrix[n][n];
        //abrir arquivos
        fstream arquivo81;
        arquivo81.open("Procurar.txt", ios::in);
        //Passar valor para a matriz
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                arquivo81 >> matrix[i][j];
                cout << matrix[i][j];
            }
        }
        cout << endl;
        //procurar valor
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == x)
                {
                    linha = i;
                    break;
                }
            }
        }
        return linha;
    }
};

void Metodo08()
{
    Procura v;
    int result = 0;
    cout << "Digite um valor para definir as dimencoes da matriz quadrada: ";
    cin >> v.n;
    cout << "Digite o valor que deseja procurar: ";
    cin >> v.x;
    //chamar classe
    result = v.Procurar(v.n, v.x);
    cout << "O valor " << v.x << " esta na linha " << result << " da matriz!" << endl;
    cout << endl;
    system("pause");
}
//fim do metodo08
//------------------------
//inicio do metodo 09

class Procura2
{
public:
    int n;
    int x;
    int linha = 0;

    int Procurar2(int n, int x)
    {
        int matrix[n][n];
        //abrir arquivos
        fstream arquivo81;
        arquivo81.open("Procurar.txt", ios::in);
        //Passar valor para a matriz
        for (int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                arquivo81 >> matrix[i][j];
                cout << matrix[i][j];
            }
        }
        cout << endl;
        //procurar valor
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == x)
                {
                    linha = j;
                    break;
                }
            }
        }
        return linha;
    }
};

void Metodo09()
{
    Procura2 v;
    int result = 0;
    cout << "Digite um valor para definir as dimencoes da matriz quadrada: ";
    cin >> v.n;
    cout << "Digite o valor que deseja procurar: ";
    cin >> v.x;
    //chamar classe
    result = v.Procurar2(v.n, v.x);
    cout << "O valor " << v.x << " esta na coluna " << result << " da matriz!" << endl;
    cout << endl;
    system("pause");
}
//fim do metodo09
//------------------------
//inicio do metodo 10

void Metodo10()
{
    cout << "Divida" << endl;
}
//fim do metodo 10
//------------------------

//Main
int main(void)
{
    int x;
    cout <<"ED12 - Programa - v0.0\n\n" << endl;
    cout << endl;
    cout << "Autor: Marcio Emanuel Batista de Padua" << endl;
    cout << "Matricula: 686391" << endl;

    do
    {
        cout << endl;
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
        }
    } while (x != 0);
    //encerramento
    return 0;
}