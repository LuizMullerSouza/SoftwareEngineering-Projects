// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float litersPurchased, totalCost, discountAmount, basePricePerLiter = 5.40;

    // Título
    printf("CALCULADORA DE PREÇO DA GASOLINA COM DESCONTO\n");

    // Entrada e leitura de dados
    printf("\nInforme a quantidade de gasolina abastecida (em litros): ");
    scanf("%f", &litersPurchased);

    // Lógica condicional para calcular o desconto
    if (litersPurchased <= 20.0) {
        discountAmount = (basePricePerLiter * litersPurchased) * 0.04;
    } else {
        discountAmount = (basePricePerLiter * litersPurchased) * 0.06;
    }

    // Cálculo
    totalCost = (basePricePerLiter * litersPurchased) - discountAmount;

    // Resultado
    printf("\nO valor total a ser pago é: R$%.2f\n", totalCost);

    // Executado com sucesso
    return 0;
}

/*
    Um posto está vendendo Gasolina com os seguintes descontos:
    - Até 20 litros: desconto de 4% por litro.
    - Acima de 20 litros: desconto de 6% por litro.
    Faça um programa que leia o número de litros vendidos de gasolina
    e mostre o valor a ser pago pelo cliente. Considere que o preço do
    litro da gasolina é R$ 5,40.
*/
