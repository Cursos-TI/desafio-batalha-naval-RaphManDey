#include <stdio.h>

// Desafio Batalha Naval

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // Inicialização do tabuleiro
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tabuleiro[i][j] = 0;

            //Navios
    int navio[3] = {3, 3, 3};

    //linha horizontal(linhaH) e linha vertical(linhaV) e Posicionamento Horizontal e Vertical
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
            tabuleiro[linhaH][colunaH + i] = navio[i];
    else
        printf("Navio horizontal inválido.\n");
    
        if (linhaV + 3 <= 10) {
            for (int i = 0; i < 3; i++)
                if (tabuleiro[linhaV + i][colunaV] != 0)
                    ColocarVertical = 0;
        } else ColocarVertical = 0;
    
        if (ColocarVertical)
            for (int i = 0; i < 3; i++)
                tabuleiro[linhaV + i][colunaV] = navio[i];
        else
            printf("Navio vertical inválido.\n");


// Primeiro Navio Diagonal
int linhaPrimeiro = 0, colunaPrimeiro = 0;
if (linhaPrimeiro + 2 < 10 && colunaPrimeiro + 2 < 10 &&
    tabuleiro[linhaPrimeiro][colunaPrimeiro] == 0 &&
    tabuleiro[linhaPrimeiro + 1][colunaPrimeiro + 1] == 0 &&
    tabuleiro[linhaPrimeiro + 2][colunaPrimeiro + 2] == 0) {

    for (int i = 0; i < 3; i++)
        tabuleiro[linhaPrimeiro + i][colunaPrimeiro + i] = navio[i];
} else {
    printf("Navio diagonal principal inválido.\n");
}

// Secundo Navio Diagonal
int linhaSecundaria = 0, colunaSecundaria = 9;
if (linhaSecundaria + 2 < 10 && colunaSecundaria - 2 >= 0 &&
    tabuleiro[linhaSecundaria][colunaSecundaria] == 0 &&
    tabuleiro[linhaSecundaria + 1][colunaSecundaria - 1] == 0 &&
    tabuleiro[linhaSecundaria + 2][colunaSecundaria - 2] == 0) {

    for (int i = 0; i < 3; i++)
        tabuleiro[linhaSecundaria + i][colunaSecundaria - i] = navio[i];
} else {
    printf("Navio diagonal secundária inválido.\n");
}

    // Exibição do tabuleiro
    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("%c ", linha[i]);
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

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
