// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float grade1, grade2, grade3, weightedAverage;

    // Título
    printf("CÁLCULO DE MÉDIA PONDERADA\n");

    // Entrada e leitura de dados
    printf("\nInforme a primeira nota (peso 2): ");
    scanf("%f", &grade1);

    printf("Informe a segunda nota (peso 3): ");
    scanf("%f", &grade2);

    printf("Informe a terceira nota (peso 5): ");
    scanf("%f", &grade3);

    // Cálculo da média ponderada
    weightedAverage = ((grade1 * 2) + (grade2 * 3) + (grade3 * 5)) / 10.0;

    // Resultado
    printf("\nA média final ponderada do aluno é: %.2f\n", weightedAverage);

    // Executado com sucesso
    return 0;
}

/*
    Leia três notas de um aluno e calcule e mostre a média final deste aluno. Considere
    que a média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente.
*/
