// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float canCount, bottle600mlCount, bottle2LCount, totalLiters;

    // T�tulo
    printf("CALCULADORA DE LITROS DE REFRIGERANTE\n");

    // Entrada e leitura de dados
    printf("\nSer� necess�rio informar a quantidade de cada produto que comprou.\n");

    printf("\nInforme quantas latas de 350ml voc� comprou: ");
    scanf("%f", &canCount);
    printf("Informe quantas garrafas de 600ml voc� comprou: ");
    scanf("%f", &bottle600mlCount);
    printf("Informe quantas garrafas de 2 litros voc� comprou: ");
    scanf("%f", &bottle2LCount);

    // C�lculo
    totalLiters = (canCount * 0.350) + (bottle600mlCount * 0.600) + (bottle2LCount * 2.0);

    // Resultado
    printf("\nVoc� comprou um total de: %.2f litros de refrigerante.\n", totalLiters);

    // Executado com sucesso
    return 0;
}

/*
    A f�brica de refrigerantes Meia-Cola vende seu produto em tr�s formatos: lata
    de 350 ml, garrafa de 600 ml e garrafa de 2 litros. Fa�a um programa que leia
    uma determinada quantidade de refrigerante de cada formato e calcule a quantidade
    de litros de refrigerante que foram vendidos.
*/
