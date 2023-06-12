#include <stdio.h>
#include <stdlib.h>

int *uniao(const int v1[], int n1, const int v2[], int n2, int *n3) {
    int *resultado = NULL;
    int i, j, k;

    // Encontra o tamanho máximo do vetor resultante
    int max_size = n1 + n2;

    // Aloca memória para o vetor resultante
    resultado = (int *)malloc(max_size * sizeof(int));

    if (resultado == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        *n3 = 0;
        return NULL;
    }

    // Copia os elementos de v1 para o vetor resultante
    for (i = 0; i < n1; i++) {
        resultado[i] = v1[i];
    }

    // Verifica se cada elemento de v2 já existe no vetor resultante
    for (j = 0; j < n2; j++) {
        int elemento = v2[j];
        int existe = 0;

        for (k = 0; k < *n3; k++) {
            if (resultado[k] == elemento) {
                existe = 1;
                break;
            }
        }

        // Se o elemento não existir, adiciona-o ao vetor resultante
        if (!existe) {
            resultado[*n3] = elemento;
            (*n3)++;
        }
    }

    return resultado;
}

int main() {
    int v1[] = {1, 2, 3, 4, 5};
    int n1 = 5;

    int v2[] = {4, 5, 6, 7, 8};
    int n2 = 5;

    int n3 = n1;

    int *resultado = uniao(v1, n1, v2, n2, &n3);

    if (resultado != NULL) {
        printf("Conjunto uniao: ");
        for (int i = 0; i < n3; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");

        free(resultado);
    }

    return 0;
}
