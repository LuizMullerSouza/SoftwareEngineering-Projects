// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int inputNumber, sumMultiples = 0, counter = 1;

    // Título
    printf("SOMADOR DE MÚLTIPLOS DE 5\n\n");

    printf("Digite valores inteiros ou digite 0 para encerrar\n\n");

    // Loop para leitura dos valores
    do {
        printf("Informe o %dº valor: ", counter);
        scanf("%d", &inputNumber);

        // Lógica condicional para encontrar múltiplos de 5
        if (inputNumber % 5 == 0) {
            sumMultiples += inputNumber;
        }

        counter++;

    } while (inputNumber != 0);

    // Exibição de resultados
    printf("\nSoma total dos números múltiplos de 5 = %d\n", sumMultiples);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia uma lista de números cujo último número é zero.
    Ao final, o programa deverá mostrar a soma de todos os números múltiplos
    de cinco da lista.
*/
