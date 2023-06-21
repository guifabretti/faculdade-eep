#include <stdio.h>

#define TAMANHO_VETOR 10

void multiplicarVetores(int vetor1[], int vetor2[], int vetorResultado[]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetorResultado[i] = vetor1[i] * vetor2[i];
    }
}

int main() {
    int vetor1[TAMANHO_VETOR];
    int vetor2[TAMANHO_VETOR];
    int vetorResultado[TAMANHO_VETOR];

    printf("Preencha o primeiro vetor:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nPreencha o segundo vetor:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    multiplicarVetores(vetor1, vetor2, vetorResultado);

    printf("\nVetor resultante (multiplicação dos elementos de mesmo índice):\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}
