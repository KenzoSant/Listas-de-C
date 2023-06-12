#include <stdio.h>
#include <stdlib.h>

int *somente_pares(int n, int v[], int *npares) {
    int quant = 0, i = 0, j = 0;

    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            quant++;
        }
    }

    int *vaux = malloc(quant * sizeof(int));

    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            vaux[j] = v[i];
            j++;
        }
    }

    *npares = quant;
    return vaux;
}


int main() {
    int n = 7;
    int v[] = {1, 2, 3, 4, 5, 6, 7};
    int npares = 0;

    int *resultado = somente_pares(n, v, &npares);

    printf("Números pares: ");
    for (int i = 0; i < npares; i++) {
        printf("%d ", resultado[i]);
    }

    free(resultado);
    return 0;
}
