#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

int main() {
    char str1[MAX_LEN + 1];
    char str2[MAX_LEN + 1];

    printf("Digite uma string de ate %d caracteres (com espacos):", MAX_LEN);
    scanf("%80[^\n]%*c", str1);

    printf("\nDigite uma string de ate %d caracteres (com espacos):", MAX_LEN);
    scanf("%80[^\n]%*c", str2);

    int len1 = strlen(str2) ;
    int i, j;

    for(i = 0, j = 0; i < len1; i++) {
        for(j = 0; j < len1; j++){
            if (str1[i] == str2[j]) {
                str2[j] = ' ';
            }
        }
    }

    int len2 = strlen(str2) ;

    for (i = 0, j = 0; i < len2; i++) {
        if (str2[i] != ' ') {
            str2[j] = str2[i];
            j++;
        }
    }

    str2[j] = '\0';

    printf("String sem as letras:%s\n", str2);
    return 0;
}
