// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int nTerms, i;
    float harmonicSum = 0.0;

    // Título
    printf("SOMADOR DE SEQUÊNCIA HARMÔNICA\n");

    // Entrada de dados com validação
    do {
        printf("\nDigite a quantidade de termos N (> 0): ");
        scanf("%d", &nTerms);

        if (nTerms <= 0) {
            printf("Erro: O valor deve ser maior que zero. Tente novamente.\n");
        }
    } while (nTerms <= 0);

    // Estrutura de repetição para calcular o somador da série
    for (i = 1; i <= nTerms; i++) {
        harmonicSum += 1.0 / i;
    }

    // Exibição do resultado
    printf("\nH com %d termos: %g\n", nTerms, harmonicSum);

    // Executado com sucesso
    return 0;
}

/*
    Dada a fórmula: H = 1 + 1/2 + 1/3 + 1/4 + ..... + 1/N. Faça um programa que calcule
    o número H, dado o número inteiro N. Utilize validação de entrada e laço FOR.
*/
