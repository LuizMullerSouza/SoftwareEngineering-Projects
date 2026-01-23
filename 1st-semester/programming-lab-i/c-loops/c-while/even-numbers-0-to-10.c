// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number;

    // Título
    printf("NÚMEROS PARES DE 0 A 10\n\n");

    // Inicialização
    number = 0;

    // Estrutura de repetição para exibir os números pares
    while (number <= 10) {
        printf("%d\n", number);
        number = number + 2;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que imprima os valores pares de 0 (zero)
    a 10 (dez). Utilize a estrutura de repetição WHILE.
*/
