// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float currentSalary, year1Salary, year2Salary, year3Salary;

    // T�tulo
    printf("PROJE��O DE SAL�RIO EM 3 ANOS\n");

    // Entrada e leitura de dados
    printf("\nInforme o seu sal�rio atual: R$");
    scanf("%f", &currentSalary);

    // C�lculo
    year1Salary = currentSalary + (currentSalary * 7.0 / 100);
    year2Salary = year1Salary + (year1Salary * 6.0 / 100);
    year3Salary = year2Salary + (year2Salary * 5.0 / 100);

    // Resultado
    printf("\nSal�rio ap�s o 1� ano: R$%.2f\n", year1Salary);
    printf("Sal�rio ap�s o 2� ano: R$%.2f\n", year2Salary);
    printf("Sal�rio ap�s o 3� ano: R$%.2f\n", year3Salary);

    // Executado com sucesso
    return 0;
}

/*
    Em uma empresa os funcion�rios renovaram o contrato por tr�s
    anos. Na renova��o o sal�rio ser� incrementado em 7%, 6% e 5%,
    respectivamente, para os pr�ximos tr�s anos. Em cada ano o sal�rio
    � reajustado sobre o sal�rio do ano anterior. Fa�a um programa que
    leia o sal�rio atual do funcion�rio e mostre o sal�rio para cada um
    dos tr�s pr�ximos anos.
*/
