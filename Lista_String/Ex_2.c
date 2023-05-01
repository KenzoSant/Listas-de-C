#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

int main() {
    char str[MAX_LEN + 1];
    int i, j;

    printf("Digite uma string de ate %d caracteres: ", MAX_LEN);
    scanf("%50[^\n]%*c", str);

    for (i = 0, j = 0; i < strlen(str); i++) {
        // Se o caractere atual n�o for um espa�o, copia-o para a posi��o j da string
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("A string sem espacos e: %s\n", str);

    return 0;
}
