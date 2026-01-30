// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int arrayA[15], arrayB[15], i;

    // Título
    printf("DOBRADOR DE VETORES\n\n");

    printf("Preenchendo o Vetor A...\n\n");

    // Loop para leitura do Vetor A e cálculo do Vetor B
    for (i = 0; i < 15; i++) {

        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &arrayA[i]);

        arrayB[i] = arrayA[i] * 2;
    }

    printf("\nExibindo os valores de B\n\n");

    // Loop para exibição do resultado
    for (i = 0; i < 15; i++) {
        printf("%dº valor = %d\n", i + 1, arrayB[i]);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia um conjunto A com 15 inteiros e monte um conjunto B,
    onde cada elemento de B é o dobro do correspondente em A.
*/
