// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number, currentDivisor = 1, divisorsCount = 0;

    // Título
    printf("VERIFICADOR DE NÚMERO PRIMO\n\n");

    // Entrada de dados
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &number);

    // Estrutura de repetição para verificar se o número é primo
    while (currentDivisor <= number) {
        if (number % currentDivisor == 0) {
            divisorsCount++;
        }
        currentDivisor++;
    }

    // Lógica condicional para exibição do resultado
    if (divisorsCount == 2) {
        printf("\nResultado: %d É um número primo!\n", number);
    } else {
        printf("\nResultado: %d NÃO É um número primo.\n", number);
    }

    // Executado com sucesso
    return 0;
}

/*
    Construa um programa que receba um número
    inteiro e verifique se o mesmo é primo.
*/
