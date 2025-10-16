// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int years, months, days, totalDays;

    // Título
    printf("CONVERSOR DE IDADE PARA DIAS\n");

    // Entrada e leitura de dados
    printf("\nSerá necessário informar a sua idade em anos, meses e dias.\n");

    printf("\nInforme os ANOS: ");
    scanf("%d", &years);
    printf("Informe os MESES: ");
    scanf("%d", &months);
    printf("Informe os DIAS: ");
    scanf("%d", &days);

    // Cálculo
    totalDays = (years * 365) + (months * 30) + days;

    // Resultado
    printf("\nSua idade total em dias é de: %d dias.\n", totalDays);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia a idade de uma pessoa expressa em anos,
    meses e dias e mostre-a expressa apenas em dias. Obs: Considere
    todos os meses com 30 dias.
*/
