#include <stdio.h>

#define NUM_CLIENTES 8
#define QTD_LOCACOES_GRATIS 10

typedef struct {
    char nome[20];
    int qtdLocacoes;
} Cliente;

int main() {
    Cliente clientes[NUM_CLIENTES];

    for (int i = 0; i < NUM_CLIENTES; i++) {
        printf("Informe o nome do cliente: ");
        scanf("%s", clientes[i].nome);
        printf("Informe a quantidade de DVDs locados em 2011: ");
        scanf("%d", &clientes[i].qtdLocacoes);
    }

    printf("\nRelatório de Locações Gratuitas:\n");
    for (int i = 0; i < NUM_CLIENTES; i++) {
        int qtdLocacoesGratis = clientes[i].qtdLocacoes / QTD_LOCACOES_GRATIS;
        printf("%s: %d locações gratuitas\n", clientes[i].nome, qtdLocacoesGratis);
    }

    return 0;
}
