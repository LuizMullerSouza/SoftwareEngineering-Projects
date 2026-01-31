// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define NUM_CARS 5

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    char carModels[NUM_CARS], mostEconomicModel;
    float fuelEfficiency[NUM_CARS], bestEfficiency;
    int i;

    // Título
    printf("CALCULADORA DE CARROS ECONÔMICOS\n\n");

    printf("--- Leitura dos Modelos ---\n\n");

    // Loop para leitura do modelo dos 5 carros
    for (i = 0; i < NUM_CARS; i++) {

        printf("Informe o modelo do %dº carro (caractere): ", i + 1);
        scanf(" %c", &carModels[i]);
    }

    printf("\n--- Leitura do Consumo ---\n\n");

    // Loop para leitura do consumo por modelo e cálculo do mais econômico
    for (i = 0; i < NUM_CARS; i++) {

        printf("Informe o consumo (KM/L) do modelo %c: ", carModels[i]);
        scanf("%f", &fuelEfficiency[i]);

        // Lógica para encontrar o mais econômico
        if (i == 0) {
            mostEconomicModel = carModels[i];
            bestEfficiency = fuelEfficiency[i];
        } else if (fuelEfficiency[i] > bestEfficiency) {
            mostEconomicModel = carModels[i];
            bestEfficiency = fuelEfficiency[i];
        }
    }

    // Exibição do resultado
    printf("\nO modelo %c é o mais econômico, fazendo %g KM/L\n\n", mostEconomicModel, bestEfficiency);

    printf("Quantidade de litros necessários para percorrer 1.000 KM\n");
    printf("--------------------------------------------------------\n");

    for (i = 0; i < NUM_CARS; i++) {

        float litersNeeded = 1000 / fuelEfficiency[i];
        printf("Modelo %c = %.2f Litros\n", carModels[i], litersNeeded);

    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que preencha um vetor com os modelos de cinco carros
    (exemplo de modelos: Fusca = ‘F’, Gol = ‘G’, etc.). Carregue outro vetor
    com o consumo desses carros (km/l). Calcule e mostre:
    - O modelo de carro mais econômico;
    - Quantos litros de combustível cada um consome para percorrer 1.000 km.
*/
