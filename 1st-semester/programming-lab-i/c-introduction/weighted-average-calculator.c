// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float grade1, grade2, grade3, weightedAverage;

    // T�tulo
    printf("C�LCULO DE M�DIA PONDERADA\n");

    // Entrada e leitura de dados
    printf("\nInforme a primeira nota (peso 2): ");
    scanf("%f", &grade1);

    printf("Informe a segunda nota (peso 3): ");
    scanf("%f", &grade2);

    printf("Informe a terceira nota (peso 5): ");
    scanf("%f", &grade3);

    // C�lculo da m�dia ponderada
    weightedAverage = ((grade1 * 2) + (grade2 * 3) + (grade3 * 5)) / 10.0;

    // Resultado
    printf("\nA m�dia final ponderada do aluno �: %.2f\n", weightedAverage);

    // Executado com sucesso
    return 0;
}

/*
    Leia tr�s notas de um aluno e calcule e mostre a m�dia final deste aluno. Considere
    que a m�dia � ponderada e que o peso das notas �: 2, 3 e 5, respectivamente.
*/
