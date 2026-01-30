// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int arrayA[8], arrayB[8], i;

    // Título
    printf("TRIPLICADOR DE VETORES\n\n");

    printf("Preenchendo o Vetor A...\n\n");

    // Loop para leitura do vetor A e cálculo do vetor B
    for (i = 0; i < 8; i++) {

        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &arrayA[i]);

        arrayB[i] = arrayA[i] * 3;
    }

    // Exibição do resultado
    printf("\nExibindo os valores do Vetor B\n\n");

    for (i = 0; i < 8; i++) {
        printf("%dº valor = %d\n", i + 1, arrayB[i]);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia um conjunto A de 8 números inteiros e gere em um conjunto
    B com o mesmo tamanho, com todos os elementos do conjunto A
    multiplicados por 3, e no fim, apresente o conjunto B.
*/
