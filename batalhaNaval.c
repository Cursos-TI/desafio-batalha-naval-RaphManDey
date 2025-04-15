#include <stdio.h>

// Desafio Batalha Naval

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // Inicialização o tabuleiro
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tabuleiro[i][j] = 0;

    int navioH[3] = {3, 3, 3};
    int navioV[3] = {3, 3, 3};

    //linha horizontal(linhaH) e linha vertical(linhaV)
    int linhaH = 2, colunaH = 4;
    int linhaV = 5, colunaV = 1;

    int ColocarHorizontal = 1, ColocarVertical = 1;

    if (colunaH + 3 <= 10) {
        for (int i = 0; i < 3; i++)
            if (tabuleiro[linhaH][colunaH + i] != 0)
                ColocarHorizontal = 0;
    } else ColocarHorizontal = 0;

    if (linhaV + 3 <= 10) {
        for (int i = 0; i < 3; i++)
            if (tabuleiro[linhaV + i][colunaV] != 0)
                ColocarVertical = 0;
    } else ColocarVertical = 0;

    if (ColocarHorizontal)
        for (int i = 0; i < 3; i++)
            tabuleiro[linhaH][colunaH + i] = navioH[i];
    else
        printf("Navio horizontal inválido.\n");

    if (ColocarVertical)
        for (int i = 0; i < 3; i++)
            tabuleiro[linhaV + i][colunaV] = navioV[i];
    else
        printf("Navio vertical inválido.\n");

    // Exibir letras no topo
    printf("\n   A B C D E F G H I J\n");

    // Exibir tabuleiro com números na lateral
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i); // número da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
