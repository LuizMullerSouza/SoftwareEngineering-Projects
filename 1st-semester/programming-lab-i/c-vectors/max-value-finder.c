// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define SIZE 10

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int numbers[SIZE], maxValue, i;

    // Título
    printf("LOCALIZADOR DE MAIOR NÚMERO DIGITADO\n\n");

    // Loop para leitura e verificação do maior valor
    for (i = 0; i < SIZE; i++) {

        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numbers[i]);

        if (i == 0) {
            maxValue = numbers[i];
        } else {
            if (numbers[i] > maxValue) {
                maxValue = numbers[i];
            }
        }
    }

    // Exibição do resultado
    printf("\nO maior número encontrado no Vetor foi: %d\n", maxValue);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um vetor de 10 números inteiros aleatórios
    e, em seguida, determinar e mostrar o maior valor do vetor.
*/
