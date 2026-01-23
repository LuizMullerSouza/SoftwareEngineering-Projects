// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int counter = 1;

    // Título
    printf("CONTANDO DE 1 A 10 COM WHILE\n\n");

    // Estrutura de repetição While para exibir a contagem
    while (counter <= 10) {
        printf("Número: %d\n", counter);

        // Incremento
        counter++;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que utilize a estrutura de repetição
    WHILE para exibir na tela uma contagem progressiva de
    1 a 10, imprimindo cada número em uma nova linha.
*/
