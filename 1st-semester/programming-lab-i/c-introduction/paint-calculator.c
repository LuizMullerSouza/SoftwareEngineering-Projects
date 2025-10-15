// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float width, length, area, litersNeeded, cansNeededFloat, totalCost;
    int cansNeededInt;

    // Título
    printf("CALCULADORA DE TINTA E CUSTO\n");

    // Entrada e leitura de dados
    printf("\nInforme a largura da área a ser pintada (em metros): ");
    scanf("%f", &width);

    printf("Informe o comprimento da área a ser pintada (em metros): ");
    scanf("%f", &length);

    // Cálculo
    area = width * length;
    litersNeeded = area / 13.0;
    cansNeededFloat = litersNeeded / 3.6;
    cansNeededInt = cansNeededFloat + 0.99999;

    // Calcula o custo total com base no número de latas
    totalCost = cansNeededInt * 25.00;

    // Resultado
    printf("\nÁrea total a ser pintada: %.2f m²\n", area);
    printf("Quantidade de latas de tinta necessárias: %d\n", cansNeededInt);
    printf("Custo total: R$%.2f\n", totalCost);

    // Executado com sucesso
    return 0;
}

/*
    Calcule e mostre a quantidade de latas de tintas necessárias e o custo para pintar
    uma determinada área, cujo comprimento e a largura são informados. Sabe-se que:
    A lata de tinta custa R$ 25,00 - Cada lata contém 3.6 litros - Cada litro pinta 13 m^2
*/
