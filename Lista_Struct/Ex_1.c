#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct Produto {
    char nome[80];
    double preco;
    int quantidade;
} Produto;

void ordenaPreco(Produto vet[], int n);
void ordenaQuant(Produto vet[], int n);

int main() {
    int i, n;
    Produto produtos[MAX_PRODUTOS];

    printf("Digite o número de produtos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o nome do produto %d: ", i + 1);
        scanf(" %[^\n]", produtos[i].nome);

        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%lf", &produtos[i].preco);

        printf("Digite a quantidade de itens em estoque do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade);
        printf("\n\n");
    }

    printf("\nProdutos ordenados por preço:\n");
    ordenaPreco(produtos, n);
    for (i = 0; i < n; i++) {
        printf("%s - R$ %.2f - %d unidades\n", produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    }

    printf("\nProdutos ordenados por quantidade:\n");
    ordenaQuant(produtos, n);
    for (i = 0; i < n; i++) {
        printf("%s - R$ %.2f - %d unidades\n", produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    }

    return 0;
}

void ordenaPreco(Produto vet[], int n) {
    int i, j;
    Produto temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (vet[i].preco > vet[j].preco) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}

void ordenaQuant(Produto vet[], int n) {
    int i, j;
    Produto temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (vet[i].quantidade > vet[j].quantidade) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}
