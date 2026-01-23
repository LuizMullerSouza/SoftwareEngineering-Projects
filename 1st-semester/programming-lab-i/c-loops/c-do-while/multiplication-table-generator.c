// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number, counter, result;

    // Título
    printf("GERADOR DE TABUADAS COM DO-WHILE\n\n");

    // Entrada de dados
    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &number);

    // Inicialização do contador
    counter = 0;

    // Estrutura de repetição para gerar a tabuada
    do {
        result = number * counter;

        printf("\n %d x %d = %d", number, counter, result);

        counter++;
    } while (counter <= 10);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um número e exibir sua tabuada do 1 ao
    10. Suponha que o usuário entrará com um número também de 1 ao 10.
*/
