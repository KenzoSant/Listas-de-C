#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

int main() {
    char str[MAX_LEN + 1];
    int i, j;

    printf("Digite uma string de ate %d caracteres: ", MAX_LEN);
    scanf("%50[^\n]%*c", str);

    for (i = 0, j = 0; i < strlen(str); i++) {
        // Se o caractere atual não for um espaço, copia-o para a posição j da string
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("A string sem espacos e: %s\n", str);

    for (int i = 0; i < strlen(str) / 2; i++) { //só irá até o meio
        if (str[i] != str[strlen(str)- i - 1 ]) {
            printf("\nNAO PALINDROMO.");
            return 0;
        }
    }
    printf("\nPALINDROMO.");

    return 0;
}
