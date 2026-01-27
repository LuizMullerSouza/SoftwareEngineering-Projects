// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int row = 6, col;

    // Título
    printf("GERADOR DE TRIÂNGULO NUMÉRICO DECRESCENTE\n\n");

    // Loop para linhas
    while (row >= 1) {
        col = 6;

        // Loop para colunas
        while (col >= row) {
            printf("%d ", col);
            col--;
        }

        printf("\n");
        row--;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que gere a saída abaixo:
    6
    6 5
    6 5 4
    6 5 4 3
    6 5 4 3 2
    6 5 4 3 2 1
*/
