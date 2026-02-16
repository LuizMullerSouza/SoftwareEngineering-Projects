// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int rows, cols, i, j;

    // Título
    printf("CALCULADORA DE PRODUTO DE MATRIZ POR VETOR\n");

    // Entrada e leitura de dados das linhas com validação
    do {

        printf("\nInforme a quantidade de linhas para a Matriz A: ");
        scanf("%d", &rows);

        if (rows < 1) {
            printf("Erro: o número de linhas deve ser >= 1. Tente novamente.\n");
        }

    } while (rows < 1);

    // Entrada e leitura de dados das colunas com validação
    do {

        printf("\nInforme a quantidade de colunas para a Matriz A: ");
        scanf("%d", &cols);

        if (cols < 1) {
            printf("Erro: o número de colunas deve ser >= 1. Tente novamente.\n");
        }

    } while (cols < 1);

    // Variáveis dinâmicas
    float matrixA[rows][cols], vectorV[cols], resultVector[rows];

    printf("\nPreenchendo a Matriz A - %dx%d\n\n", rows, cols);

    // Loop para entrada e leitura de dados da matriz A
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &matrixA[i][j]);

        }

        printf("\n");
    }

    printf("Preenchendo o Vetor V - Tamanho %d\n\n", cols);

    // Loop para entrada e leitura de dados do vetor V
    for (i = 0; i < cols; i++) {

        printf("[%d] = ", i + 1);
        scanf("%f", &vectorV[i]);

    }

    // Exibição da matriz A
    printf("\nMatriz A - Original\n\n");

    for (i = 0; i < rows; i++) {

        printf("[\t");

        for (j = 0; j < cols; j++) {
            printf("%g ", matrixA[i][j]);
        }

        printf("\t]\n");
    }

    printf("\nVetor Resultado - A * V\n\n");

    // Loop para cálculo e exibição do resultado
    for (i = 0; i < rows; i++) {

        resultVector[i] = 0;

        printf("[\t");

        for (j = 0; j < cols; j++) {
            resultVector[i] += matrixA[i][j] * vectorV[j];
        }

        printf("%g ", resultVector[i]);
        printf("\t]\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Dada uma matriz real A com m linhas e n colunas e um vetor
    real V com n elementos, determinar o produto de A por V.
*/
