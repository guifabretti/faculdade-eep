#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main() {
    int i;
    int num[15];

    
    for (i = 0; i < 15; i++) {
        printf("Digite um numero %d: ", i + 1);
        scanf("%d", &num[i]);
    if (num[i] == 30){
        printf("-> NUMERO %d IGUAL A 30!! \n", i + 1);
    }
    }
}
    