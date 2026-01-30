// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float arrayA[20], arrayB[20], arrayC[20];
    int i;

    // Título
    printf("SUBTRATOR DE VETORES\n\n");

    printf("Preenchendo o Vetor A...\n\n");

    // Loop para leitura do Vetor A
    for (i = 0; i < 20; i++) {

        printf("Digite o %dº valor real: ", i + 1);
        scanf("%f", &arrayA[i]);
    }

    printf("\nPreenchendo o Vetor B...\n\n");

    // Loop para leitura do Vetor B
    for (i = 0; i < 20; i++) {

        printf("Digite o %dº valor real: ", i + 1);
        scanf("%f", &arrayB[i]);
    }

    printf("\nExibindo os valores do Vetor C\n\n");

    // Loop para cálculo e exibição do Vetor C
    for (i = 0; i < 20; i++) {

        // Cálculo da subtração
        arrayC[i] = arrayA[i] - arrayB[i];

        // Exibição do resultado
        printf("%dº valor = %g\n", i + 1, arrayC[i]);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia dois conjuntos (A e B) com 20 números reais cada e
    monte um conjunto C, onde cada elemento de C é a subtração
    do elemento correspondente
*/
