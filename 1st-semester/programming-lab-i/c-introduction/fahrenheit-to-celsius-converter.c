// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float fahrenheitTemp, celsiusTemp;

    // Título
    printf("CONVERSOR: FAHRENHEIT PARA CELSIUS\n");

    // Entrada e leitura de dados
    printf("\nInforme a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheitTemp);

    // Cálculo
    celsiusTemp = (fahrenheitTemp - 32) / 1.8;

    // Resultado
    printf("\nA temperatura de %.1f°F corresponde a %.1f°C\n", fahrenheitTemp, celsiusTemp);

    // Executado com sucesso
    return 0;
}

/*
    Leia uma temperatura em graus Fahrenheit e calcule e mostre o valor
    correspondente em graus Celsius. Considere: °C = (°F - 32)/1.8
*/
