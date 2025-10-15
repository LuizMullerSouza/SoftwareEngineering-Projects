// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float width, length, area, litersNeeded, cansNeededFloat, totalCost;
    int cansNeededInt;

    // T�tulo
    printf("CALCULADORA DE TINTA E CUSTO\n");

    // Entrada e leitura de dados
    printf("\nInforme a largura da �rea a ser pintada (em metros): ");
    scanf("%f", &width);

    printf("Informe o comprimento da �rea a ser pintada (em metros): ");
    scanf("%f", &length);

    // C�lculo
    area = width * length;
    litersNeeded = area / 13.0;
    cansNeededFloat = litersNeeded / 3.6;
    cansNeededInt = cansNeededFloat + 0.99999;

    // Calcula o custo total com base no n�mero de latas
    totalCost = cansNeededInt * 25.00;

    // Resultado
    printf("\n�rea total a ser pintada: %.2f m�\n", area);
    printf("Quantidade de latas de tinta necess�rias: %d\n", cansNeededInt);
    printf("Custo total: R$%.2f\n", totalCost);

    // Executado com sucesso
    return 0;
}

/*
    Calcule e mostre a quantidade de latas de tintas necess�rias e o custo para pintar
    uma determinada �rea, cujo comprimento e a largura s�o informados. Sabe-se que:
    A lata de tinta custa R$ 25,00 - Cada lata cont�m 3.6 litros - Cada litro pinta 13 m^2
*/
