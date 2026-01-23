// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number, highest, counter = 1;

    // Título
    printf("LOCALIZADOR DO MAIOR NÚMERO\n\n");

    // Leitura do primeiro número
    printf("Informe o 1º número inteiro: ");
    scanf("%d", &number);

    // Inicialização da variável
    highest = number;

    // Estrutura de repetição para localização do maior número
    while (counter < 10) {
        counter++;

        printf("Informe o %dº número inteiro: ", counter);
        scanf("%d", &number);

        // Lógica condicional para comparar os números
        if (number > highest) {
            highest = number;
        }
    }

    // Exibição do resultado
    printf("\nO maior número digitado foi: %d\n", highest);

    // Executado com sucesso
    return 0;
}

/*
    Construa um programa que leia dez números
    inteiros e identifique o maior número.
*/
