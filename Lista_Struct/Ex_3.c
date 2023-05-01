#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct Pessoa {
    int rg;
    int cpf;
    char nome[80];
} Pessoa;

typedef struct Base {
    int armazenado; //número de pessoas na base
    Pessoa pessoas[MAX];
} Base;

Base cria_base() {
    Base base = {0};
    return base;
}

int insere_base(Pessoa p, Base *base) {
    if (base->armazenado >= MAX) {
        return 0;
    }

    for (int i = 0; i < base->armazenado; i++) {
        if (p.rg == base->pessoas[i].rg) {
            return -1;
        }
    }

    base->pessoas[base->armazenado++] = p;
    return 1;
}

int remove_base(int rg, Base *base) {
    for (int i = 0; i < base->armazenado; i++) {
        if (rg == base->pessoas[i].rg) {
            base->pessoas[i] = base->pessoas[--base->armazenado];
            return 1;
        }
    }
    return 0;
}

int main() {
    int opcao, rg, cpf;
    char nome[80];
    Pessoa pessoa;
    Base base = cria_base();

    do {
        printf("\nDigite a opcao desejada: \n");
        printf("1 - Incluir pessoa na base\n");
        printf("2 - Excluir pessoa da base\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o RG da pessoa: ");
                scanf("%d", &pessoa.rg);

                printf("Digite o CPF da pessoa: ");
                scanf("%d", &pessoa.cpf);

                printf("Digite o nome da pessoa: ");
                scanf(" %[^\n]", pessoa.nome);

                int resultadoadd = insere_base(pessoa, &base);
                if (resultadoadd == 1) {
                    printf("Pessoa adicionada com sucesso!\n");
                } else if (resultadoadd == -1) {
                    printf("Ja existe uma pessoa com o RG informado.\n");
                } else {
                    printf("Base cheia, nao foi possivel adicionar a pessoa.\n");
                }

                break;

            case 2:
                printf("Digite o RG da pessoa a ser removida: ");
                scanf("%d", &rg);

                int resultadoremov = remove_base(rg, &base);
                if ( resultadoremov == 1) {
                    printf("Pessoa removida com sucesso!\n");
                } else {
                    printf("Nao foi possivel remover a pessoa.\n");
                }

                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
