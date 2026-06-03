#include <stdio.h>
#include "function_tabuleiro.c"

int main() 
{
    int erros = 0;

    char tabuleiro_teste[3][3] = {{0}};
    char *argv_fake[] = {"./tabuleiro-ox", "OOO", "XXX", "OXO"};
    preencher_tabuleiro_argumentos(tabuleiro_teste, 4, argv_fake);

    if (tabuleiro_teste[0][0] != 'O' || tabuleiro_teste[1][0] != 'X' || tabuleiro_teste[2][2] != 'O') 
    {
        erros++;
    }

    if (erros == 0) 
    {
        printf("Todos os testes de tabuleiro-ox: PASSOU\n");
    } else {
        printf("Erro nos testes: %d falha(s)\n", erros);
    }

    printf("\nFeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
    return 0;
}