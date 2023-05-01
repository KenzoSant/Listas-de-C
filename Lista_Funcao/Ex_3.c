#include <stdio.h>
#include <stdlib.h>

int mdc(int m,int n){

    int resto,resto_div,resultado;

    if(m>=n){
        do{
            resto = m % n;
            m = n;
            n = resto;

        }while(resto != 0 );

    }

    resultado = m;

    return resultado;

}

int main()
{
    int numM,numN,resultado;

    printf("Digite o numero M: ");
    scanf("%d", &numM);

    printf("Digite o numero N: ");
    scanf("%d", &numN);

    resultado = mdc(numM,numN);

    printf("O MDC eh: %d",resultado);

    return 0;
}
