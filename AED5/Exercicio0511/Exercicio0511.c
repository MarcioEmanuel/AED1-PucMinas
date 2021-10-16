void Funcao1()
{
     int y;
     printf("Digite um numero: ");
     scanf("%d", &y);
     Met1(y);
}

void Met1(int numero)
{
    int i;
    int z;
    for(i = 1; i <= numero; i++){

        z = i * 2;

            printf("O valor %d e multiplo de 2!\n", z);
    }
system("pause");
}
int main()
{
//identificacao
    printf("EXercicios ED5 - ED0511 - v0.0. - 10 / 09 / 2019\n");
    printf("Author: Marcio Emanuel Batista de Padua\n");
    printf("Matricula: 686391\n\n");
//chamar a funcao
    printf("Entrar com a Funcao 1: ");

    int x=0;
    scanf("%d", &x);
    switch(x){
    case 1:
        Funcao1();
        break;
    default:
        printf("ERRO: Valor nao atribuido!\n");
        system("pause");
        break;
    }
return 0;
}