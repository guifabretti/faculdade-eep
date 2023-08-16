#include <stdio.h>
#include <string.h>

int main(){


    char texto[20];
    printf("Digite um texto:");
    fgets(texto,5,stdin);
    printf("%s", texto);



    return 0;
}
