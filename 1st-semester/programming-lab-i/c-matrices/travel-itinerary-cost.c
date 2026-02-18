// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int numCities, itineraryLength, totalCost = 0, origin, destination, i, j, k;

    // Título
    printf("GERENCIADOR DE CUSTOS DE ITINERÁRIOS DE VIAGENS\n");

    // Entrada e leitura de dados do número de cidades com validação
    do {

        printf("\nDigite o número total de cidades: ");
        scanf("%d", &numCities);

        if (numCities < 1) {
            printf("Erro: o número de cidades deve ser >= 1. Tente novamente.\n");
        }

    } while (numCities < 1);

    // Entrada e leitura de dados do número de paradas com validação
    do {

        printf("\nDigite o número de paradas do itinerário: ");
        scanf("%d", &itineraryLength);

        if (itineraryLength < 2) {
            printf("Erro: o número de paradas deve ser >= 2. Tente novamente.\n");
        }

    } while (itineraryLength < 2);

    // Variáveis dinâmicas
    int costMatrix[numCities][numCities], itineraryVector[itineraryLength];

    printf("\nPreenchendo a Tabela de Custos de Transportes - %dx%d\n", numCities, numCities);
    printf("---------- Os preços devem ser inteiros ----------\n\n");

    // Loop para preenchimento da matriz de custos
    for (i = 0; i < numCities; i++) {
        for (j = 0; j < numCities; j++) {

            if (i == j) {
                printf("Permanecer na [Cidade %d] = ", i);
            } else {
                printf("Viagem [Cidade %d] -> [Cidade %d] = ", i, j);
            }

            scanf("%d", &costMatrix[i][j]);
        }

        printf("\n");
    }

    printf("Preenchendo o Itinerário - %d Cidades\n", itineraryLength);
    printf("-- Use os IDs das cidades - 0 a %d --\n", numCities - 1);

    // Loop para preenchimento do vetor de itinerário
    for (i = 0; i < itineraryLength; i++) {

        do {

            printf("\n%dª Cidade (ID): ", i + 1);
            scanf("%d", &itineraryVector[i]);

            if (itineraryVector[i] >= numCities || itineraryVector[i] < 0) {
                printf("Erro: cidade inválida. Digite um ID entre 0 e %d.\n", numCities - 1);
            }

        } while (itineraryVector[i] >= numCities || itineraryVector[i] < 0);
    }

    // Cálculo do custo total
    for (k = 0; k < itineraryLength - 1; k++) {

        origin = itineraryVector[k];
        destination = itineraryVector[k + 1];

        totalCost += costMatrix[origin][destination];
    }

    // Exibição do resultado
    printf("\n------------------------------------------------");
    printf("\nCusto Total de Transporte do Itinerário: %d", totalCost);
    printf("\n------------------------------------------------\n");

    // Executado com sucesso
    return 0;
}

/*
    Os elementos A[i][j] de uma matriz inteira An×n representam os custos de transportes
    da cidade i para a cidade j. Dados n itinerários, cada um com k cidades, calcular o
    custo total para cada itinerário:
                                        4 1 2 3
                                        5 2 1 400
                                        2 1 3 8
                                        7 1 2 5
                        O custo do itinerário: 0 3 1 3 3 2 1 0 é:
        A03 + A31 + A13 + A33 + A32 + A21 + A10 = 3 + 1 + 400 + 5 + 2 + 1 + 5 = 417
*/
