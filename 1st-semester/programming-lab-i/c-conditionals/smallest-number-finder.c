// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int number1, number2, number3;

    // T�tulo
    printf("ENCONTRADOR DO MENOR VALOR ENTRE TR�S N�MEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro n�mero inteiro: ");
    scanf("%d", &number1);

    printf("Informe o segundo n�mero inteiro: ");
    scanf("%d", &number2);

    printf("Informe o terceiro n�mero inteiro: ");
    scanf("%d", &number3);

    // L�gica condicional para encontrar o menor n�mero
    if (number1 < number2 && number1 < number3) {
        printf("\nO menor n�mero �: %d\n", number1);
    } else if (number2 < number1 && number2 < number3) {
        printf("\nO menor n�mero �: %d\n", number2);
    } else {
        printf("\nO menor n�mero �: %d\n", number3);
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia tr�s n�meros inteiros e que determine e
    mostre o menor deles. Suponha que os tr�s valores sejam diferentes.
*/
