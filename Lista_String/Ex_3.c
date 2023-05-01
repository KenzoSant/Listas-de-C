#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

int main() {
    char str[MAX_LEN + 1];

    printf("Digite uma string de ate %d caracteres (com espacos):", MAX_LEN);
    scanf("%80[^\n]%*c", str);

    int len = strlen(str);
    int i, j;


    for (i = 0, j = 0; i < len; i++) {
        if (str[i] == ' ' && (i == 0 || str[i - 1] == ' ')) {
            // Ignora espaços extras entre as palavras
        } else {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String sem espacos extras:%s\n", str);
    return 0;
}

