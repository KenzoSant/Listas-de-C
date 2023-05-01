#include <stdio.h>
#include <stdlib.h>

double media(double v[], int tam){
    int i=0;
    double acum=0, media=0;

    for(i=0; i<tam; i++){
        acum += v[i];
    }

    media = acum/tam;

    //printf("Soma dos elementos do vetor: %.2lf\n", acum);

    return media;
}

int main()
{
    double v[2];
    int i=0, tam = sizeof(v) / sizeof(v[0]);

    for(i=0; i<tam; i++){
        printf("Digite os numeros do vetor: ");
        scanf("%lf",&v[i]);
    }

    double mediaFinal = media(v,tam);
    printf("Media aritmetica dos numeros do vetor: %.2lf\n", mediaFinal);

    return 0;
}
