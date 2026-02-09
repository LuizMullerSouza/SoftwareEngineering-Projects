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
    int matrixA[TAM][TAM], mainDiagonalSum = 0, i, j;

    // Título
    printf("SOMADOR DOS ELEMENTOS DA DIAGONAL PRINCIPAL\n\n");

    printf("Preencha a Matriz A com Inteiros - 5x5...\n\n");

    // Loop para entrada de dados e soma da diagonal principal
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);

            // Lógica condicional para verificar se o elemento pertence à diagonal principal
            if(i == j) {
                mainDiagonalSum += matrixA[i][j];
            }
        }

        printf("\n");
    }

    // Exibição do resultado
    printf("Soma dos elementos da Diagonal Principal = %d\n", mainDiagonalSum);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler uma matriz 5x5 de números inteiros. A seguir, o
    programa deve calcular e mostrar a soma dos elementos da diagonal principal.
    Exemplo para uma matriz de ordem 4 (apenas uma exemplo).
        [2] 3 5 1
    A = 3 [4] 0 7       Soma da diagonal principal = 12
        9 1 [5] 8
        4 0 9 [1]
*/
