#include <stdio.h>

#define TAMANHO_VETOR 15

void encontrarMaiorMenor(int vetor[], int tamanho, int *maior, int *posicaoMaior, int *menor, int *posicaoMenor) {
    *maior = vetor[0];
    *posicaoMaior = 0;
    *menor = vetor[0];
    *posicaoMenor = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
            *posicaoMaior = i;
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
            *posicaoMenor = i;
        }
    }
}

int main() {
    int vetor[TAMANHO_VETOR];

    printf("Preencha o vetor com %d números:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior, posicaoMaior, menor, posicaoMenor;
    encontrarMaiorMenor(vetor, TAMANHO_VETOR, &maior, &posicaoMaior, &menor, &posicaoMenor);

    printf("\nMaior número: %d (posição: %d)\n", maior, posicaoMaior);
    printf("Menor número: %d (posição: %d)\n", menor, posicaoMenor);

    return 0;
}
