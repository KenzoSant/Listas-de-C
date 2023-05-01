#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

int main() {
    char buffer[MAX_LEN + 1];
    int i=0;

    printf("Digite uma palavra: ");
    scanf("%80[^\n]%*c", buffer);

    int size = strlen(buffer);
    
    for( i = 0; i < size / 2; i++) {
        char tmp = buffer[i]; //armazena o character inicial
        buffer[i] = buffer[size - i - 1]; 
        buffer[size - i - 1] = tmp; 
    }
    printf("%s", buffer);
    
    return 0 ;
}
