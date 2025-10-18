// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int age;
    float price;

    // Título
    printf("CALCULADORA DE PREÇO DO PLANO DE SAÚDE POR IDADE\n");

    // Entrada e leitura de dados
    printf("\nInforme a sua idade: ");
    scanf("%d", &age);

    // Lógica condicional para determinar o preço
    if (age <= 10) {
        price = 30.00;
    } else if (age <= 29) {
        price = 60.00;
    } else if (age <= 45) {
        price = 120.00;
    } else if (age <= 59) {
        price = 150.00;
    } else {
        price = 250.00;
    }

    // Resultado
    printf("\nO valor do plano de saúde para a idade %d é: R$%.2f\n", age, price);

    // Executado com sucesso
    return 0;
}

/*
    Após as negociações sobre um plano de saúde, o governo enviou a tabela de valores abaixo.
    Faça um programa que leia a idade de uma pessoa e imprima o valor que ela deverá pagar.
    - Até 10 anos: R$ 30,00
    - De 11 anos até 29 anos: R$ 60,00
    - De 30 anos até 45 anos: R$ 120,00
    - De 46 anos até 59 anos: R$ 150,00
    - Maior que 59 anos: R$ 250,00
*/
