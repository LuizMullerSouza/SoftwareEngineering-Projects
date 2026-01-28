// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int inputNumber, divisor, divisorsCount, primeSum = 0;

    // Título
    printf("SOMADOR DE NÚMEROS PRIMOS\n");

    // Entrada de dados com validação
    do {

        printf("\nDigite um número (0 para sair): ");
        scanf("%d", &inputNumber);

        if (inputNumber != 0) {
            divisorsCount = 0;

            // Estrutura de repetição para verificação do número
            for (divisor = 1; divisor <= inputNumber; divisor++) {
                if (inputNumber % divisor == 0) {
                    divisorsCount++;
                }
            }

            // Número primo encontrado e somado
            if (divisorsCount == 2) {
                printf(">> %d é primo! Adicionado à soma.\n", inputNumber);
                primeSum += inputNumber;
            }
        }

    } while (inputNumber != 0);

    // Exibição do resultado
    printf("\nSoma total dos números primos digitados: %d\n", primeSum);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que, dados N números inteiros positivos,
    calcula e mostra a soma dos que são primos.
*/
