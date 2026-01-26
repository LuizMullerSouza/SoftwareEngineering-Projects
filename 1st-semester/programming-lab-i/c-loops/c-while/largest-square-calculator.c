// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int inputN, maxSquare, base = 1;

    // Título
    printf("CALCULADORA DE MAIOR QUADRADO\n\n");

    // Entrada de dados
    printf("Digite um valor inteiro positivo para N: ");
    scanf("%d", &inputN);

    // Estrutura de repetição para encontrar o maior quadrado
    while (base * base <= inputN) {
        base++;
    }

    base--;

    // Cálculo do quadrado final
    maxSquare = base * base;

    // Exibição do resultado
    printf("\nO maior quadrado menor ou igual a %d é: %d - Quadrado de %d\n", inputN, maxSquare, base);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia um número inteiro positivo N. Calcule e mostre o maior quadrado menor
    ou igual a N. Por exemplo, se N for maior ou igual a 38, o menor quadrado é 36 (quadrado de 6).
*/
