// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float fahrenheitTemp, celsiusTemp;

    // T�tulo
    printf("CONVERSOR: FAHRENHEIT PARA CELSIUS\n");

    // Entrada e leitura de dados
    printf("\nInforme a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheitTemp);

    // C�lculo
    celsiusTemp = (fahrenheitTemp - 32) / 1.8;

    // Resultado
    printf("\nA temperatura de %.1f�F corresponde a %.1f�C\n", fahrenheitTemp, celsiusTemp);

    // Executado com sucesso
    return 0;
}

/*
    Leia uma temperatura em graus Fahrenheit e calcule e mostre o valor
    correspondente em graus Celsius. Considere: �C = (�F - 32)/1.8
*/
