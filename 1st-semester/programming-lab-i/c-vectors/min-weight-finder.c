// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define SIZE 10

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float weights[SIZE], minWeight;
    int i;

    // Título
    printf("LOCALIZADOR DE MENOR PESO ENTRE PESSOAS\n\n");

    // Loop para leitura e verificação do menor peso
    for (i = 0; i < SIZE; i++) {

        printf("Informe o peso (KG) da %dª pessoa: ", i + 1);
        scanf("%f", &weights[i]);

        // Lógica condicional para encontrar o menor valor
        if (i == 0) {
            minWeight = weights[i];
        } else {
            if (weights[i] < minWeight) {
                minWeight = weights[i];
            }
        }
    }

    // Exibição do resultado
    printf("\nO menor peso lido foi: %.2f KG\n", minWeight);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler, em um vetor, o peso de 10 pessoas e
    depois calcular e mostrar o menor peso dentre todos que foram lidos.
*/
