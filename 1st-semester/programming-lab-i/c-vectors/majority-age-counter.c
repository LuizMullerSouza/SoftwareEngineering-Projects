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
    int peopleAges[SIZE], minorCount = 0, adultCount = 0, i;

    // Título
    printf("CONTADOR DE MAIORIDADE\n\n");

    // Loop para leitura e verificação de maioridade
    for (i = 0; i < SIZE; i++) {

        printf("Digite a idade em anos da %dª pessoa: ", i + 1);
        scanf("%d", &peopleAges[i]);

        // Lógica condicional para classificação
        if (peopleAges[i] >= 18) {
            adultCount++;
        } else {
            minorCount++;
        }
    }

    // Exibição dos resultados
    printf("\nTotal de pessoas com menor idade: %d\n", minorCount);
    printf("Total de pessoas com maior idade: %d\n", adultCount);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler, em um vetor, a idade de 10 pessoas e depois
    calcular e mostrar quantas pessoas são “maior de idade” e quantas pessoas
    são “menor de idade”.
*/
