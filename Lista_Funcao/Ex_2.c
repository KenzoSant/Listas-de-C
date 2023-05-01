#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIVISORES 100

int amigos(int a, int b){

    int divisores[MAX_DIVISORES], cont_divisoresA = 0, cont_divisoresB =0;
    int somaA=0,somaB=0,i,resultado;

    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            divisores[cont_divisoresA] = i;
            cont_divisoresA++;
        }
    }

    printf("\nDivisores armazenados no vetor: ");
    for (i = 0; i < cont_divisoresA; i++) {
        somaA += divisores[i-1];
        printf("%d ", divisores[i-1]);
    }

    memset(divisores, 0, sizeof(divisores));

    for (i = 1; i <= b; i++) {
        if (b % i == 0) {
            divisores[cont_divisoresB] = i;
            cont_divisoresB++;
        }
    }

    printf("\nDivisores armazenados no vetor: ");
    for (i = 0; i < cont_divisoresB; i++) {
        somaB += divisores[i-1];
        printf("%d ", divisores[i-1]);
    }

    printf("\n%d",somaA);
    printf("\n%d",somaB);

    if(somaB==a){
        resultado=1;
    }else{
        resultado=0;
    }

    return resultado;
}

int main() {

    int resultado,numeroA,numeroB;

    printf("Digite um numero A : ");
    scanf("%d", &numeroA);

    printf("Digite um numero B : ");
    scanf("%d", &numeroB);

    resultado = amigos(numeroA,numeroB);

    printf("\n%d",resultado);

    return 0;
}
