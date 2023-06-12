#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int ra;
    int idade;
}Alunos;

float calculaIdadeMedia(){
    Alunos *alunos; // OU Alunos alunos[5]
    int i;
    float soma=0;

    alunos = (Alunos *)malloc(3 * sizeof(Alunos));

    if(alunos == NULL){
        printf("ERRO de Alocacao");
        exit(1);
    }

    for(i=0;i<3;i++){
        printf("\nDigite o %d RA: ",i+1);
        scanf("%d", &alunos[i].ra);

        printf("Digite a %d IDADE: ",i+1);
        scanf("%d", &alunos[i].idade);

        soma+= alunos[i].idade;
    }

    float media= soma/3;

    free(alunos);

    return media;
}

int main()
{
    float media = calculaIdadeMedia();

    printf("\nIdade Media: %.2f", media);
    return 0;
}
