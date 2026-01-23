// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number, factorial = 1, counter = 1;

    // Título
    printf("CALCULADORA DE FATORIAL\n\n");

    // Entrada de dados
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &number);

    // Estrutura de repetição para calcular o fatorial
    while (counter <= number) {
        factorial = factorial * counter;
        counter++;
    }

    // Exibição do resultado
    printf("\nResultado: %d! = %d\n", number, factorial);

    // Executado com sucesso
    return 0;
}

/*
    Construa um programa que calcule o fatorial de
    um número N inteiro e positivo (N!). Saiba que:
    N! = 1 x 2 x 3 .... x (N -1) x N e que 0! = 1
*/
