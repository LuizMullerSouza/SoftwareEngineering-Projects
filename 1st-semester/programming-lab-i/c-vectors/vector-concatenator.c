// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int arrayA[15], arrayB[15], arrayC[30], i;

    // Título
    printf("CONCATENAÇÃO DE VETORES\n\n");

    printf("Preenchendo o Vetor A...\n\n");

    // Loop para leitura do Vetor A e preenchimento da primeira metade do Vetor C
    for (i = 0; i < 15; i++) {

        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &arrayA[i]);

        arrayC[i] = arrayA[i];
    }

    printf("\nPreenchendo o Vetor B...\n\n");

    // Loop para leitura do Vetor B e preenchimento da segunda metade do Vetor C
    for (i = 0; i < 15; i++) {

        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &arrayB[i]);

        arrayC[i + 15] = arrayB[i];
    }

    printf("\nExibindo os valores de C\n\n");

    // Loop para exibição do Vetor C
    for (i = 0; i < 30; i++) {
        printf("%dº valor = %d\n", i + 1, arrayC[i]);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia dois conjuntos A e B com 15 inteiros cada e monte um conjunto C,
    com 30 elementos onde os 15 primeiros são os elementos de A e o restante
    os elementos de B.
*/
