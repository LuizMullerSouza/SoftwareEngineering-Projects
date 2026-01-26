// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int nTerms, temp, previous = 0, current = 1, counter = 1;

    // Título
    printf("CALCULADORA DE SÉRIE DE FIBONACCI\n\n");

    // Entrada de dados
    printf("Digite o N-ésimo termo para a criação da série: ");
    scanf("%d", &nTerms);
    printf("\nSequência: ");

    // Estrutura de repetição para exibir a sequência até o N-ésimo termo, e somar os próximos termos
    while (counter <= nTerms) {
        printf("%d ", current);

        temp = current;
        current = current + previous;
        previous = temp;

        counter++;
    }

    printf("\n");

    // Executado com sucesso
    return 0;
}

/*
    A série de Fibonacci é expressa da seguinte forma: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
    Faça um programa que calcule a série de Fibonacci, para N termos, onde N deve ser lido.
*/
