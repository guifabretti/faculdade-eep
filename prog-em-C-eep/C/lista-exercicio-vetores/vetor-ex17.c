#include <stdio.h>

#define TAMANHO_VETOR 10

void ordenarVetorDecrescente(int vetor1[], int vetor2[], int vetorResultado[]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetorResultado[i] = vetor1[i];
        vetorResultado[i + TAMANHO_VETOR] = vetor2[i];
    }

    for (int i = 0; i < 2 * TAMANHO_VETOR - 1; i++) {
        for (int j = i + 1; j < 2 * TAMANHO_VETOR; j++) {
            if (vetorResultado[i] < vetorResultado[j]) {
                int temp = vetorResultado[i];
                vetorResultado[i] = vetorResultado[j];
                vetorResultado[j] = temp;
            }
        }
    }
}

int main() {
    int vetor1[TAMANHO_VETOR];
    int vetor2[TAMANHO_VETOR];
    int vetorResultado[2 * TAMANHO_VETOR];

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

    ordenarVetorDecrescente(vetor1, vetor2, vetorResultado);

    printf("\nVetor resultante (ordenado de maneira decrescente):\n");
    for (int i = 0; i < 2 * TAMANHO_VETOR; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}
