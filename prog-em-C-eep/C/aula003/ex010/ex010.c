#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// contrabarra = \ 

int main(){
    int number;

    printf("Digite um numero: \n");
    scanf("%d",&number);

    if (number >= 20){
        if (number <= 90)
        {
            printf("O numero %d ESTA entre 20 e 90", number);
        } else{
            printf("O numero %d NAO ESTA entre 20 e 90", number);
        }
    } else{
        printf("O numero %d NAO ESTA entre 20 e 90", number);
    }
}