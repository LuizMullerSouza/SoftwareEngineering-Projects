// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int firstNumber, secondNumber;

    // T�tulo
    printf("COMPARADOR DE N�MEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro n�mero inteiro: ");
    scanf("%d", &firstNumber);

    printf("Informe o segundo n�mero inteiro: ");
    scanf("%d", &secondNumber);

    // L�gica condicional para o resultado
    if (firstNumber == secondNumber) {
        printf("\nOs n�meros s�o IGUAIS.\n");
    } else {
        if (firstNumber > secondNumber) {
            printf("\nOs n�meros s�o DIFERENTES. O maior valor � %d e o menor � %d.\n", firstNumber, secondNumber);
        } else {
            printf("\nOs n�meros s�o DIFERENTES. O maior valor � %d e o menor � %d.\n", secondNumber, firstNumber);
        }
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia dois n�meros inteiros, compare e mostre se s�o iguais ou diferentes.
    Caso sejam diferentes, determine e mostre o maior n�mero entre os dois.
*/
