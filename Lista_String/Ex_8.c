/*#include <stdio.h>
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
    int i, j, cont=0;


    for (i = 0, j = 0; i < size1 && j < size2; i++) {
        if (str1[i] == str2[j]) {
            j++;
            cont++;
        }
    }

    if (cont == size2) {
        printf("%s pode ser obtida por meio da remocao de letras de %s.\n", str2, str1);
    } else {
        printf("%s não pode ser obtida por meio da remocao de letras de %s.\n", str2, str1);
    }

    return 0;
}*/

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

    for (i = 0; i < size2; i++) {
        for (j = 0; j < size1; j++){
            if (str2[i] == str1[j]) {
                ac++;
                str1[j] = ' ';
                break;
            }
        }
    }


    if(ac==size2){
        printf("\nA SEGUNDA PALAVRA PODE SER OBTIDA POR REMOCAO DE LETRAS DA PRIMEIRA PALAVRA");
    }else{
        printf("\nA SEGUNDA PALAVRA NAO PODE SER OBTIDA POR REMOCAO DE LETRAS DA PRIMEIRA PALAVRA");
    }

    return 0;
}
