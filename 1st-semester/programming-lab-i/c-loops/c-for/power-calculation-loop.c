// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float base, result = 1.0;
    int exponent, i;

    // Título
    printf("CALCULADORA DE POTÊNCIA EM LOOP FOR\n\n");

    // Entrada e leitura da base
    printf("Digite um valor real para a base: ");
    scanf("%f", &base);

    // Entrada e leitura do expoente
    printf("Digite um valor natural para o expoente: ");
    scanf("%d", &exponent);

    // Lógica condicional para valores inválidos de expoente
    if (exponent < 0) {
        printf("\nErro: Este programa só aceita expoentes naturais (>= 0)\n");
        return 1;
    }

    // Estrutura de repetição para calcular a potência
    for (i = 1; i <= exponent; i++) {
        result = result * base;
    }

    // Exibição do resultado
    printf("\n%g ^ %d = %g\n", base, exponent, result);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que dados um número real x e um natural n,
    exiba a potência x^n. Utilize a estrutura de repetição FOR.
*/
