// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float currentSalary, adjustedSalary;
    int serviceYears;

    // Título
    printf("CALCULADORA DE REAJUSTE SALARIAL POR TEMPO DE SERVIÇO\n");

    // Entrada e leitura de dados
    printf("\nInforme seu salário atual: R$");
    scanf("%f", &currentSalary);

    printf("Informe o tempo de serviço em anos (inteiros): ");
    scanf("%d", &serviceYears);

    // Lógica condicional para calcular o reajuste
    if (serviceYears < 10) {
        adjustedSalary = currentSalary * 1.08;
    } else {
        adjustedSalary = currentSalary * 1.10;
    }

    // Resultado
    printf("\nO seu salário com reajuste ficou: R$%.2f\n", adjustedSalary);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia o tempo de serviço e o salário de um funcionário
    e calcule e mostre um reajuste salarial de acordo com a seguinte situação:
    se o funcionário possui tempo de serviço inferior a 10 anos, o reajuste será
    de 8%; caso contrário, o reajuste salarial será de 10%.
*/
