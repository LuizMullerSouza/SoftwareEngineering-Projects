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
    float radius, area;

    // T�tulo
    printf("C�LCULO DA �REA DE UM C�RCULO\n");

    // Entrada e leitura de dados
    printf("\nInforme o valor do raio do c�rculo: ");
    scanf("%f", &radius);

    // C�lculo
    area = PI * radius * radius;

    // Resultado
    printf("\nA �rea de um c�rculo com raio %.2f �: %.2f unidades quadradas\n", radius, area);

    // Executado com sucesso
    return 0;
}

/*
    Leia o raio de um c�rculo e calcule e mostre a sua �rea. F�rmula: �rea = pi � R^2
*/
