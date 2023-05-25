#include <stdio.h>

// contrabarra = \n

int main() {
    int total_bois = 7;
    int codigo, codigo_boi_gordo, codigo_boi_magro;
    float peso, peso_boi_gordo = 0, peso_boi_magro = 0;
    float soma_pesos = 0, peso_medio;

    for (int i = 0; i < total_bois; i++) {
        printf("Digite o código do boi %d: ", i + 1);
        scanf("%d", &codigo);

        printf("Digite o peso (em kg) do boi %d: ", i + 1);
        scanf("%f", &peso);

        if (i == 0 || peso > peso_boi_gordo) {
            peso_boi_gordo = peso;
            codigo_boi_gordo = codigo;
        }

        if (i == 0 || peso < peso_boi_magro) {
            peso_boi_magro = peso;
            codigo_boi_magro = codigo;
        }

        soma_pesos += peso;
        printf("\n");
    }

    peso_medio = soma_pesos / total_bois;

    // a) Boi mais gordo e seu código
    printf("a) O boi mais gordo é o de código %d, com peso %.2f kg.\n", codigo_boi_gordo, peso_boi_gordo);

    // b) Boi mais magro e seu código
    printf("b) O boi mais magro é o de código %d, com peso %.2f kg.\n", codigo_boi_magro, peso_boi_magro);

    // c) Peso médio de todos os bois
    printf("c) O peso médio de todos os bois é %.2f kg.\n", peso_medio);

    return 0;
}
