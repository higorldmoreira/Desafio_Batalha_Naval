#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10
#define TAM_NAVIO 3
#define HABILIDADE 5
#define NAVIO 3

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para posicionar navios no tabuleiro
void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int direcao) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (direcao == 0) { // Horizontal
            tabuleiro[linha][coluna + i] = NAVIO;
        } else if (direcao == 1) { // Vertical
            tabuleiro[linha + i][coluna] = NAVIO;
        } else if (direcao == 2) { // Diagonal ↘
            tabuleiro[linha + i][coluna + i] = NAVIO;
        } else if (direcao == 3) { // Diagonal ↙
            tabuleiro[linha - i][coluna - i] = NAVIO;
        }
    }
}

// Função para aplicar habilidades no tabuleiro
void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int origem_x, int origem_y, int tipo) {
    if (tipo == 0) { // Cone
        for (int i = 0; i < 3; i++) {
            for (int j = -i; j <= i; j++) {
                if (origem_x + i < TAMANHO && origem_y + j >= 0 && origem_y + j < TAMANHO) {
                    tabuleiro[origem_x + i][origem_y + j] = HABILIDADE;
                }
            }
        }
    } else if (tipo == 1) { // Cruz
        for (int i = -2; i <= 2; i++) {
            if (origem_x + i >= 0 && origem_x + i < TAMANHO) {
                tabuleiro[origem_x + i][origem_y] = HABILIDADE;
            }
            if (origem_y + i >= 0 && origem_y + i < TAMANHO) {
                tabuleiro[origem_x][origem_y + i] = HABILIDADE;
            }
        }
    } else if (tipo == 2) { // Octaedro
        for (int i = -2; i <= 2; i++) {
            for (int j = -2 + abs(i); j <= 2 - abs(i); j++) {
                if (origem_x + i >= 0 && origem_x + i < TAMANHO && origem_y + j >= 0 && origem_y + j < TAMANHO) {
                    tabuleiro[origem_x + i][origem_y + j] = HABILIDADE;
                }
            }
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("Tabuleiro de Batalha Naval com Habilidades:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    
    inicializarTabuleiro(tabuleiro);
    
    // Posicionamento dos navios
    posicionarNavio(tabuleiro, 2, 3, 0); // Horizontal
    posicionarNavio(tabuleiro, 5, 6, 1); // Vertical
    posicionarNavio(tabuleiro, 1, 1, 2); // Diagonal ↘
    posicionarNavio(tabuleiro, 7, 7, 3); // Diagonal ↙
    
    // Aplicação das habilidades
    aplicarHabilidade(tabuleiro, 3, 5, 0); // Cone
    aplicarHabilidade(tabuleiro, 6, 4, 1); // Cruz
    aplicarHabilidade(tabuleiro, 5, 7, 2); // Octaedro
    
    // Exibir tabuleiro final
    exibirTabuleiro(tabuleiro);
    
    return 0;
}