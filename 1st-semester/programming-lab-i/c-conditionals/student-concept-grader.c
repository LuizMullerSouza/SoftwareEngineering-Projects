// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int studentId;
    float grade1, grade2, grade3, exerciseAverage, finalAverage;
    char concept;

    // T�tulo
    printf("CALCULADORA DE M�DIA DE APROVEITAMENTO E CONCEITO\n");

    // Entrada e leitura de dados
    printf("\nInforme o n�mero de identifica��o (RGM) do aluno: ");
    scanf("%d", &studentId);

    printf("Informe a primeira nota: ");
    scanf("%f", &grade1);

    printf("Informe a segunda nota: ");
    scanf("%f", &grade2);

    printf("Informe a terceira nota: ");
    scanf("%f", &grade3);

    printf("Informe a m�dia dos exerc�cios: ");
    scanf("%f", &exerciseAverage);

    // C�lculo
    finalAverage = (grade1 + (grade2 * 2) + (grade3 * 3) + exerciseAverage) / 7.0;

    // L�gica condicional para atribuir o conceito
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
    printf("M�dia de Aproveitamento: %.1f\n", finalAverage);
    printf("Conceito Obtido: %c\n", concept);
    printf("------------------------------\n");

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia o n�mero de identifica��o de um aluno, as 03 notas
    obtidas pelo aluno e a m�dia dos exerc�cios que fazem parte da avalia��o.
    Calcular a m�dia de aproveitamento, usando a f�rmula:
    MA = (Nota1 + Nota2 * 2 + Nota3 * 3 + ME) / 7

    A atribui��o de conceitos obedece � tabela abaixo:
    M�dia de Aproveitamento | Conceito
    -------------------------|----------
             >= 9.0          |    A
         < 9.0 e >= 7.5      |    B
         < 7.5 e >= 6.0      |    C
         < 6.0 e >= 4.0      |    D
             < 4.0           |    E

    O programa deve escrever o n�mero de identifica��o do aluno e o conceito obtido.
*/
