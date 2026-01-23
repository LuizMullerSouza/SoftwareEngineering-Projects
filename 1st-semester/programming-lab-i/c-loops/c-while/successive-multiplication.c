// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int num1, num2, product = 0, counter = 0;

    // Título
    printf("MULTIPLICAÇÃO POR SOMAS SUCESSIVAS\n\n");

    // Entrada de dados
    printf("Digite dois números inteiros positivos (separados por espaço): ");
    scanf("%d %d", &num1, &num2);

    // Estrutura de repetição para cálculo
    while (counter < num2) {
        product = product + num1;
        counter = counter + 1;
    }

    // Exibição do resultado
    printf("\nO produto de %d x %d é: %d\n\n", num1, num2, product);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que calcule o produto de dois números lidos da entrada (n1 e n2)
    através do método de somas sucessivas. Suponha que n1 e n2 são positivos. Exemplo:
                                  Valores lidos: 3 4
                                    Impressão: 12
                            Dica: 3 x 4 = 3 + 3 + 3 + 3 = 12
*/
