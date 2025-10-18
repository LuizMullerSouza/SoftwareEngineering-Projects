// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int age;
    float price;

    // T�tulo
    printf("CALCULADORA DE PRE�O DO PLANO DE SA�DE POR IDADE\n");

    // Entrada e leitura de dados
    printf("\nInforme a sua idade: ");
    scanf("%d", &age);

    // L�gica condicional para determinar o pre�o
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
    printf("\nO valor do plano de sa�de para a idade %d �: R$%.2f\n", age, price);

    // Executado com sucesso
    return 0;
}

/*
    Ap�s as negocia��es sobre um plano de sa�de, o governo enviou a tabela de valores abaixo.
    Fa�a um programa que leia a idade de uma pessoa e imprima o valor que ela dever� pagar.
    - At� 10 anos: R$ 30,00
    - De 11 anos at� 29 anos: R$ 60,00
    - De 30 anos at� 45 anos: R$ 120,00
    - De 46 anos at� 59 anos: R$ 150,00
    - Maior que 59 anos: R$ 250,00
*/
