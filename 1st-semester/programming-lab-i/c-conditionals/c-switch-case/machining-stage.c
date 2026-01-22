// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    int stage;

    // Título
    printf("VERIFICADOR DE ESTÁGIO EM USINA\n\n");

    // Entrada de dados
    printf("Digite o estágio de usinagem: ");
    scanf("%d", &stage);

    // Estrutura de decisão para saída de dados
    switch(stage) {

        case 1:
            printf("\nDesbaste Grosso...");
        break;

        case 2:
            printf("\nDesbaste Fino...");
        break;

        case 3:
            printf("\nAcabamento...");
        break;

        case 4:
            printf("\nPolimento...");
        break;

        default:
            printf("\nEstágio Inválido\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que receba um código numérico de 1 a 4 correspondente
    a um estágio de usinagem e mostre a descrição do estágio na tela utilizando
    a estrutura switch-case.
    1 - Desbaste Grosso
    2 - Desbaste Fino
    3 - Acabamento
    4 - Polimento
    Outros - Estágio Inválido
*/
