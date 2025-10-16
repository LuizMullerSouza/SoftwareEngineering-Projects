// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float fixedSalary, totalSales, finalSalary;

    // T�tulo
    printf("CALCULADORA DE SAL�RIO COM COMISS�O DE VENDAS\n");

    // Entrada e leitura de dados
    printf("\nSer� necess�rio informar o seu sal�rio fixo e o valor total de vendas.\n");

    printf("\nInforme o valor do seu sal�rio fixo: R$");
    scanf("%f", &fixedSalary);
    printf("Informe o valor total de vendas realizadas no m�s: R$");
    scanf("%f", &totalSales);

    // C�lculo
    finalSalary = fixedSalary + (totalSales * 5 / 100);

    // Resultado
    printf("\nO valor do seu sal�rio no final deste m�s � de: R$%.2f\n", finalSalary);

    // Executado com sucesso
    return 0;
}

/*
    Uma revendedora de carros usados paga a seus funcion�rios vendedores um
    sal�rio fixo por m�s e mais 5% do valor total das vendas por ele efetuadas.
    Fa�a um programa que leia o sal�rio fixo do funcion�rio e o valor total de
    suas vendas. Calcule e escreva o sal�rio final do vendedor.
*/
