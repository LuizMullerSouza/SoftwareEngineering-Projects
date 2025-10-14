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
    printf("DESCOBRINDO O QUADRADO DOS NÚMEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme um valor: ");
    scanf("%d", &number);

    // A lógica é multiplicar o número por ele mesmo apenas uma vez
    result = number * number;

    // Resultado
    printf("\nO quadrado de %d é: %d\n", number, result);

    // Executado com sucesso
    return 0;
}

/*
    Leia um número inteiro e calcule e mostre o seu quadrado.
*/
