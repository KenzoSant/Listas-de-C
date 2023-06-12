#include <stdio.h>
#include <math.h>

void menor_base_log(int n, int *b, int *k) {
    for (*b = 2; *b <= n; (*b)++) {
        for (*k = 1; *k <= n; (*k)++) {
            int valor = (int)pow(*b, *k);
            if (valor == n) {
                return;
            }
            else if (valor > n) {
                break;
            }
        }
    }
    *b = 0;
    *k = 0;
}

int main() {
    int n, b, k;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    if (n >= 0) {
        menor_base_log(n, &b, &k);
        if (b != 0 && k != 0) {
            printf("O menor valor de b tal que b^k = %d eh %d.\n", n, b);
            printf("O valor de k correspondente eh %d.\n", k);
        } else {
            printf("Nenhum valor de b e k encontrado para b");
        }
    }

    return 0;
}



