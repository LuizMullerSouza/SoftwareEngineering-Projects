// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float currentSalary, adjustedSalary;
    int serviceYears;

    // T�tulo
    printf("CALCULADORA DE REAJUSTE SALARIAL POR TEMPO DE SERVI�O\n");

    // Entrada e leitura de dados
    printf("\nInforme seu sal�rio atual: R$");
    scanf("%f", &currentSalary);

    printf("Informe o tempo de servi�o em anos (inteiros): ");
    scanf("%d", &serviceYears);

    // L�gica condicional para calcular o reajuste
    if (serviceYears < 10) {
        adjustedSalary = currentSalary * 1.08;
    } else {
        adjustedSalary = currentSalary * 1.10;
    }

    // Resultado
    printf("\nO seu sal�rio com reajuste ficou: R$%.2f\n", adjustedSalary);

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia o tempo de servi�o e o sal�rio de um funcion�rio
    e calcule e mostre um reajuste salarial de acordo com a seguinte situa��o:
    se o funcion�rio possui tempo de servi�o inferior a 10 anos, o reajuste ser�
    de 8%; caso contr�rio, o reajuste salarial ser� de 10%.
*/
