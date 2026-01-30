// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int currentBatch, totalProducts = 0, batchCounter, boxXL, boxL, boxM, boxS;

    // Título
    printf("GERENCIADOR DE EXPEDIÇÕES DA COMPANHIA C.I.A.\n\n");

    printf("Digite as quantidades por lote ou digite 0 para finalizar o programa\n\n");

    // Entrada e leitura de dados
    printf("Lote 1: ");
    scanf("%d", &currentBatch);

    for (batchCounter = 1; currentBatch != 0; batchCounter++) {

        // Somador do total de produtos
        totalProducts += currentBatch;

        printf("Lote %d: ", batchCounter + 1);
        scanf("%d", &currentBatch);
    }

    // Cálculo das caixas
    boxXL = totalProducts / 50;
    totalProducts %= 50;

    boxL = totalProducts / 20;
    totalProducts %= 20;

    boxM = totalProducts / 5;

    boxS = totalProducts % 5;

    // Exibição do resultado
    printf("\n   Caixa         |      Quantidade\n");
    printf("------------------------------------\n");
    printf("Extra-Grande     |          %d\n", boxXL);
    printf("Grande           |          %d\n", boxL);
    printf("Média            |          %d\n", boxM);
    printf("Pequena          |          %d\n", boxS);

    // Executado com sucesso
    return 0;
}

/*
    O funcionário responsável pela expedição na Companhia C. I. A. tem o
    seguinte problema. O produto é muito frágil e deve ser enviado em caixas
    especiais. Essas caixas estão disponíveis em quatro tamanhos: extra-grande
    (50 unidades), grande (20 unidades), média (5 unidades) e pequena (1 unidades).
    Faça um programa que leia a quantidade de produtos que devem ser enviados e que
    mostra o número de caixas necessárias, utilizando o menor número de caixas possível.
    O programa deve receber uma serie de quantidade de produtos terminada pelo valor 0.
*/
