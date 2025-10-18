// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float litersPurchased, totalCost, discountAmount, basePricePerLiter = 5.40;

    // T�tulo
    printf("CALCULADORA DE PRE�O DA GASOLINA COM DESCONTO\n");

    // Entrada e leitura de dados
    printf("\nInforme a quantidade de gasolina abastecida (em litros): ");
    scanf("%f", &litersPurchased);

    // L�gica condicional para calcular o desconto
    if (litersPurchased <= 20.0) {
        discountAmount = (basePricePerLiter * litersPurchased) * 0.04;
    } else {
        discountAmount = (basePricePerLiter * litersPurchased) * 0.06;
    }

    // C�lculo
    totalCost = (basePricePerLiter * litersPurchased) - discountAmount;

    // Resultado
    printf("\nO valor total a ser pago �: R$%.2f\n", totalCost);

    // Executado com sucesso
    return 0;
}

/*
    Um posto est� vendendo Gasolina com os seguintes descontos:
    - At� 20 litros: desconto de 4% por litro.
    - Acima de 20 litros: desconto de 6% por litro.
    Fa�a um programa que leia o n�mero de litros vendidos de gasolina
    e mostre o valor a ser pago pelo cliente. Considere que o pre�o do
    litro da gasolina � R$ 5,40.
*/
