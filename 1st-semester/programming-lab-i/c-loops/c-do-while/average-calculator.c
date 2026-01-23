// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int sum = 0, count = 0, number;

    // Título
    printf("CALCULANDO A MÉDIA DE UM CONJUNTO DE NÚMEROS\n\n");

    // Estrutura de repetição para realizar a contagem, soma e incremento
    do {
        printf("Entre com um número (0 para sair): ");
        scanf("%d", &number);

        sum += number;
        count++;
    } while (number != 0);

    // Exibição do resultado
    printf("\nA média dos valores é: %.2f", (float) sum / count);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que imprima a média de um conjunto de números
    lidos, a contagem deve encerrar quando o usuário digitar 0.
*/
