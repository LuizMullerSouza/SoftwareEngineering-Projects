// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float canCount, bottle600mlCount, bottle2LCount, totalLiters;

    // Título
    printf("CALCULADORA DE LITROS DE REFRIGERANTE\n");

    // Entrada e leitura de dados
    printf("\nSerá necessário informar a quantidade de cada produto que comprou.\n");

    printf("\nInforme quantas latas de 350ml você comprou: ");
    scanf("%f", &canCount);
    printf("Informe quantas garrafas de 600ml você comprou: ");
    scanf("%f", &bottle600mlCount);
    printf("Informe quantas garrafas de 2 litros você comprou: ");
    scanf("%f", &bottle2LCount);

    // Cálculo
    totalLiters = (canCount * 0.350) + (bottle600mlCount * 0.600) + (bottle2LCount * 2.0);

    // Resultado
    printf("\nVocê comprou um total de: %.2f litros de refrigerante.\n", totalLiters);

    // Executado com sucesso
    return 0;
}

/*
    A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata
    de 350 ml, garrafa de 600 ml e garrafa de 2 litros. Faça um programa que leia
    uma determinada quantidade de refrigerante de cada formato e calcule a quantidade
    de litros de refrigerante que foram vendidos.
*/
