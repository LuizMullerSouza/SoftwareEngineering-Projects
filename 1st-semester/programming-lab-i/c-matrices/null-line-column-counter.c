// Bibliotecas
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i, j, rows, cols, nullRowsCount = 0, nullColsCount = 0;
    bool isNull;

    // Título
    printf("CONTADOR DE LINHAS E COLUNAS NULAS DE MATRIZES\n");

    // Leitura da quantidade de linhas da matriz com validação
    do {

        printf("\nInforme o número de linhas para a Matriz: ");
        scanf("%d", &rows);

        if (rows < 1) {
            printf("Erro: o número de linhas deve ser >= 1. Tente novamente.\n");
        }

    } while (rows < 1);

    // Leitura da quantidade de colunas da matriz com validação
    do {

        printf("\nInforme o número de colunas para a Matriz: ");
        scanf("%d", &cols);

        if (cols < 1) {
            printf("Erro: o número de colunas deve ser >= 1. Tente novamente.\n");
        }

    } while (cols < 1);

    // Variável dinâmica
    int matrix[rows][cols];

    printf("\nPreenchendo a Matriz A - %dx%d\n\n", rows, cols);

    // Loop para leitura da matriz com verificação de linhas nulas
    for (i = 0; i < rows; i++) {

        isNull = true;

        for (j = 0; j < cols; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);

            // Linha não nula encontrada
            if (matrix[i][j] != 0) {
                isNull = false;
            }
        }

        // Acumulador de linhas nulas
        if (isNull) {
            nullRowsCount++;
        }

        printf("\n");
    }

    // Loop de verificação de colunas nulas
    for (j = 0; j < cols; j++) {

        isNull = true;

        for (i = 0; i < rows; i++) {

            // Linha não nula encontrada
            if (matrix[i][j] != 0) {
                isNull = false;
                break;
            }
        }

        // Acumulador de colunas nulas
        if (isNull) {
            nullColsCount++;
        }
    }

    printf("Matriz %dx%d - Original\n\n", rows, cols);

    // Exibição da matriz
    for (i = 0; i < rows; i++) {

        printf("[\t");

        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\t]\n");
    }

    // Exibição dos resultados
    printf("\nA Matriz %dx%d possui:\n", rows, cols);
    printf("> %d linha(s) nula(s)\n", nullRowsCount);
    printf("> %d coluna(s) nula(s)\n", nullColsCount);

    // Executado com sucesso
    return 0;
}

/*
    Dada uma matriz Am×n, imprimir o número de linhas e o número de colunas
    nulas da matriz. Exemplo: m = 4 e n = 4
                               [ 1 0 2 3 ]
                               [ 4 0 5 6 ]
                               [ 0 0 0 0 ]
                               [ 0 0 0 0 ]
                Tem 2 linha(s) nula(s) e 1 coluna(s) nula(s).
*/
