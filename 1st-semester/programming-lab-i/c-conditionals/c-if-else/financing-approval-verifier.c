// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float salary, loanAmount, maxLoanAllowed;

    // Título
    printf("VERIFICADOR PARA FINANCIAMENTO\n");

    // Entrada e leitura de dados
    printf("\nInforme seu salário: R$");
    scanf("%f", &salary);

    printf("Informe o valor pretendido de financiamento: R$");
    scanf("%f", &loanAmount);

    // Cálculo
    maxLoanAllowed = salary * 5.0;

    // Lógica condicional para o resultado
    if (loanAmount <= maxLoanAllowed) {
        printf("\nFinanciamento CONCEDIDO!\n");
    } else {
        printf("\nFinanciamento NEGADO.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia o valor do salário de uma pessoa e o
    valor de um financiamento pretendido. Caso o financiamento seja
    menor ou igual a 5 vezes o salário da pessoa, o programa deverá
    escrever "Financiamento Concedido"; caso contrário, ele deverá
    escrever "Financiamento Negado".
*/
