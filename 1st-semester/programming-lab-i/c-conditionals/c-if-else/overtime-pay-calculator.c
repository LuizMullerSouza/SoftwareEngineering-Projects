// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float hourlyRate, hoursWorked, totalSalary;

    // Título
    printf("CALCULADORA DE SALÁRIO COM HORAS EXTRAS\n");

    // Entrada e leitura de dados
    printf("\nInforme quantas horas você trabalhou: ");
    scanf("%f", &hoursWorked);

    printf("Informe o valor pago por hora: R$");
    scanf("%f", &hourlyRate);

    // Condição para calcular o salário
    if (hoursWorked > 40) {
        float regularPay = 40 * hourlyRate;
        float overtimePay = (hoursWorked - 40) * (hourlyRate * 1.5);
        totalSalary = regularPay + overtimePay;
    } else {
        totalSalary = hoursWorked * hourlyRate;
    }

    // Resultado
    printf("\nO valor do seu salário este mês foi R$%.2f.\n", totalSalary);

    // Executado com sucesso
    return 0;
}

/*
    Leia a quantidade de horas trabalhadas de um funcionário e o preço pago por
    cada hora de trabalho, e que calcula e mostra o salário dele. Todas as horas
    acima de 40 são pagas com um adicional de 50% ao valor das horas normais.
*/
