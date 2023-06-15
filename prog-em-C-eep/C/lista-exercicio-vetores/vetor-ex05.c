#include <stdio.h>
#include <stdlib.h>

// contrabarra = \n 

int main() {
    int logica[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int ling [10] = {1,3,5,6,7,9,11,17,16,18};
    int i, j;

    for (i = 0; i < 15; i++){
        for (j = 0; j < 10; j++){
            if (logica[i] == ling[j]){
                printf("\n Aluno %d faz as duas materias", logica[i]);
            }
        }
    }
}