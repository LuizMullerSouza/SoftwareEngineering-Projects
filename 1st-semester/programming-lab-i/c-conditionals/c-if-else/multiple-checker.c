// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int firstNumber, secondNumber, remainder;

    // Título
    printf("VERIFICADOR DE MÚLTIPLOS\n");

    // Entrada e leitura de dados
    printf("\nInforme o primeiro número inteiro: ");
    scanf("%d", &firstNumber);

    printf("Informe o segundo número inteiro (divisor): ");
    scanf("%d", &secondNumber);

    // Cálculo
    remainder = firstNumber % secondNumber;

    // Lógica condicional para o resultado
    if (remainder == 0) {
        printf("\nO número %d É múltiplo de %d.\n", firstNumber, secondNumber);
    } else {
        printf("\nO número %d NÃO é múltiplo de %d.\n", firstNumber, secondNumber);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia dois números inteiros n1 e n2, verifique e mostre se n1 é ou não múltiplo de n2.
*/
