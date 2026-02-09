// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define TAM 5

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int matrixA[TAM][TAM], x, i, j;

    // Título
    printf("SOMADOR DE SEGUNDA COLUNA POR ELEMENTO X\n\n");

    printf("Preencha a Matriz A com Inteiros - 5x5...\n\n");

    // Loop para entrada e leitura de dados
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {

            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }

        printf("\n");
    }

    // Leitura do valor somador
    printf("Digite um valor inteiro para X: ");
    scanf("%d", &x);

    printf("\nMatriz A - Preenchida\n\n");

    // Exibição da matriz original
    for (i = 0; i < TAM; i++) {

        printf("[\t");

        for (j = 0; j < TAM; j++) {
            printf("%d ", matrixA[i][j]);
        }

        printf("\t]\n");
    }

    printf("\nMatriz A - Modificada (Segunda Coluna + X)\n\n");

    // Loop de modificação e exibição da matriz
    for (i = 0; i < TAM; i++) {

        printf("[\t");

        for (j = 0; j < TAM; j++) {

            // Lógica condicional para verificar se está na segunda coluna
            if(j == 1){
                matrixA[i][j] += x;
            }

            printf("%d ", matrixA[i][j]);
        }

        printf("\t]\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler uma matriz 5x5 de números inteiros e ler um
    número inteiro x. A seguir, o programa deve somar todos os elementos da
    segunda coluna da matriz com x e exibir a matriz modificada.
*/
