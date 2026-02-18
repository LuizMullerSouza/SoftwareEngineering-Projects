// Bibliotecas
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int size, i, j;
    bool isPermutation = true;

    // Título
    printf("VERIFICADOR DE MATRIZ DE PERMUTAÇÃO\n");

    // Leitura do tamanho da matriz com validação
    do {

        printf("\nInforme o tamanho da Matriz Quadrada (N): ");
        scanf("%d", &size);

        if (size < 1) {
            printf("Erro: o tamanho de uma Matriz Quadrada deve ser >= 1. Tente novamente.\n");
        }

    } while (size < 1);

    // Variáveis dinâmicas
    int matrix[size][size], rowOnesCount[size], colOnesCount[size];

    // Inicialização dos vetores contadores
    for (i = 0; i < size; i++) {
        rowOnesCount[i] = 0;
        colOnesCount[i] = 0;
    }

    printf("\nPreenchendo a Matriz Quadrada - %dx%d\n\n", size, size);

    // Loop para entrada e leitura de dados da matriz, com verificação de permutação
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);

            // Lógica de verificação
            if (matrix[i][j] == 1) {
                rowOnesCount[i]++;
                colOnesCount[j]++;
            }
            else if (matrix[i][j] != 0) {
                isPermutation = false;
            }
        }

        printf("\n");
    }

    // Verificação dos contadores
    if (isPermutation) {
        for (i = 0; i < size; i++) {
            if (rowOnesCount[i] != 1 || colOnesCount[i] != 1) {
                isPermutation = false;
                break;
            }
        }
    }

    // Exibição do resultado
    if (isPermutation) {
        printf("A Matriz %dx%d É de Permutação!\n\n", size, size);
    } else {
        printf("A Matriz %dx%d NÃO É de Permutação!\n\n", size, size);
    }

    // Exibição da matriz
    for (i = 0; i < size; i++) {

        printf("[\t");

        for (j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\t]\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Dizemos que uma matriz inteira An×n é uma matriz de permutação se em cada
    linha e em cada coluna houver n-1 elementos nulos e um único elemento igual
    a 1. Exemplo:       A matriz abaixo é de permutação:
                                [ 0 1 0 0 ]
                                [ 0 0 1 0 ]
                                [ 1 0 0 0 ]
                                [ 0 0 0 1 ]
                                Observe que
                                [ 2 -1 0 ]
                                [ -1 2 0 ]
                                [  0 0 1 ]
                             Não é de permutação.
    Dada uma matriz inteira An×n , verificar se A é de permutação.
*/
