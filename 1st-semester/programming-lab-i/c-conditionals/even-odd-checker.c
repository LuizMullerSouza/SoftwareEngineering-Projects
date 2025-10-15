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
    printf("VERIFICADOR DE N�MERO PAR OU �MPAR\n");

    // Entrada e leitura de dados
    printf("\nInforme um n�mero inteiro: ");
    scanf("%d", &number);

    // C�lculo
    remainder = number % 2;

    // L�gica condicional para o resultado
    if (remainder == 0) {
        printf("\nO n�mero %d � PAR.\n", number);
    } else {
        printf("\nO n�mero %d � �MPAR.\n", number);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia um n�mero inteiro e verifique e mostre se o
    respectivo n�mero � par ou �mpar.
*/
