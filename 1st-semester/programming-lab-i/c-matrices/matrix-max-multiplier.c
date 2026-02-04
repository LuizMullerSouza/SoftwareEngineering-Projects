// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define SIZE 2

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float matrixM[SIZE][SIZE], matrixR[SIZE][SIZE], maxValue;
    int i, j;

    // Título
    printf("MULTIPLICADOR DE MATRIZES PELO MAIOR ELEMENTO\n\n");

    printf("Preencha a Matriz M - %dx%d...\n", SIZE, SIZE);

    // Loop para entrada e leitura dos elementos da matriz com busca do maior valor
    for (i = 0; i < SIZE; i++) {

        printf("\n--- Linha %d ---\n", i + 1);

        for (j = 0; j < SIZE; j++) {

            printf("Coluna %d: ", j + 1);
            scanf("%f", &matrixM[i][j]);

            // Lógica condicional para o maior valor
            if (i == 0 && j == 0) {
                maxValue = matrixM[i][j];
            } else if (matrixM[i][j] > maxValue) {
                maxValue = matrixM[i][j];
                }
        }
    }

    printf("\nMaior elemento encontrado: %g\n\n", maxValue);

    printf("Matriz R - Resultante: M * %g...\n\n", maxValue);

    // Loop para cálculo e exibição do resultado
    for (i = 0; i < SIZE; i++) {

        printf("\t");

        for (j = 0; j < SIZE; j++) {

            matrixR[i][j] = matrixM[i][j] * maxValue;

            printf("[%g] ", matrixR[i][j]);
        }

        printf("\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que preencha uma matriz M (2X2), calcule e mostre
    a matriz R, resultante da multiplicação dos elementos de M pelo seu
    maior elemento.
*/
