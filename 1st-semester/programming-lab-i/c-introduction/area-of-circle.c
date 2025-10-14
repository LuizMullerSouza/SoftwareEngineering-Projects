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
    float radius, area;

    // Título
    printf("CÁLCULO DA ÁREA DE UM CÍRCULO\n");

    // Entrada e leitura de dados
    printf("\nInforme o valor do raio do círculo: ");
    scanf("%f", &radius);

    // Cálculo
    area = PI * radius * radius;

    // Resultado
    printf("\nA área de um círculo com raio %.2f é: %.2f unidades quadradas\n", radius, area);

    // Executado com sucesso
    return 0;
}

/*
    Leia o raio de um círculo e calcule e mostre a sua área. Fórmula: Área = pi × R^2
*/
