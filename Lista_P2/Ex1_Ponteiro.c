#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30
char *concatenar (char *s1,char *s2){

    char *sres = NULL;
    int tam1 = strlen(s1);
    int tam2 = strlen(s2);
    int maxtam;
    int i=0,j=0;

    sres = calloc(tam1+tam2,sizeof(char));

    /*strcpy(sres,s1);
    strcat(sres, s2);*/
    for(i=0; i<tam1 ;i ++){
        sres[i]=s1[i];
    }
    for(i=0; i<tam2 ;i ++){
        sres[i+tam1]=s2[i];
    }

    for (i = 0, j = 0; i < tam1+tam2; i++) {
        if (sres[i] != ' ') {
            sres[j] = sres[i];
            j++;
            maxtam=j;
        }
    }


    sres[maxtam]='\0';

    return sres;

}

int main()
{
    char plv1[MAX], plv2[MAX];
    char *resultado;

    printf("Digite a Primeira Palavra: ");
    scanf("%30[^\n]%*c", plv1);
    printf("Digite a Primeira Palavra: ");
    scanf("%30[^\n]%*c", plv2);

    resultado = concatenar (plv1,plv2);
    printf("Palavra Concatenada: %s", resultado);

    free(resultado);

    return 0;
}

