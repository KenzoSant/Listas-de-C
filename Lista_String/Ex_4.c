#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

int main() {
    char str1[MAX_LEN + 1], str2[MAX_LEN + 1];

    printf("Digite uma string de ate %d caracteres: ", MAX_LEN);
    scanf("%80[^\n]%*c", str1);

    printf("Digite uma string de ate %d caracteres: ", MAX_LEN);
    scanf("%80[^\n]%*c", str2);

    int size1 = strlen(str1);
    int size2 = strlen(str2);
    int i, j, ac=0;

    if(size1 == size2){
        for (i = 0; i < size1; i++) {
            for (j = 0; j < size2; j++){
                if (str2[j] == str1[i]) {
                    ac++;
                    str2[j] = ' ';
                    break;
                }
            }
        }
    }else {
        printf("\nREGRA INVALIDA: AS STRINGS DEVEM TER O MESMO TAMANHO");
        return 0;
    }


    if(ac==size1){
            printf("\nPALAVRA E UM ANAGRAMA");
    }else{
        printf("\nPALAVRA NAO E ANAGRAMA");
    }


    return 0;
}
