#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    char trocar;
    int vogais = 0;

    printf("Digite uma palavra: ");
    fgets(palavra,50,stdin);

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &trocar); // O espaço antes de %c consome o caractere de nova linha deixado no buffer

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            vogais++;
            palavra[i] = trocar;
        }
    }

    printf("Número de vogais na palavra: %d\n", vogais);
    printf("Palavra apos substituir vogais: %s\n", palavra);

    return 0;
}
