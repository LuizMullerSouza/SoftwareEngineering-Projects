// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float grade1, grade2, average;

    // Título
    printf("CALCULADORA DE MÉDIA SEMESTRAL\n\n");

    // Leitura e validação da primeira nota
    do {
        printf("Informe a primeira nota (0 a 10): ");
        scanf("%f", &grade1);

        if (grade1 < 0 || grade1 > 10) {
            printf("Nota inválida! Tente novamente.\n\n");
        }
    } while (grade1 < 0 || grade1 > 10);

    // Leitura e validação da segunda nota
    do {
        printf("Informe a segunda nota (0 a 10): ");
        scanf("%f", &grade2);

        if (grade2 < 0 || grade2 > 10) {
            printf("Nota inválida! Tente novamente.\n\n");
        }
    } while (grade2 < 0 || grade2 > 10);

    // Cálculo da média simples
    average = (grade1 + grade2) / 2;

    // Exibição do resultado
    printf("\nA média semestral é: %.2f\n", average);

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para ler as notas da 1a e 2a avaliação de um aluno, calcule
    e imprima a média (simples) semestral. Só devem ser aceitos valores válidos durante
    a leitura (0 a 10) para cada nota.
*/
