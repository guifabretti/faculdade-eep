#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main() {
    int i;
    float prod[10];
    float estoq[10];

    
    for (i = 0; i < 10; i++) {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%f", &prod[i]);
        printf("Digite o total em estoque do produto %d: ", i + 1);
        scanf("%f", &estoq[i]);
    }

    while (1) {
        int codigo_cliente, codigo_produto, quantidade;
        
        printf("Digite o codigo do cliente (ou 0 para sair): ");
        scanf("%d", &codigo_cliente);
        
        if (codigo_cliente == 0){ break;}

        printf("Digite o codigo do produto que deseja comprar: ");
        scanf("%d", &codigo_produto);

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        // Verificar se o código do produto solicitado existe
        int produto_encontrado = 0;
        int estoque_suficiente = 0;

        for (int i = 0; i < 10; i++) {
            if (prod[i] == codigo_produto) {
                produto_encontrado = 1;

                // Verificar se há estoque suficiente
                if (estoq[i] >= quantidade) {
                    estoque_suficiente = 1;
                    estoq[i] -= quantidade;
                }

                break;
            }
        }

        // Verificar se o produto foi encontrado e se há estoque suficiente
        if (!produto_encontrado) {
            printf("Codigo inexistente.\n");
        } else if (!estoque_suficiente) {
            printf("Não temos estoque suficiente dessa mercadoria.\n");
        } else {
            printf("Pedido atendido. Obrigado e volte sempre!\n");
        }
    }

    // Exibir os códigos dos produtos com seus respectivos estoques atualizados
    printf("\nEstoque atualizado:\n");
    for (int i = 0; i < 10; i++) {
        printf("Codigo: %d | Estoque: %d\n", prod[i], estoq[i]);
    }

    return 0;
}
