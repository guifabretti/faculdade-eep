#include <stdio.h>

int main() {
    int num;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    int comp = ~num;

    printf("Complemento bit a bit: %d\n", comp);

    return 0;
}
