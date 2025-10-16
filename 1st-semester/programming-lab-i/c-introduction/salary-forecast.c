// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float currentSalary, year1Salary, year2Salary, year3Salary;

    // Título
    printf("PROJEÇÃO DE SALÁRIO EM 3 ANOS\n");

    // Entrada e leitura de dados
    printf("\nInforme o seu salário atual: R$");
    scanf("%f", &currentSalary);

    // Cálculo
    year1Salary = currentSalary + (currentSalary * 7.0 / 100);
    year2Salary = year1Salary + (year1Salary * 6.0 / 100);
    year3Salary = year2Salary + (year2Salary * 5.0 / 100);

    // Resultado
    printf("\nSalário após o 1º ano: R$%.2f\n", year1Salary);
    printf("Salário após o 2º ano: R$%.2f\n", year2Salary);
    printf("Salário após o 3º ano: R$%.2f\n", year3Salary);

    // Executado com sucesso
    return 0;
}

/*
    Em uma empresa os funcionários renovaram o contrato por três
    anos. Na renovação o salário será incrementado em 7%, 6% e 5%,
    respectivamente, para os próximos três anos. Em cada ano o salário
    é reajustado sobre o salário do ano anterior. Faça um programa que
    leia o salário atual do funcionário e mostre o salário para cada um
    dos três próximos anos.
*/
