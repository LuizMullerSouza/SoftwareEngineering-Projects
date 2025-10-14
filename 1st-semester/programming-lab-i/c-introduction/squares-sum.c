// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int firstNumber, secondNumber, sumOfSquares;

    // T�tulo
    printf("SOMA DOS QUADRADOS ENTRE 2 N�MEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro valor inteiro: ");
    scanf("%d", &firstNumber);

    printf("\nInforme o segundo valor inteiro: ");
    scanf("%d", &secondNumber);

    // C�lculo
    sumOfSquares = (firstNumber * firstNumber) + (secondNumber * secondNumber);

    // Resultado
    printf("\nA soma dos quadrados de %d e %d �: %d\n", firstNumber, secondNumber, sumOfSquares);

    // Executado com sucesso
    return 0;
}

/*
    Leia dois n�meros inteiros e calcule e mostre a soma de seus quadrados.
*/
