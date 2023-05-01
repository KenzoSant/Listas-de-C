#include <stdio.h>

int solucao(int mat[9][9]);

int main() {
    int mat[9][9] = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };

    int resultado = solucao(mat);
        if (resultado == 1) {
            printf("A matriz fornecida é uma solução válida para um jogo Sudoku.\n");
        } else {
            printf("A matriz fornecida não é uma solução válida para um jogo Sudoku.\n");
        }
    return 0;
}

int solucao(int mat[9][9]) {
    int i, j, k, l, num, count;

    // Verifica se cada linha não contém números repetidos
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            num = mat[i][j];
            for (k = j + 1; k < 9; k++) {
                if (num == mat[i][k]) {
                    return 0; // Encontrou número repetido
                }
            }
        }
    }

    // Verifica se cada coluna não contém números repetidos
    for (j = 0; j < 9; j++) {
        for (i = 0; i < 9; i++) {
            num = mat[i][j];
            for (k = i + 1; k < 9; k++) {
                if (num == mat[k][j]) {
                    return 0; // Encontrou número repetido
                }
            }
        }
    }

    // Verifica se cada quadrado não contém números repetidos
    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            for (num = 1; num <= 9; num++) {
                count = 0;
                for (k = 0; k < 3; k++) {
                    for (l = 0; l < 3; l++) {
                        if (mat[i+k][j+l] == num) {
                            count++;
                        }
                    }
                }
                if (count != 1) {
                    return 0; // Encontrou número repetido ou ausente
                }
            }
        }
    }

    return 1; // Não encontrou números repetidos, solução é válida
}

