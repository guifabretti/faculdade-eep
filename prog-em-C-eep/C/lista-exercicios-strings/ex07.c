#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000];
    int subs = 3;

    printf("Digite a frase a ser decodificada:\n");
    fgets(frase, sizeof(frase), stdin);

    printf("\n---------------x---------------");

    printf("\nFrase original:\n%s", frase);

    cesarcode(frase, subs);

    printf("\nFrase codificada:\n%s", frase);

    printf("---------------x---------------\n\n");

    return 0;
}

void cesarcode(char *frase, int subs){
    int tam = strlen(frase);

    for (int i = 0; i < tam; i++) {
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            frase[i] = 'a' + (frase[i] - 'a' + subs) % 26;
        } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
            frase[i] = 'A' + (frase[i] - 'A' + subs) % 26;
        }
    }
}