// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float weightInKg, totalPrice;

    // T�tulo
    printf("CALCULADORA DE PRE�O DE REFEI��O POR QUILO\n");

    // Entrada e leitura de dados
    printf("\nSer� necess�rio informar o peso do prato servido.\n");

    printf("\nInforme o peso do seu prato (em kg): ");
    scanf("%f", &weightInKg);

    // C�lculo
    totalPrice = weightInKg * 60.00;

    // Resultado
    printf("\nO valor do seu prato �: R$%.2f\n", totalPrice);

    // Executado com sucesso
    return 0;
}

/*
    Um determinado restaurante cobra R$ 60,00 por cada quilo de refei��o.
    Fa�a um programa que leia o peso do prato servido pelo cliente (em
    quilos) e mostre o valor a pagar.
*/
