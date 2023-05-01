#include <stdio.h>
#include <stdlib.h>

#define MAX 30

int magico(int mat[30][30], int n) {

    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;
    int i, j;

    // Calcular soma da diagonal principal e diagonal secundária
    for (i = 0; i < n; i++) {
        somaDiagonalPrincipal += mat[i][i];
        somaDiagonalSecundaria += mat[i][n - i - 1];
    }

    // Verificar se as somas da diagonal principal e diagonal secundária são iguais
    if (somaDiagonalPrincipal != somaDiagonalSecundaria) {
        return 0; // não é um quadrado mágico
    }

    // Verificar somas das linhas e colunas
    for (i = 0; i < n; i++) {
        int somaLinha = 0;
        int somaColuna = 0;
        for (j = 0; j < n; j++) {
            somaLinha += mat[i][j]; // soma da linha i
            somaColuna += mat[j][i]; // soma da coluna i
        }
        if (somaLinha != somaDiagonalPrincipal || somaColuna != somaDiagonalPrincipal) {
            return 0; // não é um quadrado mágico
        }
    }

    return 1; // é um quadrado mágico
}

int main() {
    int Matriz_Entrada[MAX][MAX];
    int n = 0, i = 0, j = 0;

    printf("Digite a dimensao da matriz: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\n Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &Matriz_Entrada[i][j]);
        }
    }

    printf("\nMatriz Entrada:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", Matriz_Entrada[i][j]);
        }
        printf("\n");
    }

    int soma = magico(Matriz_Entrada, n);

    if(soma==1){
        printf("Matriz Magica");
    }else{
        printf("Matriz NAO Magica");
    }

    return 0;
}
