// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float heightJose = 1.50, heightPedro = 1.10;
    int years = 0;

    // Título
    printf("CÁLCULO DE CRESCIMENTO\n\n");

    printf("Altura inicial José: %.2fm - Cresce 0.02m ao ano\n", heightJose);
    printf("Altura inicial Pedro: %.2fm - Cresce 0.03m ao ano\n\n", heightPedro);

    // Estrutura de repetição para cálculo
    while (heightPedro <= heightJose) {
        heightJose = heightJose + 0.02;
        heightPedro = heightPedro + 0.03;
        years = years + 1;
    }

    // Exibição do resultado
    printf("Resultado: Pedro será maior que José em %d anos.\n\n", years);
    printf("Altura final José: %.2fm\n", heightJose);
    printf("Altura final Pedro: %.2fm\n", heightPedro);

    // Executado com sucesso
    return 0;
}

/*
    José tem 1,50 m e cresce 2 centímetros por ano. Pedro tem 1,10 m e cresce
    3 centímetros por ano. Construa um programa que calcule em quantos anos
    Pedro será maior que José.
*/
