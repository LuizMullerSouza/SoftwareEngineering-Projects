// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int firstNumber, secondNumber, sumOfSquares;

    // Título
    printf("SOMA DOS QUADRADOS ENTRE 2 NÚMEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro valor inteiro: ");
    scanf("%d", &firstNumber);

    printf("\nInforme o segundo valor inteiro: ");
    scanf("%d", &secondNumber);

    // Cálculo
    sumOfSquares = (firstNumber * firstNumber) + (secondNumber * secondNumber);

    // Resultado
    printf("\nA soma dos quadrados de %d e %d é: %d\n", firstNumber, secondNumber, sumOfSquares);

    // Executado com sucesso
    return 0;
}

/*
    Leia dois números inteiros e calcule e mostre a soma de seus quadrados.
*/
