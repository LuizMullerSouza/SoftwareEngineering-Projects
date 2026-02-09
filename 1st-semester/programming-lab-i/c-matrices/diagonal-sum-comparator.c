// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define SIZE 5

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int matrix[SIZE][SIZE], mainDiagonalSum = 0, secondaryDiagonalSum = 0, i, j;

    // Título
    printf("VERIFICADOR DE IGUALDADE EM SOMA DAS DIAGONAIS\n\n");

    printf("Preencha a Matriz - %dx%d\n\n", SIZE, SIZE);

    // Loop para entrada de dados e soma das diagonais
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);

            // Soma da diagonal principal
            if (i == j) {
                mainDiagonalSum += matrix[i][j];
            }

            // Soma da diagonal secundária
            if (i + j == SIZE - 1) {
                secondaryDiagonalSum += matrix[i][j];
            }
        }

        printf("\n");
    }

    // Exibição das somas das diagonais
    printf("Soma da Diagonal Principal = %d\n", mainDiagonalSum);
    printf("Soma da Diagonal Secundária = %d\n", secondaryDiagonalSum);

    // Lógica condicional para exibição do resultado
    if (mainDiagonalSum == secondaryDiagonalSum) {
        printf("\nAs somas das diagonais são IGUAIS.\n");
    } else {
        printf("\nAs somas das diagonais são DIFERENTES.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler uma matriz 5x5 de números inteiros e verificar
    se a soma da diagonal principal é igual ou não a soma da diagonal secundária.
*/
