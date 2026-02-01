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

    // Lógica condicional para exibição do resultado
    if (minorCount == 0) {
        printf("\nTodas as pessoas digitadas são maiores de idade!");
        printf("\nTotal de pessoas menores de idade: 0 pessoas\n");
    } else if (adultCount == 0) {
        printf("\nTodas as pessoas digitadas são menores de idade!");
        printf("\nTotal de pessoas maiores de idade: 0 pessoas\n");
    } else if (minorCount == 1) {
        printf("\nApenas uma pessoa é menor de idade");
        printf("\nTotal de pessoas maiores de idade: %d pessoas\n", adultCount);
    } else if (adultCount == 1) {
        printf("\nTotal de pessoas menores de idade: %d pessoas", minorCount);
        printf("\nApenas uma pessoa é maior de idade\n");
    } else {
        printf("\nTotal de pessoas menores de idade: %d pessoas", minorCount);
        printf("\nTotal de pessoas maiores de idade: %d pessoas\n", adultCount);
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler, em um vetor, a idade de 10 pessoas e depois
    calcular e mostrar quantas pessoas são “maior de idade” e quantas pessoas
    são “menor de idade”.
*/
