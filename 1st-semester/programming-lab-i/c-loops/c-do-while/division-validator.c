// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int numerator, denominator;
    float result;

    // Título
    printf("CALCULADORA DE DIVISÃO COM VALIDAÇÃO\n\n");

    // Entrada do numerador
    printf("Informe o primeiro valor (Numerador): ");
    scanf("%d", &numerator);

    // Entrada do denominador com validação
    do {
        printf("Informe o segundo valor (Denominador): ");
        scanf("%d", &denominator);

        if (denominator == 0) {
            printf("\nValor inválido! O denominador não pode ser zero.\n\n");
        }

    } while (denominator == 0);

    // Cálculo
    result = (float) numerator / denominator;

    // Exibição do resultado
    printf("\nO valor da divisão é: %.2f\n", result);

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para ler 2 valores (se o segundo valor informado for ZERO, deve
    ser lido um novo valor) e imprimir o resultado da divisão do primeiro pelo segundo.
*/
