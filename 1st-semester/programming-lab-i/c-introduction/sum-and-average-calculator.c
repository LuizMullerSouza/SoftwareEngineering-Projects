// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float firstNumber, secondNumber, thirdNumber, sum, average;

    // Título
    printf("SOMA E MÉDIA DE TRÊS NÚMEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro valor real: ");
    scanf("%f", &firstNumber);

    printf("\nInforme o segundo valor real: ");
    scanf("%f", &secondNumber);

    printf("\nInforme o terceiro valor real: ");
    scanf("%f", &thirdNumber);

    // Cálculo
    sum = firstNumber + secondNumber + thirdNumber;
    average = sum / 3;

    // Resultado
    printf("\nA soma dos números é: %.2f\n", sum);
    printf("A média dos números é: %.2f\n", average);

    // Executado com sucesso
    return 0;
}

/*
    Leia três números reais, calcule e mostre a soma e sua respectiva média.
*/
