// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float grade1, grade2, grade3, grade4, average;

    // T�tulo
    printf("CLASSIFICADOR DE M�DIA FINAL DO ALUNO\n");

    // Entrada e leitura de dados
    printf("\nInforme a sua primeira nota: ");
    scanf("%f", &grade1);

    printf("Informe a sua segunda nota: ");
    scanf("%f", &grade2);

    printf("Informe a sua terceira nota: ");
    scanf("%f", &grade3);

    printf("Informe a sua quarta nota: ");
    scanf("%f", &grade4);

    // C�lculo
    average = (grade1 + grade2 + grade3 + grade4) / 4.0;

    // Resultado
    printf("\nSua m�dia final foi: %.1f\n", average);

    // L�gica condicional para situa��o
    if (average >= 6.0) {
        printf("Situa��o: APROVADO!\n");
    } else if (average >= 3.0) {
        printf("Situa��o: EXAME.\n");
    } else {
        printf("Situa��o: REPROVADO.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia quatro notas de um aluno, calcule e mostre
    a sua m�dia, classificando-o de acordo com uma das seguintes situa��es:
    - Se a m�dia for maior ou igual a 6.0, o aluno est� APROVADO.
    - Se a m�dia for menor que 6.0 e maior ou igual a 3.0, o aluno est� de EXAME.
    - Se a m�dia for menor que 3.0, o aluno est� REPROVADO.
*/
