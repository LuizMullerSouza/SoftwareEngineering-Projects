// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int number, remainder;

    // T�tulo
    printf("VERIFICADOR DE DIVISIBILIDADE POR 3\n");

    // Entrada e leitura de dados
    printf("\nInforme um n�mero inteiro: ");
    scanf("%d", &number);

    // C�lculo
    remainder = number % 3;

    // L�gica condicional para p resultado
    if (remainder == 0) {
        printf("\nO n�mero %d � divis�vel por 3.\n", number);
    } else {
        printf("\nO n�mero %d N�O � divis�vel por 3.\n", number);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia um n�mero inteiro e verifique e mostre se ele � divis�vel por 3.
*/
