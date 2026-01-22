// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int studentId;
    float grade1, grade2, grade3, exerciseAverage, finalAverage;
    char concept;

    // Título
    printf("CALCULADORA DE MÉDIA DE APROVEITAMENTO E CONCEITO\n");

    // Entrada e leitura de dados
    printf("\nInforme o número de identificação (RGM) do aluno: ");
    scanf("%d", &studentId);

    printf("Informe a primeira nota: ");
    scanf("%f", &grade1);

    printf("Informe a segunda nota: ");
    scanf("%f", &grade2);

    printf("Informe a terceira nota: ");
    scanf("%f", &grade3);

    printf("Informe a média dos exercícios: ");
    scanf("%f", &exerciseAverage);

    // Cálculo
    finalAverage = (grade1 + (grade2 * 2) + (grade3 * 3) + exerciseAverage) / 7.0;

    // Lógica condicional para atribuir o conceito
    if (finalAverage >= 9.0) {
        concept = 'A';
    } else if (finalAverage >= 7.5) {
        concept = 'B';
    } else if (finalAverage >= 6.0) {
        concept = 'C';
    } else if (finalAverage >= 4.0) {
        concept = 'D';
    } else {
        concept = 'E';
    }

    // Resultado
    printf("\n------------------------------\n");
    printf("Aluno RGM: %d\n", studentId);
    printf("Média de Aproveitamento: %.1f\n", finalAverage);
    printf("Conceito Obtido: %c\n", concept);
    printf("------------------------------\n");

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia o número de identificação de um aluno, as 03 notas
    obtidas pelo aluno e a média dos exercícios que fazem parte da avaliação.
    Calcular a média de aproveitamento, usando a fórmula:
    MA = (Nota1 + Nota2 * 2 + Nota3 * 3 + ME) / 7

    A atribuição de conceitos obedece à tabela abaixo:
    Média de Aproveitamento | Conceito
    -------------------------|----------
             >= 9.0          |    A
         < 9.0 e >= 7.5      |    B
         < 7.5 e >= 6.0      |    C
         < 6.0 e >= 4.0      |    D
             < 4.0           |    E

    O programa deve escrever o número de identificação do aluno e o conceito obtido.
*/
