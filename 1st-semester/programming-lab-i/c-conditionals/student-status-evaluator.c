// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float grade1, grade2, grade3, grade4, average;

    // Título
    printf("CLASSIFICADOR DE MÉDIA FINAL DO ALUNO\n");

    // Entrada e leitura de dados
    printf("\nInforme a sua primeira nota: ");
    scanf("%f", &grade1);

    printf("Informe a sua segunda nota: ");
    scanf("%f", &grade2);

    printf("Informe a sua terceira nota: ");
    scanf("%f", &grade3);

    printf("Informe a sua quarta nota: ");
    scanf("%f", &grade4);

    // Cálculo
    average = (grade1 + grade2 + grade3 + grade4) / 4.0;

    // Resultado
    printf("\nSua média final foi: %.1f\n", average);

    // Lógica condicional para situação
    if (average >= 6.0) {
        printf("Situação: APROVADO!\n");
    } else if (average >= 3.0) {
        printf("Situação: EXAME.\n");
    } else {
        printf("Situação: REPROVADO.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia quatro notas de um aluno, calcule e mostre
    a sua média, classificando-o de acordo com uma das seguintes situações:
    - Se a média for maior ou igual a 6.0, o aluno está APROVADO.
    - Se a média for menor que 6.0 e maior ou igual a 3.0, o aluno está de EXAME.
    - Se a média for menor que 3.0, o aluno está REPROVADO.
*/
