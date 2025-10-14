// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number, result;

    // Título
    printf("DOBRADOR DE NÚMEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme um valor: ");
    scanf("%d", &number);

    // A lógica é multiplicar o número por dois
    result = number * 2;

    // Resultado
    printf("\nO dobro de %d é: %d\n", number, result);

    // Executado com sucesso
    return 0;
}

/*
    Leia um número inteiro e calcule e mostre o seu dobro.
*/
