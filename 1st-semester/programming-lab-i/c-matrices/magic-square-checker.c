// Bibliotecas
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int size, i, j, mainDiagSum = 0, secDiagSum = 0;
    bool isMagicSquare = true;

    // Título
    printf("VERIFICADOR DE QUADRADOS MÁGICOS\n");

    // Leitura do tamanho da matriz com validação
    do {

        printf("\nInforme o tamanho da Matriz Quadrada (N): ");
        scanf("%d", &size);

        if (size < 1) {
            printf("Erro: o tamanho de uma Matriz Quadrada deve ser >= 1. Tente novamente.\n");
        }

    } while (size < 1);

    // Variáveis dinâmicas
    int matrix[size][size], rowSums[size], colSums[size];

    // Inicialização dos vetores contadores
    for (i = 0; i < size; i++) {
        rowSums[i] = 0;
        colSums[i] = 0;
    }

    printf("\nPreenchendo a Matriz Quadrada - %dx%d\n\n", size, size);

    // Loop para entrada e leitura de dados da matriz, com verificação de quadrado mágico
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);

            // Acumulador da linha e coluna atual
            rowSums[i] += matrix[i][j];
            colSums[j] += matrix[i][j];

            // Acumulador da diagonal principal
            if (i == j) {
                mainDiagSum += matrix[i][j];
            }

            // Acumulador da diagonal secundária
            if (i + j == size - 1) {
                secDiagSum += matrix[i][j];
            }
        }

        printf("\n");
    }

    // Lógica condicional para verificar existência de quadrado mágico
    if (mainDiagSum != secDiagSum) {
        isMagicSquare = false;
    } else {
        for (i = 0; i < size; i++) {
            if (rowSums[i] != mainDiagSum || colSums[i] != mainDiagSum) {
                isMagicSquare = false;
                break;
            }
        }
    }

    // Exibição do resultado
    if (isMagicSquare) {

        printf("A Matriz %dx%d É um Quadrado Mágico!\n\n", size, size);

        // Exibição da matriz
        for (i = 0; i < size; i++) {
            printf("[\t");
            for (j = 0; j < size; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\t]\n");
        }

        printf("\nA constante mágica encontrada foi = %d\n", mainDiagSum);

    } else {

        printf("A Matriz %dx%d NÃO É um Quadrado Mágico!\n\n", size, size);

        // Exibição da matriz
        for (i = 0; i < size; i++) {
            printf("[\t");
            for (j = 0; j < size; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\t]\n");
        }
    }

    // Executado com sucesso
    return 0;
}

/*
    Dizemos que uma matriz quadrada inteira é um quadrado mágico, se a soma dos
    elementos de cada linha, a soma dos elementos de cada coluna e a soma dos
    elementos das diagonais principal e secundária são todas iguais. Exemplo:
                                    A matriz
                                    [ 8 0 7 ]
                                    [ 4 5 6 ]
                                    [ 3 10 2 ]
                            É um quadrado mágico de Soma 15.
    Dada uma matriz quadrada An×n, verificar se A é quadrado mágico.
*/
