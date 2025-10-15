// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int year, remainder;

    // T�tulo
    printf("VERIFICADOR DE ANO BISSEXTO\n");

    // Entrada e leitura de dados
    printf("\nInforme o ano (formato xxxx): ");
    scanf("%d", &year);

    // C�lculo
    remainder = year % 4;

    // L�gica condicional para resultado
    if (remainder == 0) {
        printf("\nO ano %d � BISSEXTO.\n", year);
    } else {
        printf("\nO ano %d N�O � bissexto.\n", year);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia um ano, verifique e mostre se o ano informado � bissexto.
    Lembre-se que um ano � bissexto se ele � m�ltiplo de 4.
*/
