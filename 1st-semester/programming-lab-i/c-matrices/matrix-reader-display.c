// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constantes
#define ROWS 7
#define COLS 3

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int matrix[ROWS][COLS], i, j;

    // Título
    printf("LEITOR E EXIBIDOR DE MATRIZ - %dx%d\n\n", ROWS, COLS);

    printf("Preencha os dados da Matriz de 2 dimensões\n");

    // Loop para as linhas
    for (i = 0; i < ROWS; i++) {

        printf("\n--- Linha %d ---\n", i + 1);

        // Loop para as colunas
        for (j = 0; j < COLS; j++) {

            // Entrada e leitura dos dados
            printf("Coluna %d: ", j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n------------------\n");
    printf("Exibindo a Matriz");
    printf("\n------------------\n\n");

    // Loop para exibição da matriz preenchida
    for (i = 0; i < ROWS; i++) {

        printf("\t");

        for (j = 0; j < COLS; j++) {
            printf("[%d] ", matrix[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    // Executado com sucesso
    return 0;
}

/*
    Crie um programa que leia uma Matriz de 2 dimensões de tamanho 7x3.
    Após concluir a sua leitura, exiba os valores guardados em cada índice.
*/
