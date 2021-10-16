#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;
//Classe
class contato1
{
public:
    string nome[];

public:
    bool readNome(string nome)
    {
        int cont = 0;
        for (int i = 0; i < strlen(nome); i++)
        {
            if(nome[i] >= 'a' && nome[i] <= 'z' || (nome[i] >= 'A' && nome[i] <= 'Z'))
            {
                cont++;
            }else
            {
                cont = 0;
                break;
            }
        }

        if(cont != 0)
        {
            return 1;
        }else
        {
            return 0;
        }
    }
};
//Fim Da Classe


//inicio do metodo00
void Metodo00(void)
{
    cout << "Fim do programa" << endl;
}
//Fim do Metodo00
//------------------------
//inicio do metodo01


void Metodo01()
{
    contato1 n;
    int result = 0;
        cout << "Digite um nome";
        getline(cin, n.nome);

    //chamar o metodo da classe
    result = n.readNome(n.nome);
    
    if(result == 1)
    {
        cout << "A string contem caracteres" << endl;
    }else
    {
        cout << "A string NAO contem caracteres" << endl;
    }
}
//fim do metodo01
//------------------------
//inicio do metodo02


void Metodo02()
{

}
//fim do metodo02
//------------------------
//inicio do metodo03


void Metodo03()
{

}
//fim do metodo03
//------------------------
//inicio do metodo04


void Metodo04()
{

}
//fim do metodo04
//------------------------
//inicio do metodo 05


void Metodo05()
{

}
//fim do metodo05
//------------------------
//inicio do metodo06


void Metodo06()
{

}
//fim do metodo06
//------------------------
//inicio do metodo07


void Metodo07()
{

}
//fim do metodo07
//------------------------
//inicio do metodo08

void Metodo08()
{

}
//fim do metodo08
//------------------------
//inicio do metodo 09

void Metodo09()
{

}
//fim do metodo09
//------------------------
//inicio do metodo 10

void Metodo10()
{

}
//fim do metodo 10
//------------------------

//Main
int main(void)
{
    int x;
    cout <<"ED13 - Programa - v0.0\n\n" << endl;
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