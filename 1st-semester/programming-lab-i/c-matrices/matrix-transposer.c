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
    int matrixA[SIZE][SIZE], i, j;

    // Título
    printf("TRANSPOSTADOR DE MATRIZES\n\n");

    printf("Preencha a Matriz - %dx%d\n\n", SIZE, SIZE);

    // Loop para entrada e leitura de dados
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }

        printf("\n");
    }

    printf("\nMatriz A - Original\n\n");

    // Exibição da matriz original
    for (i = 0; i < SIZE; i++) {

        printf("[\t");

        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrixA[i][j]);
        }

        printf("\t]\n");
    }

    printf("\nMatriz A - Transposta\n\n");

    // Exibição da matriz transposta
    for (i = 0; i < SIZE; i++) {

        printf("[\t");

        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrixA[j][i]);
        }

        printf("\t]\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler uma matriz 5x5 de inteiros e calcular a sua
    transposta A^T. Exemplo para matriz de ordem 4 (apenas um exemplo):
        1 2 3 4                 1 5 9 13
    A = 5 6 7 8         A ^ T = 2 6 10 14
        9 10 11 12              3 7 11 15
        13 14 15 16             4 8 12 16
*/
