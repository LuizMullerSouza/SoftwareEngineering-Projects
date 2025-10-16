// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define PI 3.14159

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float radius, height, volume;

    // T�tulo
    printf("CALCULADORA DE VOLUME DE UMA LATA DE �LEO\n");

    // Entrada e leitura de dados
    printf("\nSer� necess�rio informar o raio e a altura da lata.\n");

    printf("\nInforme o raio da lata: ");
    scanf("%f", &radius);
    printf("Informe a altura da lata: ");
    scanf("%f", &height);

    // C�lculo
    volume = PI * radius * radius * height;

    // Resultado
    printf("\nO volume total da lata � de: %.2f unidades c�bicas.\n", volume);

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que calcule e apresente o valor do volume
    de uma lata de �leo, utilizando a f�rmula:
    VOLUME = PI * RAIO^2 * ALTURA.
*/
