// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    char flavorOption;

    // Título
    printf("CARDÁPIO DE PIZZARIA\n\n");

    // Menu de opções
    printf("=== MENU DE OPÇÕES ===\n");
    printf("Digite 'm' para Mussarela\n");
    printf("Digite 'c' para Calabresa\n");
    printf("Digite 'b' para Bacon\n\n");

    // Entrada de dados
    printf("Selecione o sabor de sua pizza: ");
    scanf(" %c", &flavorOption);

    // Estrutura de decisão para saída de dados
    switch(flavorOption) {

        case 'm':
            printf("\nPreparar Pizza de Mussarela...\n");
        break;

        case 'c':
            printf("\nPreparar Pizza de Calabresa...\n");
        break;

        case 'b':
            printf("\nPreparar Pizza de Bacon...\n");
        break;

        default:
            printf("\nOpção Incorreta\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa em C que exiba um cardápio de pizzaria e permita ao usuário
    escolher uma opção através de um caractere ('m', 'c' ou 'b'). Utilize a estrutura
    switch-case para processar a escolha e exibir a mensagem de preparo correspondente.
    Caso a opção seja inválida, informe o usuário.
*/
