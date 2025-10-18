// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float salary, loanAmount, maxLoanAllowed;

    // T�tulo
    printf("VERIFICADOR PARA FINANCIAMENTO\n");

    // Entrada e leitura de dados
    printf("\nInforme seu sal�rio: R$");
    scanf("%f", &salary);

    printf("Informe o valor pretendido de financiamento: R$");
    scanf("%f", &loanAmount);

    // C�lculo
    maxLoanAllowed = salary * 5.0;

    // L�gica condicional para o resultado
    if (loanAmount <= maxLoanAllowed) {
        printf("\nFinanciamento CONCEDIDO!\n");
    } else {
        printf("\nFinanciamento NEGADO.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia o valor do sal�rio de uma pessoa e o
    valor de um financiamento pretendido. Caso o financiamento seja
    menor ou igual a 5 vezes o sal�rio da pessoa, o programa dever�
    escrever "Financiamento Concedido"; caso contr�rio, ele dever�
    escrever "Financiamento Negado".
*/
