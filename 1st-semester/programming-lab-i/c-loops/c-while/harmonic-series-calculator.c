// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int n, counter;
    float h;

    // Título
    printf("CALCULADORA DE SÉRIE HARMÔNICA\n");
    printf("H = 1 + 1/2 + 1/3 + ... + 1/N\n\n");

    // Entrada de dados
    printf("Informe a quantidade de termos (N): ");
    scanf("%d", &n);

    // Inicialização das variáveis
    h = 0;
    counter = 1;

    // Estrutura de repetição para o cálculo da sequência
    while (counter <= n) {
        h = h + 1.0 / counter;
        counter++;
    }

    // Exibição do resultado
    printf("\nO valor de H com %d termos é: %g\n", n, h);

    // Executado com sucesso
    return 0;
}

/*
    Dada a fórmula: H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N. Faça um programa
    que calcule o número H, dado o número inteiro N inserido pelo usuário.
    Utilize a estrutura de repetição WHILE.
*/
