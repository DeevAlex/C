// gcc <codigo_fonte>.c -o <nome_executavel>.exe // comando para compilar 

#include <stdio.h> // biblioteca para trabalhar com entrada/saida padrão (principal entrada: teclado, principal saida: monitor)

int main() {
    
    // declarando variaveis
    int idade; // inteiro
    
    // declarando e inicializando
    // int idade = 50;

    printf("Qual a sua idade? ");

    // Colocando o valor digitado do terminal na variavel
    scanf("%d", &idade); // precisa colocar o & antes de variavel

    printf("sua idade é %d", idade);

    return 0;

}

