// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int n, step = 1, currentVal = 1, counter = 1;

    // Título
    printf("GERADOR DE SEQUÊNCIA TRIANGULAR\n\n");

    // Entrada de dados
    printf("Digite um inteiro positivo N: ");
    scanf("%d", &n);

    printf("\nOs %d primeiros termos da sequência são:\n", n);

    // Estrutura de repetição para gerar a sequência
    while (counter <= n) {
        // Termo atual
        printf("%d ", currentVal);

        // Próximo termo
        step = step + 1;
        currentVal = currentVal + step;
        counter++;
    }

    printf("\n\n");

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia um inteiro positivo N. Calcule e mostre
    os N primeiros termos da sequência (1, 3, 6, 10, 15, 21, ...).
*/
