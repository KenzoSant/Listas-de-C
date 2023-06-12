#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double *n1, *n2,soma=0;
    int i,n;


    printf("Digite o tam do VET: ");
    scanf("%d", &n);

    n1 = malloc(n*sizeof(double));
    n2 = malloc(n*sizeof(double));

    for(i=0;i<n;i++){
        printf("Digite o %d valor de VET1: ", i);
        scanf("%lf", &n1[i]);
    }
    for(i=0;i<n;i++){
        printf("Digite o %d valor de VET2: ", i);
        scanf("%lf", &n2[i]);
    }

    for(i=0;i<n;i++){
        soma+= (n1[i]+n2[i]);
    }

    printf("Soma dos elementos: %.2lf", soma);

    free(n1);
    free(n2);

    return 0;
}
