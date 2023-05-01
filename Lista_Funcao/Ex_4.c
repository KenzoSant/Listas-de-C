#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menor_base_log(int n){
    int valor,i,j,resultado;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            valor=pow(j,i);
            if(valor==n){
                resultado=j;
                break;
            }
        }
    }
    if(resultado==0){
        resultado=n;
    }

    return resultado;
}

int main()
{
    int numeroN,resultado;

    printf("Digite um Numero:");
    scanf("%d", &numeroN);

    resultado = menor_base_log(numeroN);

    printf("\nMenor valor possivel: %d", resultado);

    return 0;
}
