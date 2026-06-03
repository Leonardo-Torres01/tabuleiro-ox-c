#include <stdio.h>

int validar_caractere_tabuleiro(char c) 
{
    return (c == 'X' || c == 'O');
}

void preencher_tabuleiro_argumentos(char tabuleiro[3][3], int argc, char *argv[]) 
{
    int l = 0, c = 0;
   for (int i = 1; i < argc; i++)
{
   for (int j = 0; argv[i][j] != '\0'; j++) 
{
   char caractere = argv[i][j];

    if (validar_caractere_tabuleiro(caractere)) 
            {
                tabuleiro[l][c] = caractere;
                c++;
                if (c == 3)     
                {
                    c = 0;
                    l++;
                }
                if (l == 3) return;
            }
        }
    }
}