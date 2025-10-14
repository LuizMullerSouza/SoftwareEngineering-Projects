// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float celsiusTemp, fahrenheitTemp;

    // Título
    printf("CONVERSOR: CELSIUS PARA FAHRENHEIT\n");

    // Entrada e leitura de dados
    printf("\nInforme a temperatura em graus Celsius: ");
    scanf("%f", &celsiusTemp);

    // Cálculo
    fahrenheitTemp = (celsiusTemp * 1.8) + 32;

    // Resultado
    printf("\nA temperatura de %.1f°C corresponde a %.1f°F\n", celsiusTemp, fahrenheitTemp);

    // Executado com sucesso
    return 0;
}

/*
    Leia uma temperatura em graus Celsius e calcule e mostre o valor
    correspondente em graus Fahrenheit. Considere: °F = °C × 1.8 + 32
*/
