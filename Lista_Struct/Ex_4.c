#include <stdio.h>

typedef struct Pessoa {
    int rg;
    int cpf;
    char nome[80];
} Pessoa;

Pessoa cadastro[100];

int buscaBinariaPorRG(int rg, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (cadastro[meio].rg == rg) {
            return meio;  // Encontrou o RG, retorna o índice
        } else if (cadastro[meio].rg < rg) {
            inicio = meio + 1;  // O RG procurado está na metade direita
        } else {
            fim = meio - 1;  // O RG procurado está na metade esquerda
        }
    }

    return -1;  // RG não encontrado
}

int main() {
    // Exemplo de uso da função de busca binária
    int tamanho = 5;
    cadastro[0].rg = 123;
    cadastro[1].rg = 456;
    cadastro[2].rg = 789;
    cadastro[3].rg = 1111;
    cadastro[4].rg = 2222;

    int rgProcurado =1111;
    int indice = buscaBinariaPorRG(rgProcurado, tamanho);

    if (indice != -1) {
        printf("Pessoa encontrada no índice %d\n", indice);
    } else {
        printf("Pessoa com RG %d não encontrada\n", rgProcurado);
    }

    return 0;
}
