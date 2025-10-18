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
    printf("ENCONTRADOR DO VALOR INTERMEDI�RIO ENTRE TR�S N�MEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro n�mero inteiro: ");
    scanf("%d", &number1);

    printf("Informe o segundo n�mero inteiro: ");
    scanf("%d", &number2);

    printf("Informe o terceiro n�mero inteiro: ");
    scanf("%d", &number3);

    printf("\nEntre os n�meros %d, %d e %d:\n", number1, number2, number3);

    // L�gica condicional para encontrar o n�mero intermedi�rio
    if ((number1 < number2 && number1 > number3) || (number1 > number2 && number1 < number3)) {
        printf("O n�mero intermedi�rio �: %d\n", number1);
    } else if ((number2 < number1 && number2 > number3) || (number2 > number1 && number2 < number3)) {
        printf("O n�mero intermedi�rio �: %d\n", number2);
    } else {
        printf("O n�mero intermedi�rio �: %d\n", number3);
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia tr�s n�meros inteiros e que determine e
    mostre o valor intermedi�rio, entre o menor e o maior n�mero.
    Suponha que os n�meros sejam diferentes.
*/
