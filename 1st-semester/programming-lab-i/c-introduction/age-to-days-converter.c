// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int years, months, days, totalDays;

    // T�tulo
    printf("CONVERSOR DE IDADE PARA DIAS\n");

    // Entrada e leitura de dados
    printf("\nSer� necess�rio informar a sua idade em anos, meses e dias.\n");

    printf("\nInforme os ANOS: ");
    scanf("%d", &years);
    printf("Informe os MESES: ");
    scanf("%d", &months);
    printf("Informe os DIAS: ");
    scanf("%d", &days);

    // C�lculo
    totalDays = (years * 365) + (months * 30) + days;

    // Resultado
    printf("\nSua idade total em dias � de: %d dias.\n", totalDays);

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia a idade de uma pessoa expressa em anos,
    meses e dias e mostre-a expressa apenas em dias. Obs: Considere
    todos os meses com 30 dias.
*/
