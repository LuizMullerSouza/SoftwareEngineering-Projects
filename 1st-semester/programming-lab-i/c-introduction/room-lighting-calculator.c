// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float lampPower, roomWidth, roomLength, roomArea, totalPowerNeeded, calculatedLamps;
    int requiredLamps;

    // Título
    printf("CALCULADORA DE LÂMPADAS POR CÔMODO\n");

    // Entrada e leitura de dados
    printf("\nInforme a potência (em watts) de cada lâmpada: ");
    scanf("%f", &lampPower);

    printf("Informe a largura do cômodo (em metros): ");
    scanf("%f", &roomWidth);

    printf("Informe o comprimento do cômodo (em metros): ");
    scanf("%f", &roomLength);

    // Cálculo
    roomArea = roomWidth * roomLength;
    totalPowerNeeded = roomArea * 20.0;
    calculatedLamps = totalPowerNeeded / lampPower;

    // Atribui o valor calculado à variável inteira
    requiredLamps = calculatedLamps;

    // Resultado
    printf("\nPara um cômodo de %.2f m², são necessários %d lâmpadas de %.0fW.\n", roomArea, requiredLamps, lampPower);

    // Executado com sucesso
    return 0;
}

/*
    Calcule e mostre o número de lâmpadas necessárias para iluminar um determinado cômodo de uma residência.
    Dados de entrada: a potência da lâmpada utilizada (em watts), as dimensões (largura e comprimento, em
    metros) do cômodo. Considere que a potência necessária é de 20 watts por metro quadrado.
*/
