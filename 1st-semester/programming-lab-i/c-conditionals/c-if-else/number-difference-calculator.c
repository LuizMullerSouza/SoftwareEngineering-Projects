// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int firstNumber, secondNumber, difference;

    // Título
    printf("DIFERENÇA ENTRE O MAIOR E O MENOR NÚMERO\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro número inteiro: ");
    scanf("%d", &firstNumber);

    printf("Informe o segundo número inteiro: ");
    scanf("%d", &secondNumber);

    // Condição para calcular a diferença
    if (firstNumber > secondNumber) {
        difference = firstNumber - secondNumber;
    } else {
        difference = secondNumber - firstNumber;
    }

    // Resultado
    printf("\nA diferença entre o maior e o menor valor é: %d\n", difference);

    // Executado com sucesso
    return 0;
}

/*
    Leia dois números inteiros, determine e mostre a diferença do maior pelo menor.
*/
