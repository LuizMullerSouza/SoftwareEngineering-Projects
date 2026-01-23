// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number, sum = 0, count = 0;
    float average;

    // Título
    printf("CÁLCULO DE MÉDIA DE NÚMEROS POSITIVOS\n\n");

    printf("Digite uma sequência de números (digite -99 para encerrar):\n");

    // Estrutura de repetição para leitura e cálculo dos dados
    do {
        scanf("%d", &number);

        if (number > 0) {
            sum += number;
            count++;
        }
    } while (number != -99);

    // Exibição do resultado
    if (count > 0) {
        average = (float) sum / count;
        printf("\nMédia dos números positivos: %.2f\n", average);
    } else {
        printf("\nNenhum número positivo foi digitado.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia uma lista de números aleatórios, cujo último número
    é -99. Ao final, o programa deve mostrar a média aritmética de todos os números
    positivos da lista, os números negativos devem ser descartados.
*/
