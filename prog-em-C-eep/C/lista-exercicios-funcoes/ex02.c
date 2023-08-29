#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um numero e direi se ele e primo ou nao.\nr: ");
    scanf("%d", &num);

    primo(num);

    if (primo(num)){
        printf("%d PRIMO",num);
    }
    else{
        printf("%d NAO e primo",num);
    }

    return 0;
}

int primo(int num)
{
    if (num <=1){
        return 1;
    }

    for (int i=2; i*i <= num; i++){
        if (num %i == 0){
            return 0;
        }
    }
  return 1;
}