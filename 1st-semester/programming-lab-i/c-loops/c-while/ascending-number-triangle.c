// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int row = 1, col;

    // Título
    printf("GERADOR DE TRIÂNGULO NUMÉRICO CRESCENTE\n\n");

    // Loop para linhas
    while (row <= 6) {
        col = 1;

        // Loop para colunas
        while (col <= row) {
            printf("%d ", col);
            col++;
        }

        printf("\n");
        row++;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que gere a seguinte saída:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4 5 6
*/
