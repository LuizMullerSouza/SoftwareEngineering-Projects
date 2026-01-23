// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number;

    // Título
    printf("VALIDADOR DE NÚMERO POSITIVO\n\n");

    // Loop de validação
    do {
        printf("Digite um número positivo: ");
        scanf("%d", &number);
    } while (number < 0);

    // Número positivo é encontrado
    printf("\nÉ um número positivo!\n");

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que receba diversos números, mas ao receber o
    primeiro número positivo, ele confirma a positividade deste número
    e encerra o programa, informando ao usuário que ele encontrou um
    número positivo. Considere positivo >= 0.
*/
