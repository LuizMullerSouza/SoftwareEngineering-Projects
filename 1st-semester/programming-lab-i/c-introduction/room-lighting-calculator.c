// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float lampPower, roomWidth, roomLength, roomArea, totalPowerNeeded, calculatedLamps;
    int requiredLamps;

    // T�tulo
    printf("CALCULADORA DE L�MPADAS POR C�MODO\n");

    // Entrada e leitura de dados
    printf("\nInforme a pot�ncia (em watts) de cada l�mpada: ");
    scanf("%f", &lampPower);

    printf("Informe a largura do c�modo (em metros): ");
    scanf("%f", &roomWidth);

    printf("Informe o comprimento do c�modo (em metros): ");
    scanf("%f", &roomLength);

    // C�lculo
    roomArea = roomWidth * roomLength;
    totalPowerNeeded = roomArea * 20.0;
    calculatedLamps = totalPowerNeeded / lampPower;

    // Atribui o valor calculado � vari�vel inteira
    requiredLamps = calculatedLamps;

    // Resultado
    printf("\nPara um c�modo de %.2f m�, s�o necess�rios %d l�mpadas de %.0fW.\n", roomArea, requiredLamps, lampPower);

    // Executado com sucesso
    return 0;
}

/*
    Calcule e mostre o n�mero de l�mpadas necess�rias para iluminar um determinado c�modo de uma resid�ncia.
    Dados de entrada: a pot�ncia da l�mpada utilizada (em watts), as dimens�es (largura e comprimento, em
    metros) do c�modo. Considere que a pot�ncia necess�ria � de 20 watts por metro quadrado.
*/
