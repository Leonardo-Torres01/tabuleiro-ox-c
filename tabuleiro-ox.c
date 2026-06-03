#include <stdio.h>
#include <stdlib.h>
#include "function_tabuleiro.c"

int main(int argc, char *argv[]) 
{
    char tabuleiro[3][3] = {{0}};

    if (argc > 1) 
    {
        preencher_tabuleiro_argumentos(tabuleiro, argc, argv);
    } 
    else 
    {
     for (int i = 0; i < 3; i++) 
     {
     for (int j = 0; j < 3; j++) 
     {
    char temp;
     printf("Digite o caractere da linha %d coluna %d: ", i + 1, j + 1);
     scanf(" %c", &temp);

     while (!validar_caractere_tabuleiro(temp)) 
     {
     printf("caractere invalido\n");
     printf("Digite o caractere da linha %d coluna %d: ", i + 1, j + 1);
     scanf(" %c", &temp);
    }
     tabuleiro[i][j] = temp;
     }
    }
    }
    printf("\n--- TABULEIRO ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nFeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
    return 0;
}