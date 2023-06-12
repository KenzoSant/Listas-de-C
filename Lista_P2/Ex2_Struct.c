#include <stdio.h>

// Definição do tipo de registro Ponto
typedef struct {
    int x;
    int y;
} Ponto;

// Função para imprimir um ponto
void imprimirPonto(Ponto ponto) {
    printf("Ponto: (%d, %d)\n", ponto.x, ponto.y);
}

// Função para realizar a soma de dois pontos
Ponto somarPontos(Ponto ponto1, Ponto ponto2) {
    Ponto resultado;
    resultado.x = ponto1.x + ponto2.x;
    resultado.y = ponto1.y + ponto2.y;
    return resultado;
}

// Função para realizar a subtração de dois pontos
Ponto subtrairPontos(Ponto ponto1, Ponto ponto2) {
    Ponto resultado;
    resultado.x = ponto1.x - ponto2.x;
    resultado.y = ponto1.y - ponto2.y;
    return resultado;
}

// Função para realizar a multiplicação de um ponto por um escalar
Ponto multiplicarPorEscalar(Ponto ponto, int escalar) {
    Ponto resultado;
    resultado.x = ponto.x * escalar;
    resultado.y = ponto.y * escalar;
    return resultado;
}

int main() {
    Ponto pontos[2];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Digite as coordenadas do ponto %d:\n", i + 1);
        printf("x: ");
        scanf("%d", &pontos[i].x);
        printf("y: ");
        scanf("%d", &pontos[i].y);
    }

    for (i = 0; i < 2; i++) {
        imprimirPonto(pontos[i]);
    }

    Ponto soma = somarPontos(pontos[0], pontos[1]);
    printf("Soma dos pontos: ");
    imprimirPonto(soma);

    Ponto subtracao = subtrairPontos(pontos[0], pontos[1]);
    printf("Subtracao dos pontos: ");
    imprimirPonto(subtracao);

    int escalar;
    printf("Digite um valor escalar: ");
    scanf("%d", &escalar);
    Ponto multiplicacao = multiplicarPorEscalar(pontos[0], escalar);
    printf("Multiplicacao do ponto por um escalar: ");
    imprimirPonto(multiplicacao);

    return 0;
}
