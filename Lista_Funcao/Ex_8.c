#include <stdio.h>
#include <stdlib.h>

#define MAX 30

void calcularTransposta(double Matriz_Entrada[][MAX], double Matriz_Saida[][MAX], int n) {
    int i=0,j=0;

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
           Matriz_Saida[j][i] = Matriz_Entrada[i][j];
        }
    }
}

int main() {
    double Matriz_Entrada[MAX][MAX];
    double Matriz_Saida[MAX][MAX];
    int n=0, i=0, j=0;

    printf("Digite a dimensao da matriz: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
           printf("\n Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%lf", &Matriz_Entrada[i][j]);
        }
    }

    printf("\nMatriz Entrada:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
           printf("%.0lf ",Matriz_Entrada[i][j]);
        }
        printf("\n");
    }

    calcularTransposta(Matriz_Entrada, Matriz_Saida, n);

    printf("\nMatriz Saida:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
           printf("%.0lf ",Matriz_Saida[i][j]);
        }
        printf("\n");
    }

    return 0;
}
