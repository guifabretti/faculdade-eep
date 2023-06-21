#include <stdio.h>

#define NUM_PRODUTOS 5

typedef struct {
    char nome[20];
    float preco;
} Produto;

int main() {
    Produto produtos[NUM_PRODUTOS];
    int qtdInferior50 = 0;
    int qtdEntre50e100 = 0;
    float somaPrecoSuperior100 = 0;
    int qtdSuperior100 = 0;

    for (int i = 0; i < NUM_PRODUTOS; i++) {
        printf("Informe o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("Informe o preço do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);

        if (produtos[i].preco < 50.0) {
            qtdInferior50++;
        } else if (produtos[i].preco >= 50.0 && produtos[i].preco <= 100.0) {
            qtdEntre50e100++;
        } else {
            somaPrecoSuperior100 += produtos[i].preco;
            qtdSuperior100++;
        }
    }

    printf("\nQuantidade de produtos com preço inferior a R$ 50,00: %d\n", qtdInferior50);
    printf("Produtos com preço entre R$ 50,00 e R$ 100,00:\n");
    for (int i = 0; i < NUM_PRODUTOS; i++) {
        if (produtos[i].preco >= 50.0 && produtos[i].preco <= 100.0) {
            printf("%s\n", produtos[i].nome);
        }
    }

    float mediaPrecoSuperior100 = (qtdSuperior100 > 0) ? somaPrecoSuperior100 / qtdSuperior100 : 0;
    printf("Média dos preços dos produtos com preço superior a R$ 100,00: %.2f\n", mediaPrecoSuperior100);

    return 0;
}
