#include <stdio.h>
#include <stdlib.h>

#define MAX 30

void multiplica(double mat1[MAX][MAX], double mat2[MAX][MAX], double matRes[MAX][MAX], int n){
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matRes[i][j] = mat1[i][j] * mat2[i][j];
        }
    }

    printf("\nMatriz Res:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.0lf ", matRes[i][j]);
        }
        printf("\n");
    }

}

int main() {
    double matriz_1[MAX][MAX],matriz_2[MAX][MAX],matriz_3[MAX][MAX];
    int n = 0, i = 0, j = 0;

    printf("Digite a dimensao das matrizes: ");
    scanf("%d", &n);

    printf("\nMatriz 1\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\n Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%lf", &matriz_1[i][j]);
        }
    }

    printf("\nMatriz 2\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\n Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%lf", &matriz_2[i][j]);
        }
    }

    printf("\nMatriz 1:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.0lf ", matriz_1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.0lf ", matriz_2[i][j]);
        }
        printf("\n");
    }

    multiplica(matriz_1,matriz_2,matriz_3, n);

    return 0;
}
