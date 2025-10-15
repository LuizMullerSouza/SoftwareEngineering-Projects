// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int firstNumber, secondNumber, difference;

    // T�tulo
    printf("DIFEREN�A ENTRE O MAIOR E O MENOR N�MERO\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro n�mero inteiro: ");
    scanf("%d", &firstNumber);

    printf("Informe o segundo n�mero inteiro: ");
    scanf("%d", &secondNumber);

    // Condi��o para calcular a diferen�a
    if (firstNumber > secondNumber) {
        difference = firstNumber - secondNumber;
    } else {
        difference = secondNumber - firstNumber;
    }

    // Resultado
    printf("\nA diferen�a entre o maior e o menor valor �: %d\n", difference);

    // Executado com sucesso
    return 0;
}

/*
    Leia dois n�meros inteiros, determine e mostre a diferen�a do maior pelo menor.
*/
