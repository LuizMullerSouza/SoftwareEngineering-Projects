// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int firstNumber, secondNumber, remainder;

    // T�tulo
    printf("VERIFICADOR DE M�LTIPLOS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro n�mero inteiro: ");
    scanf("%d", &firstNumber);

    printf("Informe o segundo n�mero inteiro (divisor): ");
    scanf("%d", &secondNumber);

    // C�lculo
    remainder = firstNumber % secondNumber;

    // L�gica condicional para o resultado
    if (remainder == 0) {
        printf("\nO n�mero %d � m�ltiplo de %d.\n", firstNumber, secondNumber);
    } else {
        printf("\nO n�mero %d N�O � m�ltiplo de %d.\n", firstNumber, secondNumber);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia dois n�meros inteiros n1 e n2, verifique e mostre se n1 � ou n�o m�ltiplo de n2.
*/
