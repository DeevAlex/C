#include "stdio.h"

int main() {

    int numero_inteiro = 0;

    // Somente muda a capacidade de dados double > float
    float numero_real = 0.0;
    double outro_numero_real = 0.0;

    float media = 0.0;

    printf("Digite a primeira nota: ");
    scanf("%f", &numero_real); // o tipo que será apresentado deve ser o mesmo do tipo da variavel, nesse caso float

    printf("Digite a segunda nota: ");
    scanf("%lf", &outro_numero_real); // o tipo que será apresentado deve ser o mesmo do tipo da variavel, nesse caso double

    media = (numero_real + outro_numero_real) / 2;

    printf("A media das notas e: %.2f\n", media); // %.2f indica que queremos 2 casas decimais

    return 0;

}