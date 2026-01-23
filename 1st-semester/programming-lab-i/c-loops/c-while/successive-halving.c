// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float number;

    // Título
    printf("DIVISÃO SUCESSIVA POR DOIS\n\n");

    // Entrada de dados
    printf("Informe qualquer número: ");
    scanf("%f", &number);

    printf("\n--- Sequência de Resultados ---\n");

    // Estrutura de repetição para a sequência de divisões
    while (number > 1) {
        printf("%g\n", number);
        number = number / 2;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia um número qualquer e divida por 2 (dois),
    sucessivamente, até que o resultado seja menor que 1 (um), mostre a
    sequência de resultados.
*/
