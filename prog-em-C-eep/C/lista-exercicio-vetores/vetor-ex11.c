#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// contrabarra = \n 

int main() {
    int i;

    int num[10];
    int par, impar;

    printf("Digite 10 numeros inteiros: \n");
    for ( i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    
    
    printf("\nNumeros pares: ");
    for (i = 0; i < 10; i++){
        if (num[i] % 2 == 0){
            printf("%d, ", num[i]);
        }
    }
    printf("\nNumeros impares: ");
    for (i = 0; i < 10; i++){
        if (num[i] % 2 != 0){
            printf("%d, ", num[i]);
        }
    }
}