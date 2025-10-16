// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float fixedSalary, totalSales, finalSalary;

    // Título
    printf("CALCULADORA DE SALÁRIO COM COMISSÃO DE VENDAS\n");

    // Entrada e leitura de dados
    printf("\nSerá necessário informar o seu salário fixo e o valor total de vendas.\n");

    printf("\nInforme o valor do seu salário fixo: R$");
    scanf("%f", &fixedSalary);
    printf("Informe o valor total de vendas realizadas no mês: R$");
    scanf("%f", &totalSales);

    // Cálculo
    finalSalary = fixedSalary + (totalSales * 5 / 100);

    // Resultado
    printf("\nO valor do seu salário no final deste mês é de: R$%.2f\n", finalSalary);

    // Executado com sucesso
    return 0;
}

/*
    Uma revendedora de carros usados paga a seus funcionários vendedores um
    salário fixo por mês e mais 5% do valor total das vendas por ele efetuadas.
    Faça um programa que leia o salário fixo do funcionário e o valor total de
    suas vendas. Calcule e escreva o salário final do vendedor.
*/
