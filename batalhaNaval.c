#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[10][10];

    // Inicializando o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // Tamanho dos navios
    int tamanhoNavio = 3;

    // Vetores dos navios (representando 3 posições cada)
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Posição inicial do navio horizontal
    int linhaH = 2, colunaH = 1;
    for (int i = 0; i < tamanhoNavio; i++)
    {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // Preencher navio horizontal no tabuleiro
    int linhaV = 5, colunaV = 7;
    for (int i = 0; i < tamanhoNavio; i++)
    {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // --- Exibição do Tabuleiro ---

    // Cabeçalho de colunas
    printf("    ");
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", j);
    }
    printf("\n");

    printf("   ---------------------\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d | ", i); // índice da linha
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
