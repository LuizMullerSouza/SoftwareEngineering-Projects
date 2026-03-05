// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constantes
#define MAX_TEMP 70

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int fahrenheit = 50;
    float celsius;

    // Título
    printf("TABELA DE EQUIVALÊNCIA DE FAHRENHEIT PARA CELSIUS\n\n");

    // Estrutura de repetição para calcular, exibir a tabela e incrementar os graus
    while (fahrenheit <= MAX_TEMP) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);

        printf("%d°F  =  %.2f°C\n", fahrenheit, celsius);

        fahrenheit++;
    }

    // Executado com sucesso
    return 0;
}

/*
    Construa um programa que imprima a tabela de equivalência de graus Fahrenheit
    para centígrados (Celsius). Os limites são de 50 a 70 graus Fahrenheit com
    intervalo de 1 grau. Fórmula: C = 5/9 * (F - 32)
*/
