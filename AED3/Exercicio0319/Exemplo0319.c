#include <stdio.h>

int main()
{
//identificacao
    printf("Exercicio0319 - Programa - v0.0");
    printf("\nAutor: Marcio Emanuel Batista de Padua");
    printf("\n");
//entrada de dados
double Valor1, Valor2;
int Valor1Int, Valor2Int, X, contagem1=0;
printf("Digite o menor valor: ");
scanf("%lf", &Valor1);
printf("Digite o valor maior para definir um intervalo: ");
scanf("%lf", &Valor2);
//Type Casting
 Valor1Int = (int)Valor1;
 Valor2Int = (int)Valor2;
 //estrutura de repeticao
for(Valor1Int=Valor1Int;Valor1Int<=Valor2Int;Valor1Int++)
{
 X=Valor1Int%2;
    if(X!=0)
    {
        contagem1=contagem1+1;
        printf("%d\t%d\t%s", contagem1, Valor1Int, "Eh numero impar\n");
    }

}
//encerramento
    printf("Pressione ENTER para sair.");
    fflush(stdin);
    getchar();
return 0;
}
