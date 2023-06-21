#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 10

int main() {
    int i;
    char produtos[TAMANHO][50];
    int codigo[TAMANHO];
    float preco[TAMANHO];
    float novo_preco[TAMANHO];

    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o nome do %dº produto: ", i + 1);
        fgets(produtos[i], 50, stdin);

        printf("Digite o código do %dº produto: ", i + 1);
        scanf("%d", &codigo[i]);

        printf("Digite o preço do %dº produto: ", i + 1);
        scanf("%f", &preco[i]);

        getchar();  // Limpar o caractere de nova linha residual no buffer
        printf("\n");
    }

    printf("\n----- Relatório -----\n\n");
    printf("Produtos com aumento:\n\n");

    for (i = 0; i < TAMANHO; i++) {
        if (codigo[i] % 2 == 0 || preco[i] > 1000.0) {
            if (codigo[i] % 2 == 0 && preco[i] > 1000.0) {
                novo_preco[i] = preco[i] * 1.2;  // Aumento de 20%
            } else if (codigo[i] % 2 == 0) {
                novo_preco[i] = preco[i] * 1.15;  // Aumento de 15%
            } else {
                novo_preco[i] = preco[i] * 1.1;  // Aumento de 10%
            }

            printf("Nome: %s", produtos[i]);
            printf("Código: %d\n", codigo[i]);
            printf("Preço anterior: R$%.2f\n", preco[i]);
            printf("Novo preço: R$%.2f\n", novo_preco[i]);
            printf("\n");
        }
    }

    return 0;
}
