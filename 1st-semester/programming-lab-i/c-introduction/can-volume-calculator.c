// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define PI 3.14159

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float radius, height, volume;

    // Título
    printf("CALCULADORA DE VOLUME DE UMA LATA DE ÓLEO\n");

    // Entrada e leitura de dados
    printf("\nSerá necessário informar o raio e a altura da lata.\n");

    printf("\nInforme o raio da lata: ");
    scanf("%f", &radius);
    printf("Informe a altura da lata: ");
    scanf("%f", &height);

    // Cálculo
    volume = PI * radius * radius * height;

    // Resultado
    printf("\nO volume total da lata é de: %.2f unidades cúbicas.\n", volume);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que calcule e apresente o valor do volume
    de uma lata de óleo, utilizando a fórmula:
    VOLUME = PI * RAIO^2 * ALTURA.
*/
