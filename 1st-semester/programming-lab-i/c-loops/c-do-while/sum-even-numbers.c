// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int nTerms, count, currentEven = 2, sum = 0;

    // Título
    printf("SOMADOR DOS N PRIMEIROS NÚMEROS PARES\n\n");

    // Entrada de dados com validação
    do {
        printf("Informe quantos números pares deseja somar: ");
        scanf("%d", &nTerms);

        if (nTerms <= 0) {
            printf("Erro: o valor deve ser positivo > 0. Tente novamente.\n\n");
        }
    } while (nTerms <= 0);

    printf("\nSequência: ");

    // Loop para somar N pares
    for (count = 1; count <= nTerms; count++) {

        printf("%d", currentEven);

        sum += currentEven;

        if (count < nTerms) {
            printf(" + ");
        }

        currentEven += 2;
    }

    // Exibição do resultado
    printf(" = %d\n", sum);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia um número inteiro positivo n e imprima a
    soma dos n primeiros números pares maiores do que zero. Exemplo:
    n = 4 -> 2 + 4 + 6 + 8 = 20
*/
