#include "stdio.h"

int main() {

//     char opcao;

//     printf("Informe uma opção\n");
//     printf("a - Saldo da Conta\n");
//     printf("b - Extrato da Conta\n");
//     printf("c - Limite da Conta\n");

//     scanf(" %c", &opcao); // Adicionado espaço antes de %c para capturar o caractere corretamente

//     if (opcao == 'a') {
//         printf("Você escolheu Saldo da Conta\n");
//     } else if (opcao == 'b') {
//         printf("Você escolheu Extrato da Conta\n");
//     } else if (opcao == 'c') {
//         printf("Você escolheu Limite da Conta\n");
//     } else {
//         printf("Opção inválida\n");
//     }

//     // Gerar alfabeto com letras minúsculas tendo como base a tabela ASCII
//    for (int i = 97; i <= 122; i++) {
//        printf("%c\n", i); // Converte o valor inteiro para o caractere correspondente na tabela ASCII
//    }

    char nome[50]; // declaração de uma variável do tipo string em C, 49  pois a linguagem C no final da string adiciona um caractere nulo '\0'

    printf("Qual é o seu nome? ");
    scanf("%49s", nome); // Lê uma string do usuário, limitando a 49 caracteres
    // gets(nome); // Lê uma linha inteira, incluindo espaços

    printf("Olá, %s!\n", nome); // Exibe uma saudação personalizada

    return 0;

}