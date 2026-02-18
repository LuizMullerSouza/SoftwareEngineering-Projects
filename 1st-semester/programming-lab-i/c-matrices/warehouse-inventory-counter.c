// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define SIZE 4

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável do depósito preenchida
    int storageYard[SIZE][SIZE] = {
        {201, 000, 000, 405},
        {000, 234, 000, 301},
        {000, 000, 302, 000},
        {533, 000, 453, 000}
    };

    // Variáveis
    int i, j, materialTotals[7] = {0};

    // Título
    printf("CONTADOR DE MATERIAIS EM PÁTIO DE DEPÓSITO\n\n");

    printf("====== Tipos de Materiais ======\n");
    printf("1 - Cimento\t 2 - Areia\n");
    printf("3 - Tubos\t 4 - Concreto\n");
    printf("5 - Madeira\t 6 - Cal\n");
    printf("7 - Saibro\n\n");

    printf("======= Pátio do Depósito =======\n\n");

    // Loop de varredura do depósito
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            // Lógica condicional para extração da quantidade de cada material
            switch (storageYard[i][j] % 10) {

                // Cimento
                case 1:
                    materialTotals[0] += storageYard[i][j] / 10;
                    break;

                // Areia
                case 2:
                    materialTotals[1] += storageYard[i][j] / 10;
                    break;

                // Tubos
                case 3:
                    materialTotals[2] += storageYard[i][j] / 10;
                    break;

                // Concreto
                case 4:
                    materialTotals[3] += storageYard[i][j] / 10;
                    break;

                // Madeira
                case 5:
                    materialTotals[4] += storageYard[i][j] / 10;
                    break;

                // Cal
                case 6:
                    materialTotals[5] += storageYard[i][j] / 10;
                    break;

                // Saibro
                default:
                    materialTotals[6] += storageYard[i][j] / 10;
            }

            printf("[%03d] ", storageYard[i][j]);
        }

        printf("\n");
    }

    printf("\n==== Quantidade Total por Material ====\n\n");

    // Exibição dos resultados
    printf("%d - Cimento\n", materialTotals[0]);
    printf("%d - Areia\n",   materialTotals[1]);
    printf("%d - Tubos\n",   materialTotals[2]);
    printf("%d - Concreto\n", materialTotals[3]);
    printf("%d - Madeira\n",  materialTotals[4]);
    printf("%d - Cal\n",      materialTotals[5]);
    printf("%d - Saibro\n",   materialTotals[6]);

    // Executado com sucesso
    return 0;
}

/*
    O diagrama abaixo representa o pátio de uma empresa de construções, e utiliza as
    seguintes convenções: Cimento – 1; Areia – 2; Tubos – 3; Concreto – 4; Madeira – 5;
    Cal – 6; Saibro – 7.
                                    [ 201 000 000 405 ]
                                    [ 000 234 000 301 ]
                                    [ 000 000 302 000 ]
                                    [ 533 000 453 000 ]
    Em cada espaço do depósito acima estão colocados o código do material e a quantidade
    correspondente. Assim, 201 significa que naquele local há 20 sacas de cimento (1), isto
    é, o número que está no quadro é composto em duas partes. Os dois primeiros algarismos
    indicam a quantidade e o último algarismo o código do material (000 indica que o local
    está vazio). Conte e imprima quantos elementos de cada material existe no pátio.
*/
