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
    printf("AVALIADOR DE M�DIA FINAL\n");

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

    // L�gica condicional para o resultado
    printf("\nSua m�dia final foi: %.1f\n", average);

    if (average >= 6.0) {
        printf("Situa��o: APROVADO!\n");
    } else {
        printf("Situa��o: REPROVADO.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia quatro notas de um aluno, calcule e mostre a sua m�dia e diga
    se o aluno foi aprovado ou reprovado na disciplina. Obs: Para ser
    aprovado, o aluno deve obter m�dia maior ou igual a 6.0.
*/
