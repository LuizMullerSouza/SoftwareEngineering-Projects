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
    int numbers[SIZE], evenCount = 0, i;

    // Título
    printf("CONTADOR DE NÚMEROS PARES EM VETOR\n\n");

    printf("Preenchendo o Vetor de %d posições...\n\n", SIZE);

    // Loop para leitura e verificação dos números
    for (i = 0; i < SIZE; i++) {

        printf("Informe o %dº valor inteiro: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
    }

    // Exibição do resultado com formatação
    if (evenCount == 0) {
        printf("\nO Vetor não possui nenhum número par\n");
    } else if (evenCount == 1) {
        printf("\nO Vetor possui apenas um número par\n");
    } else {
        printf("\nO Vetor possui %d números pares\n", evenCount);
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um vetor de 10 números inteiros e, em
    seguida, calcular e mostrar a quantidade de números que são pares.
*/
