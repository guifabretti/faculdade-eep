#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main() {
    int i;
    float num[6];
    int par = 0;
    int impar = 0;
    
    for (i = 0; i < 6; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &num[i]);
    }
    
    // Par
    printf("\nNumeros pares: ");
    for (i = 0; i < 6; i++) {
        if ((int)num[i] % 2 == 0) {
            printf("%.0f, ", num[i]);
            par++;
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", par);

    // Impar   
    printf("\nNumeros impares: ");
    for (i = 0; i < 6; i++) {
        if ((int)num[i] % 2 != 0) {
            printf("%.0f ", num[i]);
            impar++;
        }
    }
    printf("\nQuantidade de numeros impares: %d\n", impar);
}
