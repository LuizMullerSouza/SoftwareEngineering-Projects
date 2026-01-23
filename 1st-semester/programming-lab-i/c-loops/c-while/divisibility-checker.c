// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number, counter = 0;

    // Título
    printf("VERIFICADOR DE DIVISIBILIDADE POR 3\n\n");

    printf("Digite 10 números inteiros para análise:\n");

    // Estrutura de repetição para leitura e resultado dos dados
    while (counter < 10) {
        printf("Digite o %dº número: ", counter + 1);
        scanf("%d", &number);

        // Lógica condicional para verificar divisibilidade
        if (number % 3 == 0) {
            printf(">> %d É divisível por 3\n\n", number);
        } else {
            printf(">> %d NÃO é divisível por 3\n\n", number);
        }

        // Incremento do contador
        counter++;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia dez números inteiros aleatórios
    e apresente os números que são divisíveis por 3 (três).
*/
