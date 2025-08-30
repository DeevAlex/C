#include "stdio.h"

// Na linguagem C, o tipo booleano é representado por inteiro, onde 0 é falso e diferente de 0 é verdadeiro. mesmo que seja negativo
int main() {

    int boleano = 1;

    if (boleano) {
        printf("O valor é verdadeiro.\n");
    } else {
        printf("O valor é falso.\n");
    }

    return 0;

}