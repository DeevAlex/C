#include <stdio.h>

int main() {

    // For - usado quando queremos fazer x vezes a repetição do codigo

    // Variaveis
    // int numero, soma = 0; // nãi precisamos iniciar a variavel numero porque ela vai receber um valor de qualquer jeito, porem se não inicializarmos a soma ela vai estar com um lixo na memoria 

    // for(int i = 0; i < 5; i++) {
    //     // Entrada
    //     printf("Digite um numero: ");
    //     scanf("%d", &numero);

    //     // Processamento
    //     soma = soma + numero; // devemos inicializar uma varivael quando formos fazer um calculo com ela

    // }

    // // Saida
    // printf("A soma dos valores informados foi: %d", soma);



    // While - usado quando não temos um criterio de parada

    // Variaveis
    // int numero, soma = 0;

    // // entrada
    // printf("Digite um numero: ");
    // scanf("%d", &numero);

    // while(numero != 0) {

    //     // Processamento
    //     soma = soma + numero;

    //     // entrada
    //     printf("Digite um numero: ");
    //     scanf("%d", &numero);

    // }

    // // Saida
    // printf("A soma dos valores informado foi: %d", soma);


    // Do-While

    // Variaveis
    int numero, soma = 0;

    // executado primerio e depois é checkado no while ali
    do{

        // Processamento

        // entrada
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;

    } while(numero != 0);

    // Saida
    printf("A soma dos valores informado foi: %d", soma);


    return 0;

}