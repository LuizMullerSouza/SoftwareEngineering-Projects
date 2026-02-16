// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i, j, k, rowsA, commonDim, colsB;

    // Título
    printf("CALCULADOR DE PRODUTO ENTRE DUAS MATRIZES\n");

    // Validação de quantidade de linhas para A
    do {

        printf("\nInforme a quantidade de linhas para a Matriz A (M): ");
        scanf("%d", &rowsA);

        if (rowsA < 1) {
            printf("Erro: o número de linhas deve ser >= 1. Tente novamente.\n");
        }

    } while (rowsA < 1);

    // Validação de quantidade de colunas para A e linhas para B
    do {

        printf("\nInforme a quantidade de colunas para a Matriz A e linhas para a Matriz B (N): ");
        scanf("%d", &commonDim);

        if (commonDim < 1) {
            printf("Erro: a dimensão comum deve ser >= 1. Tente novamente.\n");
        }

    } while (commonDim < 1);

    // Validação de quantidade de colunas para B
    do {

        printf("\nInforme a quantidade de colunas para a Matriz B (P): ");
        scanf("%d", &colsB);

        if (colsB < 1) {
            printf("Erro: o número de colunas deve ser >= 1. Tente novamente.\n");
        }

    } while (colsB < 1);

    // Variáveis dinâmicas
    float matrixA[rowsA][commonDim], matrixB[commonDim][colsB], matrixResult[rowsA][colsB];


    // Entrada e leitura de dados para a Matriz A
    printf("\nPreenchendo a Matriz A - %dx%d\n\n", rowsA, commonDim);

    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < commonDim; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &matrixA[i][j]);
        }

        printf("\n");
    }

    // Entrada e leitura de dados para a Matriz B
    printf("\nPreenchendo a Matriz B - %dx%d\n\n", commonDim, colsB);

    for (i = 0; i < commonDim; i++) {
        for (j = 0; j < colsB; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &matrixB[i][j]);
        }

        printf("\n");
    }

    printf("\nMatriz Resultado - A * B\n\n");

    // Loop para cálculo e exibição do resultado
    for (i = 0; i < rowsA; i++) {

        printf("[\t");

        for (j = 0; j < colsB; j++) {

            matrixResult[i][j] = 0;

            for (k = 0; k < commonDim; k++) {
                matrixResult[i][j] += matrixA[i][k] * matrixB[k][j];
            }

            printf("%g ", matrixResult[i][j]);
        }

        printf("\t]\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Dadas duas matrizes reais Am×n, e Bn×p, calcular o produto de A por B.
*/
