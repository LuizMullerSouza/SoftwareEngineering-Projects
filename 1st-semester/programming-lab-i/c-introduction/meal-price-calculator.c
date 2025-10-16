// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float weightInKg, totalPrice;

    // Título
    printf("CALCULADORA DE PREÇO DE REFEIÇÃO POR QUILO\n");

    // Entrada e leitura de dados
    printf("\nSerá necessário informar o peso do prato servido.\n");

    printf("\nInforme o peso do seu prato (em kg): ");
    scanf("%f", &weightInKg);

    // Cálculo
    totalPrice = weightInKg * 60.00;

    // Resultado
    printf("\nO valor do seu prato é: R$%.2f\n", totalPrice);

    // Executado com sucesso
    return 0;
}

/*
    Um determinado restaurante cobra R$ 60,00 por cada quilo de refeição.
    Faça um programa que leia o peso do prato servido pelo cliente (em
    quilos) e mostre o valor a pagar.
*/
