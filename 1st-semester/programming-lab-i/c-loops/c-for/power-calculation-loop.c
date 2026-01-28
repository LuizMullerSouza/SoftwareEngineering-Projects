// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float base;
    float result = 1.0; // Inicializado em 1 (elemento neutro da multiplicação)
    int exponent;       // Expoente deve ser inteiro (Natural)
    int i;

    // Título
    printf("CALCULADORA DE POTÊNCIA (VIA LOOP)\n\n");

    // Entrada da Base (Real)
    printf("Digite um valor real para a base: ");
    scanf("%f", &base);

    // Entrada do Expoente (Natural/Inteiro)
    printf("Digite um valor natural para o expoente: ");
    scanf("%d", &exponent);

    // Tratamento para expoentes negativos (opcional, mas boa prática)
    if (exponent < 0) {
        printf("\nErro: Este programa só aceita expoentes naturais (>= 0).\n");
        return 1;
    }

    // Estrutura de repetição FOR
    // Repete a multiplicação 'exponent' vezes
    for (i = 1; i <= exponent; i++) {
        result = result * base; // ou result *= base;
    }

    // Exibição do resultado
    // %g remove zeros desnecessários
    printf("\nResultado: %g elevado a %d = %g\n\n", base, exponent, result);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que dados um número real x e um natural n, exiba a potência x^n.
    Utilize a estrutura de repetição FOR.
*/
