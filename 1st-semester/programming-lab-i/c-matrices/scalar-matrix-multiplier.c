// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define TAM 5

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int matrixA[TAM][TAM], x, i, j;

    // Título
    printf("MULTIPLICADOR DE MATRIZ POR ELEMENTO X\n\n");

    printf("Preencha a Matriz A com Inteiros - 5x5...\n\n");

    // Loop para entrada e leitura de dados da matriz
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }

        printf("\n");
    }

    // Leitura do valor multiplicador
    printf("Digite um valor inteiro para X: ");
    scanf("%d", &x);

    printf("\nMatriz A - Preenchida\n\n");

    // Exibição da matriz original
    for (i = 0; i < TAM; i++) {

        printf("[\t");

        for (j = 0; j < TAM; j++) {
            printf("%d ", matrixA[i][j]);
        }

        printf("\t]\n");
    }

    printf("\nMatriz A - Modificada (A * X)\n\n");

    // Exibição da matriz modificada
    for (i = 0; i < TAM; i++) {

        printf("[\t");

        for (j = 0; j < TAM; j++) {

            matrixA[i][j] *= x;

            printf("%d ", matrixA[i][j]);
        }

        printf("\t]\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler uma matriz 5x5 de números inteiros e ler um
    número inteiro x. A seguir, o programa deve multiplicar todos os elementos
    da matriz por x e exibir a matriz modificada. Exemplo para matriz de ordem
    4 (apenas um exemplo):
        2 3 5 1                      4 6 10 2
    A = 3 4 0 7     x = 2    A * x = 6 8 0 14
        9 1 5 8                      18 2 10 16
        4 0 9 1                      8 0 18 2
*/
