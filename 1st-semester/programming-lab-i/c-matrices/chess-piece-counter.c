// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define SIZE 8

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável do tabuleiro preenchida
    int chessBoard[SIZE][SIZE] = {
        {6, 7, 7, 5, 7, 7, 1, 7},
        {7, 1, 7, 2, 7, 3, 7, 2},
        {7, 1, 1, 1, 7, 1, 7, 7},
        {7, 7, 2, 7, 3, 4, 4, 3},
        {1, 7, 1, 1, 7, 1, 7, 7},
        {7, 7, 1, 3, 7, 4, 7, 1},
        {1, 7, 7, 7, 2, 2, 2, 1},
        {1, 5, 7, 6, 7, 1, 1, 7}
    };

    // Variáveis
    int i, j, pieceCounts[7] = {0};

    // Título
    printf("CONTADOR DE TIPOS DE PEDRAS EM TABULEIRO DE XADREZ\n\n");

    printf("======= Tipos de Pedras =======\n");
    printf("1 - Peões\t 2 - Torres\n");
    printf("3 - Reis\t 4 - Cavalos\n");
    printf("5 - Bispos\t 6 - Rainhas\n");
    printf("7 - Ausência de Pedra\n\n");

    printf("======= Tabuleiro Atual =======\n\n");

    // Loop de varredura do tabuleiro
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            // Lógica condicional para incrementar os contadores
            switch (chessBoard[i][j]) {

                // Peões
                case 1:
                    pieceCounts[0]++;
                    break;

                // Torres
                case 2:
                    pieceCounts[1]++;
                    break;

                // Reis
                case 3:
                    pieceCounts[2]++;
                    break;

                // Cavalos
                case 4:
                    pieceCounts[3]++;
                    break;

                // Bispos
                case 5:
                    pieceCounts[4]++;
                    break;

                // Rainhas
                case 6:
                    pieceCounts[5]++;
                    break;

                // Ausência de pedra
                default:
                    pieceCounts[6]++;
            }

            printf("[%d] ", chessBoard[i][j]);
        }

        printf("\n");
    }

    printf("\n== Quantidade de Pedras por Tipo ==\n\n");

    // Exibição dos resultados
    printf("Peões   = %d Pedra(s)\n", pieceCounts[0]);
    printf("Torres  = %d Pedra(s)\n", pieceCounts[1]);
    printf("Reis    = %d Pedra(s)\n", pieceCounts[2]);
    printf("Cavalos = %d Pedra(s)\n", pieceCounts[3]);
    printf("Bispos  = %d Pedra(s)\n", pieceCounts[4]);
    printf("Rainhas = %d Pedra(s)\n", pieceCounts[5]);
    printf("Vazios  = %d Casa(s)\n", pieceCounts[6]);

    // Executado com sucesso
    return 0;
}

/*
    Dado um tabuleiro de xadrez onde, para facilitar a indicação das pedras,
    vamos convencionar: 1 – Peões, 2 – Torres, 3 – Reis, 4 – Cavalos 5 – Bispos,
    6 – Rainhas e 7 – Ausência de Pedra. Conte e imprima a quantidade de cada
    tipo de pedra no tabuleiro abaixo:
                                [ 6 7 7 5 7 7 1 7 ]
                                [ 7 1 7 2 7 3 7 2 ]
                                [ 7 1 1 1 7 1 7 7 ]
                                [ 7 7 2 7 3 4 4 3 ]
                                [ 1 7 1 1 7 1 7 7 ]
                                [ 7 7 1 3 7 4 7 1 ]
                                [ 1 7 7 7 2 2 2 1 ]
                                [ 1 5 7 6 7 1 1 7 ]
*/
