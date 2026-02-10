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
    int matrixA[SIZE][SIZE], multiplier, i, j;

    // Título
    printf("MULTIPLICADOR DE SEGUNDA COLUNA POR ELEMENTO X\n\n");

    printf("Preencha a Matriz - %dx%d\n\n", SIZE, SIZE);

    // Loop para entrada e leitura de dados
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }

        printf("\n");
    }

    // Leitura do valor multiplicador
    printf("Digite o valor do Multiplicador - X: ");
    scanf("%d", &multiplier);

    printf("\nMatriz A - Original\n\n");

    // Exibição da matriz original
    for (i = 0; i < SIZE; i++) {

        printf("[\t");

        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrixA[i][j]);
        }

        printf("\t]\n");
    }

    printf("\nMatriz A - Modificada (Segunda Coluna * %d)\n\n", multiplier);

    // Loop de modificação e exibição da matriz
    for (i = 0; i < SIZE; i++) {

        printf("[\t");

        for (j = 0; j < SIZE; j++) {

            // Lógica condicional para modificar segunda coluna
            if(j == 1){
                matrixA[i][j] *= multiplier;
            }

            printf("%d ", matrixA[i][j]);
        }

        printf("\t]\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler uma matriz 5x5 de números inteiros e ler um número
    inteiro x. A seguir, o programa deve multiplicar os elementos da segunda coluna
    da matriz por x e exibir a matriz modificada.
*/
