#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor;
    int nota100 = 0;
    int nota50 = 0;
    int nota20 = 0;
    int nota10 = 0;
    int nota5 = 0;
    int nota2 = 0;
    int moeda1 = 0;

    printf("\n\tDigite o valor do saque: ");
    fflush(stdout);
    scanf("%d", &valor);

    if (valor > 0) {
        int notas[] = {100, 50, 20, 10, 5, 2, 1};
        int tamanho = sizeof(notas) / sizeof(notas[0]);

        for (int i = 0; valor > 0 && i < tamanho; i++) {
            int nota = notas[i];
            int quantidade = valor / nota;

            switch (nota) {
                case 100:
                    nota100 += quantidade;
                    break;
                case 50:
                    nota50 += quantidade;
                    break;
                case 20:
                    nota20 += quantidade;
                    break;
                case 10:
                    nota10 += quantidade;
                    break;
                case 5:
                    nota5 += quantidade;
                    break;
                case 2:
                    nota2 += quantidade;
                    break;
                case 1:
                    moeda1 += quantidade;
                    break;
            }

            valor %= nota;
        }

        printf("\n\tQuantidade de notas:");

        if (nota100 > 0 && nota100 < 2) {
            printf("\n\t%d nota de R$ 100", nota100);
        } else if (nota100 > 1) {
            printf("\n\t%d notas de R$ 100", nota100);
        }

        if (nota50 > 0 && nota50 < 2) {
            printf("\n\t%d nota de R$ 50", nota50);
        } else if (nota50 > 1) {
            printf("\n\t%d notas de R$ 50", nota50);
        }

        if (nota20 > 0 && nota20 < 2) {
            printf("\n\t%d nota de R$ 20", nota20);
        } else if (nota20 > 1) {
            printf("\n\t%d notas de R$ 20", nota20);
        }

        if (nota10 > 0 && nota10 < 2) {
            printf("\n\t%d nota de R$ 10", nota10);
        } else if (nota10 > 1) {
            printf("\n\t%d notas de R$ 10", nota10);
        }

        if (nota5 > 0 && nota5 < 2) {
            printf("\n\t%d nota de R$ 5", nota5);
        } else if (nota5 > 1) {
            printf("\n\t%d notas de R$ 5", nota5);
        }

        if (nota2 > 0 && nota2 < 2) {
            printf("\n\t%d nota de R$ 2", nota2);
        } else if (nota2 > 1) {
            printf("\n\t%d notas de R$ 2", nota2);
        }

        if (moeda1 > 0 && moeda1 < 2) {
            printf("\n\t%d moeda de R$ 1", moeda1);
        } else if (moeda1 > 1) {
            printf("\n\t%d moedas de R$ 1", moeda1);
        }

    } else {
        printf("\n\tValor inválido para saque.");
    }

    return 0;
}
