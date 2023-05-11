#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num;
    printf("Digite um numero inteiro:");
    scanf("%d", &num);

    if(num > 10){
        printf("Numero maior que 10: %d", &num);
    } else{
        printf("Numero é menor que 10: %d", num);
    }
}