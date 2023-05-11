#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, aux;
    printf("Digite um numero inteiro");
    scanf("%d",&a);
    printf("Digite um numero inteiro:");
    scanf("%d",&b);

    if (a > b){
        aux = b;
        b = a;
        a = aux;
        printf("%d%d",a,b);
    } else{
        printf("%d%d",a,b);
    }
    
}