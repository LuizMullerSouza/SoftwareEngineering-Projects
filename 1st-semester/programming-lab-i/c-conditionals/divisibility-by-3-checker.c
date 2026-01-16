// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number, remainder;

    // Título
    printf("VERIFICADOR DE DIVISIBILIDADE POR 3\n");

    // Entrada e leitura de dados
    printf("\nInforme um número inteiro: ");
    scanf("%d", &number);

    // Cálculo
    remainder = number % 3;

    // Lógica condicional para o resultado
    if (remainder == 0) {
        printf("\nO número %d É divisível por 3.\n", number);
    } else {
        printf("\nO número %d NÃO é divisível por 3.\n", number);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia um número inteiro e verifique e mostre se ele é divisível por 3.
*/
