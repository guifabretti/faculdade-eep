#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// contrabarra = \n 

int main() {
    int i;
    int num[5];
    int soma=0;

    for (i = 0; i < 5; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num[i]);

        soma += num[i];
    }

    printf("Os numeros digitados foram: ");
    for ( i = 0; i < 5; i++){
        printf("%d", num[i]);
        if (i < 4){
            printf(" + ");
        } else{
            printf(" = ");
        }
    }
    
    printf("%d", soma);
}