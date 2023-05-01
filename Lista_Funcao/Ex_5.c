#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*int pitagorico(int n) {
    int val1, val2, i, j, resultado = 0, soma;

    for(int i=1, j=2; i<10; i++, j++) {
        val1 = pow(j, 2);
        val2 = pow(i, 2);
        soma = val1 + val2;
        printf(" %d%d -",i,j);

        if(soma == n) {
            resultado = 1;
            break;
        }
        if(resultado == 1) {
            break;
        }
    }

    return resultado;

}*/

int pitagorico(int n) {
    int val1, val2, i, j, resultado = 0, soma;

    for(i = 1; i < n; i++){
    for(j = i + 1; j < n; j++){
        val1 = pow(j, 2);
        val2 = pow(i, 2);
        soma = val1 + val2;
        if(soma == n){
            resultado = 1;
            break;
        }
    }
    if(resultado == 1){
        break;
    }
}

    return resultado;
}

int main()
{
    int numeroN, resultado;

    printf("Digite um Numero:");
    scanf("%d", &numeroN);

    resultado = pitagorico(numeroN);

    if(resultado == 1){
        printf("\nPitagorico: %d", resultado);
    } else {
        printf("\nNao Pitagorico: %d", resultado);
    }

    return 0;
}
