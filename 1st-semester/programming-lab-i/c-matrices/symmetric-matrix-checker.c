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
    int matrixA[SIZE][SIZE], symmetric = 1, i, j;

    // Título
    printf("VERIFICADOR DE MATRIZ SIMÉTRICA\n\n");

    printf("Preencha a Matriz - %dx%d\n\n", SIZE, SIZE);

    // Loop para entrada e leitura de dados
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }

        printf("\n");
    }

    // Loop para verificação de simetria
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            // Lógica condicional para matriz não simétrica
            if (matrixA[i][j] != matrixA[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    // Exibição do resultado
    if (symmetric == 1) {
        printf("Resultado: A Matriz É simétrica!\n");
    } else {
        printf("Resultado: A Matriz NÃO É simétrica!\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler uma matriz A de ordem 5x5 de números inteiros e
    verificar se a matriz é ou não simétrica. Dizemos que uma matriz é simétrica quando
    todo elemento aij é igual ao elemento aji, para todo i, j ≤ 5. Exemplo para matriz
    simétrica de ordem 4 (apenas um exemplo):
        1 2 3 4
    A = 2 6 7 8		Resultado: A Matriz É simétrica!
        3 7 11 12
        4 8 12 16
*/
