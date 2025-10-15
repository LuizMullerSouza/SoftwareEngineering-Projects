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
    printf("VERIFICADOR DE NÚMERO PAR OU ÍMPAR\n");

    // Entrada e leitura de dados
    printf("\nInforme um número inteiro: ");
    scanf("%d", &number);

    // Cálculo
    remainder = number % 2;

    // Lógica condicional para o resultado
    if (remainder == 0) {
        printf("\nO número %d é PAR.\n", number);
    } else {
        printf("\nO número %d é ÍMPAR.\n", number);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia um número inteiro e verifique e mostre se o
    respectivo número é par ou ímpar.
*/
