#include <stdio.h>
#include <stdlib.h>

int *removerElemento(int vetor[], int *size, int *maxSize, int elemento) {
    int i, j;

    // Procura o elemento no vetor
    for (i = 0; i < *size; i++) {
        if (vetor[i] == elemento) {
            // Desloca os elementos � direita do elemento a ser removido
            for (j = i; j < (*size - 1); j++) {
                vetor[j] = vetor[j + 1];
            }

            (*size)--; // Atualiza o tamanho

            // Verifica se o tamanho do vetor precisa ser ajustado
            if (*size < (*maxSize / 2)) {
                *maxSize = *maxSize / 2;

                // Realoca o vetor com o novo tamanho
                int *novoVetor = (int *)realloc(vetor, (*maxSize) * sizeof(int));

                if (novoVetor == NULL) {
                    printf("Erro: Falha na realoca��o de mem�ria.\n");
                    return vetor;
                }

                vetor = novoVetor; // Atualiza o ponteiro do vetor
            }

            break;
        }
    }

    return vetor;
}

int main() {
    int maxSize = 10; // Tamanho m�ximo inicial do vetor
    int size = 7;     // Tamanho atual do vetor

    int *vetor = (int *)malloc(maxSize * sizeof(int));

    if (vetor == NULL) {
        printf("Erro: Falha na aloca��o de mem�ria.\n");
        return 0;
    }

    // Inicializa o vetor
    for (int i = 0; i < size; i++) {
        vetor[i] = i + 1;
    }

    // Imprime o vetor antes da remo��o
    printf("Vetor antes da remo��o: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Remove o elemento 3 do vetor
    vetor = removerElemento(vetor, &size, &maxSize, 3);

    // Imprime o vetor depois da remo��o
    printf("Vetor depois da remo��o: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
