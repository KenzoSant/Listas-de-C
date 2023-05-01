#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char stringT[80];
    char stringP[80];

    printf("Digite uma palavra: ");
    fgets(stringT, 80, stdin);

    printf("Digite uma palavra: ");
    fgets(stringP, 80, stdin);

    int tamanhoT = strlen(stringT);
    int tamanhoP = strlen(stringP)-1;

    for(int i=0; i<tamanhoT-tamanhoP; i++){
        for(int j=0; j<tamanhoP;j++){
            if(stringT[i+j] == stringP[j]){
                //printf("\nposicao do i: %d, posicao do j: %d, letra: %c", i, j, stringP[j]);
                if(j == (tamanhoP-1)){
                    printf("\npalavra encontrada na posicao: %d", i);
                }
            }
        }
    }

    return 0;
}
