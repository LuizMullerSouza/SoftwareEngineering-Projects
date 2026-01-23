// Bibliotecas
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float base, result;
    int exponent;

    // Título
    printf("CALCULADORA DE POTÊNCIA\n\n");

    // Entrada da base
    printf("Informe um valor real para a base: ");
    scanf("%f", &base);

    // Entrada do expoente com validação
    do {
        printf("Informe um valor natural para o expoente: ");
        scanf("%d", &exponent);

        if (exponent < 0) {
            printf("Erro: O expoente deve ser um número natural (>= 0).\n\n");
        }

    } while (exponent < 0);

    // Cálculo da potência
    result = pow(base, exponent);

    // Exibição do resultado
    printf("\nResultado: %g elevado a %d é: %g\n", base, exponent, result);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que dados um número real x e um natural n, exiba a potência
    x^n. O programa deve garantir que o expoente fornecido seja um número natural
    (não negativo). Utilize apenas variáveis do tipo float e int.
*/
