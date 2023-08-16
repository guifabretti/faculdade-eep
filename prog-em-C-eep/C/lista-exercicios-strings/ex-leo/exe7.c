#include <stdio.h>
#include <string.h>

void caesarCipher(char *frase, int shift) {
    int length = strlen(frase);

    for (int i = 0; i < length; i++) {
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            frase[i] = 'a' + (frase[i] - 'a' + shift) % 26;
        } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
            frase[i] = 'A' + (frase[i] - 'A' + shift) % 26;
        }
    }
}

int main() {

    char frase[1000];
    int shift = 3;

    printf("\nDigite a string a ser codificada: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    printf("\nA String original e: %s", frase);

    caesarCipher(frase, shift);

    printf("\nNova string codificada: %s", frase);

    return 0;
}
