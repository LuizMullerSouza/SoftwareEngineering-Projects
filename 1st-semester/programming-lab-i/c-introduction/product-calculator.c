// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float firstNumber, secondNumber, product;

    // Título
    printf("MULTIPLICADORA DE NÚMEROS REAIS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro valor real: ");
    scanf("%f", &firstNumber);

    printf("\nInforme o segundo valor real: ");
    scanf("%f", &secondNumber);

    // Cálculo
    product = firstNumber * secondNumber;

    // Resultado
    printf("\nO produto de %.2f e %.2f é: %.2f\n", firstNumber, secondNumber, product);

    // Executado com sucesso
    return 0;
}

/*
    Leia dois números reais e calcule e mostre o respectivo produto.
*/
