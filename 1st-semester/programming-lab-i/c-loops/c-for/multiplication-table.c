// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number, i;

    // Título
    printf("GERADOR DE TABUADA DE 1 A 10\n\n");

    // Entrada de dados
    printf("Digite um valor inteiro para ver sua tabuada: ");
    scanf("%d", &number);

    printf("\n--- Tabuada do %d ---\n", number);

    // Estrutura de repetição para calcular e exibir a tabuada
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    // Executado com sucesso
    return 0;
}

/*
    Crie um programa que exiba a tabuada do 1 ao 10
    de qualquer número inteiro lido pelo usuário.
*/
