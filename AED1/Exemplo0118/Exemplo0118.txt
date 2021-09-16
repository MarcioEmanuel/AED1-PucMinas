#include <stdio.h>

int main (int argc, char* argv[]) {
printf("\n Exemplo0118 - Programa = v0.0");
printf("\n Autor: Marcio Emanuel Batista de Padua");
printf("\n");

int C, L, H, Volume;

printf("\n Digite o valor do comprimento: ");
scanf("%i", &C);
printf("\n Digite o valor da largura: ");
scanf("%i", &L);
printf("\n Digite o valor da altura: ");
scanf("%i", &H);

Volume = C*L*H;

printf("\n O volume do Paralelepipedo e de: %i centimetros cubicos", Volume);

printf("\n Pressione ENTER para sair.");
fflush(stdin);
getchar();

return 0;
}