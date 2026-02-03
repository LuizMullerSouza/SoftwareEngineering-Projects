// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constantes
#define LAYERS 4
#define ROWS 3
#define COLS 2

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int matrix3D[LAYERS][ROWS][COLS], i, j, k;

    // Título
    printf("LEITOR DE MATRIZ TRIDIMENSIONAL - %dx%dx%d\n\n", LAYERS, ROWS, COLS);

    printf("Preencha os dados da Matriz de 3 dimensões\n");

    // Loop para as camadas
    for (i = 0; i < LAYERS; i++) {
        printf("\n--- Camada %d ---\n", i + 1);

        // Loop para as linhas
        for (j = 0; j < ROWS; j++) {

            // Loop para as colunas
            for (k = 0; k < COLS; k++) {
                printf("Linha %d, Coluna %d: ", j + 1, k + 1);
                scanf("%d", &matrix3D[i][j][k]);
            }
        }
    }

    printf("\n------------------\n");
    printf("Exibindo a Matriz");
    printf("\n------------------\n\n");

   // Loop para exibição da matriz preenchida
    for (i = 0; i < LAYERS; i++) {

        printf("\nCamada %d:\n", i + 1);
        printf("----------\n");

        for (j = 0; j < ROWS; j++) {

            printf("\t");

            for (k = 0; k < COLS; k++) {
                printf("[%d] ", matrix3D[i][j][k]);
            }

            printf("\n");
        }
    }

    printf("\n");

    // Executado com sucesso
    return 0;
}

/*
    Crie um programa que leia uma Matriz de 3 dimensões de tamanho 4x3x2.
    Após concluir a sua leitura, exiba os valores guardados em cada índice.
*/
