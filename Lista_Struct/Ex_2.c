#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

void ordena(struct Data vet[], int n);

int main() {
    int i, n;
    Data data[MAX];

    printf("Digite o número de datas: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o dia da %d data: ", i + 1);
        scanf(" %d", &data[i].dia);

        printf("Digite o mes da %d data: ", i + 1);
        scanf("%d", &data[i].mes);

        printf("Digite o ano da %d data: ", i + 1);
        scanf("%d", &data[i].ano);
        printf("\n\n");
    }

    printf("\nDatas ordenadas:\n");
    ordena(data, n);
    for (i = 0; i < n; i++) {
        printf("%d / %d / %d \n", data[i].dia, data[i].mes, data[i].ano);
    }

    return 0;
}

void ordena(Data vet[], int n) {
    int i, j;
    Data temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (vet[i].dia > vet[j].dia) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
            if (vet[i].mes > vet[j].mes) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
            if (vet[i].ano > vet[j].ano) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}
