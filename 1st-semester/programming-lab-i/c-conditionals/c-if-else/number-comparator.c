// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int firstNumber, secondNumber;

    // Título
    printf("COMPARADOR DE NÚMEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro número inteiro: ");
    scanf("%d", &firstNumber);

    printf("Informe o segundo número inteiro: ");
    scanf("%d", &secondNumber);

    // Lógica condicional para o resultado
    if (firstNumber == secondNumber) {
        printf("\nOs números são IGUAIS.\n");
    } else {
        if (firstNumber > secondNumber) {
            printf("\nOs números são DIFERENTES. O maior valor é %d e o menor é %d.\n", firstNumber, secondNumber);
        } else {
            printf("\nOs números são DIFERENTES. O maior valor é %d e o menor é %d.\n", secondNumber, firstNumber);
        }
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia dois números inteiros, compare e mostre se são iguais ou diferentes.
    Caso sejam diferentes, determine e mostre o maior número entre os dois.
*/
