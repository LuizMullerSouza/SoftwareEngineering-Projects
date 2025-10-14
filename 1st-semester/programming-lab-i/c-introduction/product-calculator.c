// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float firstNumber, secondNumber, product;

    // T�tulo
    printf("MULTIPLICADORA DE N�MEROS REAIS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro valor real: ");
    scanf("%f", &firstNumber);

    printf("\nInforme o segundo valor real: ");
    scanf("%f", &secondNumber);

    // C�lculo
    product = firstNumber * secondNumber;

    // Resultado
    printf("\nO produto de %.2f e %.2f �: %.2f\n", firstNumber, secondNumber, product);

    // Executado com sucesso
    return 0;
}

/*
    Leia dois n�meros reais e calcule e mostre o respectivo produto.
*/
