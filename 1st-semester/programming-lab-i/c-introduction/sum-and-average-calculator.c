// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float firstNumber, secondNumber, thirdNumber, sum, average;

    // T�tulo
    printf("SOMA E M�DIA DE TR�S N�MEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro valor real: ");
    scanf("%f", &firstNumber);

    printf("\nInforme o segundo valor real: ");
    scanf("%f", &secondNumber);

    printf("\nInforme o terceiro valor real: ");
    scanf("%f", &thirdNumber);

    // C�lculo
    sum = firstNumber + secondNumber + thirdNumber;
    average = sum / 3;

    // Resultado
    printf("\nA soma dos n�meros �: %.2f\n", sum);
    printf("A m�dia dos n�meros �: %.2f\n", average);

    // Executado com sucesso
    return 0;
}

/*
    Leia tr�s n�meros reais, calcule e mostre a soma e sua respectiva m�dia.
*/
