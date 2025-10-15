// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float hourlyRate, hoursWorked, totalSalary;

    // T�tulo
    printf("CALCULADORA DE SAL�RIO COM HORAS EXTRAS\n");

    // Entrada e leitura de dados
    printf("\nInforme quantas horas voc� trabalhou: ");
    scanf("%f", &hoursWorked);

    printf("Informe o valor pago por hora: R$");
    scanf("%f", &hourlyRate);

    // Condi��o para calcular o sal�rio
    if (hoursWorked > 40) {
        float regularPay = 40 * hourlyRate;
        float overtimePay = (hoursWorked - 40) * (hourlyRate * 1.5);
        totalSalary = regularPay + overtimePay;
    } else {
        totalSalary = hoursWorked * hourlyRate;
    }

    // Resultado
    printf("\nO valor do seu sal�rio este m�s foi R$%.2f.\n", totalSalary);

    // Executado com sucesso
    return 0;
}

/*
    Leia a quantidade de horas trabalhadas de um funcion�rio e o pre�o pago por
    cada hora de trabalho, e que calcula e mostra o sal�rio dele. Todas as horas
    acima de 40 s�o pagas com um adicional de 50% ao valor das horas normais.
*/
