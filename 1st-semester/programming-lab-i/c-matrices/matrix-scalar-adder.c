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
    int matrixA[SIZE][SIZE], adder, i, j;

    // Título
    printf("SOMADOR DE MATRIZ POR ELEMENTO X\n\n");

    printf("Preencha a Matriz A com Inteiros - 5x5...\n\n");

    // Loop para entrada e leitura de dados
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }

        printf("\n");
    }

    // Leitura do valor somador
    printf("Digite um valor inteiro para X: ");
    scanf("%d", &adder);

    printf("\nMatriz A - Preenchida\n\n");

    // Exibição da matriz original
    for (i = 0; i < SIZE; i++) {

        printf("[\t");

        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrixA[i][j]);
        }

        printf("\t]\n");
    }

    printf("\nMatriz A - Modificada (A + X)\n\n");

    // Loop de modificação e exibição da matriz
    for (i = 0; i < SIZE; i++) {

        printf("[\t");

        for (j = 0; j < SIZE; j++) {

            // Adiciona X ao elemento atual
            matrixA[i][j] += adder;

            printf("%d ", matrixA[i][j]);
        }

        printf("\t]\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler uma matriz 5x5 de números inteiros e ler um
    número inteiro x. A seguir, o programa deve somar todos os elementos da
    matriz com x e exibir a matriz modificada.
*/
