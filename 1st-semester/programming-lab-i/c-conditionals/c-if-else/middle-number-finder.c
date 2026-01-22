// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number1, number2, number3;

    // Título
    printf("ENCONTRADOR DO VALOR INTERMEDIÁRIO ENTRE TRÊS NÚMEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro número inteiro: ");
    scanf("%d", &number1);

    printf("Informe o segundo número inteiro: ");
    scanf("%d", &number2);

    printf("Informe o terceiro número inteiro: ");
    scanf("%d", &number3);

    printf("\nEntre os números %d, %d e %d:\n", number1, number2, number3);

    // Lógica condicional para encontrar o número intermediário
    if ((number1 < number2 && number1 > number3) || (number1 > number2 && number1 < number3)) {
        printf("O número intermediário é: %d\n", number1);
    } else if ((number2 < number1 && number2 > number3) || (number2 > number1 && number2 < number3)) {
        printf("O número intermediário é: %d\n", number2);
    } else {
        printf("O número intermediário é: %d\n", number3);
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia três números inteiros e que determine e
    mostre o valor intermediário, entre o menor e o maior número.
    Suponha que os números sejam diferentes.
*/
