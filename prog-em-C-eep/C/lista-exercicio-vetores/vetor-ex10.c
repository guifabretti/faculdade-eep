#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// contrabarra = \n 

int main() {
    int i,j;
    int Pvet[10] = {4,7,5,8,2,15,9,6,10,11};
    int Svet[5] = {3,4,5,8,2};
    int RPvet[10];
    int RSvet[10] = {0};

    for (i = 0; i < 10; i++){
        RPvet[i] = Pvet[i];
        if (Pvet[i] % 2 == 0) {
            RPvet[i] = Pvet[i];
            for (j = 0; j < 5; j++) {
                RPvet[i] += Svet[j];
            }
        } else{
            RPvet[i] = Pvet[i];
        }
    }

    for (i = 0; i < 10; i++){
        if (Pvet[i] % 2 != 0) {
            for (j = 0; j < 5; j++) {
                if (Pvet[i] % Svet[j] == 0){
                    RSvet[i]++;
                }
                
            }
        }
    }
    
    
    printf("Primeiro vetor resultante:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", RPvet[i]);
    }
    
    printf("\n\n");

    printf("Segundo vetor resultante:\n");
    for (i = 0; i < 10; i++) {
        if (Pvet[i] % 2 != 0){
            printf("%d ", RSvet[i]);
        }
    }
    
}