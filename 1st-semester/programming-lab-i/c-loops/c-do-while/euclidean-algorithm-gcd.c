// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int num1, num2, remainder, gcd, temp;

    // Título
    printf("ALGORITMO DE EUCLIDES\n\n");

    // Entrada de dados
    printf("Digite o primeiro valor inteiro positivo para N1: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor inteiro positivo para N2: ");
    scanf("%d", &num2);

    // Lógica condicional para N1 sempre ser o maior valor
    if (num2 > num1) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Estrutura de repetição para executar o algoritmo
    do {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;

    } while (remainder > 0);

    gcd = num1;

    // Exibição do resultado
    printf("\nResultado: O MDC é %d\n", gcd);

    // Executado com sucesso
    return 0;
}

/*
    O algoritmo de Euclides pode ser usado para encontrar o máximo divisor comum
    (MDC) de dois inteiros positivos, n1 e n2. Exemplo: suponha n1 = 72 e n2 = 42;
    Você pode usar este algoritmo da seguinte maneira:
    a) Divida o maior pelo menor (72/42): 72 = 42 * 1 + 30
    b) Divida o divisor (42) pelo resto (30): 42 = 30 * 1 + 12
    c) Repita este processo até que obtenha um resto igual a zero:
    30 = 12 * 2 + 6 >> 12 = 6 * 2 + 0
    d) O último resto não zero é o MDC de n1 e n2.
    Faça um programa usando o método acima, que leia dois números inteiros e, então,
    calcule e escreva o MDC entre eles.
*/
