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
    int numbers[SIZE], targetNumber, occurrenceCount = 0, i;

    // Título
    printf("LOCALIZADOR DE NÚMERO EM VETOR\n\n");

    printf("Preenchendo o Vetor de %d posições...\n\n", SIZE);

    // Loop para entrada e leitura de dados do vetor
    for (i = 0; i < SIZE; i++) {

        printf("Informe o %dº valor inteiro: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Leitura do número alvo
    printf("\nInforme qual número inteiro será buscado no vetor: ");
    scanf("%d", &targetNumber);

    // Lógica condicional para busca e contagem do número
    for (i = 0; i < SIZE; i++) {

        if (numbers[i] == targetNumber) {
            occurrenceCount++;
        }
    }

    // Exibição do resultado com formatação
    if (occurrenceCount == 0) {
        printf("\nO número %d não apareceu nenhuma vez no vetor\n", targetNumber);
    } else if (occurrenceCount == 1) {
        printf("\nO número %d apareceu apenas uma vez no vetor\n", targetNumber);
    } else {
        printf("\nO número %d apareceu %d vezes no vetor\n", targetNumber, occurrenceCount);
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um vetor de 10 números inteiros, como também, ler um
    número inteiro x. A seguir, o programa deve calcular e mostrar quantas vezes o
    número x aparece no vetor.
*/
