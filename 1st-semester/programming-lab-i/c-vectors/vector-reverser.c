// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define SIZE 10

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int numbers[SIZE], i;

    // Título
    printf("INVERSOR DE VETORES\n\n");

    // Loop para leitura dos números
    for (i = 0; i < SIZE; i++) {

        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Exibição do vetor original
    printf("\nVetor Preenchido: ");

    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }

    // Exibição do vetor invertido
    printf("\nVetor Invertido: ");

    for (i = SIZE - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um vetor de 10 números
    inteiros e depois exibi-lo em ordem inversa.
*/
