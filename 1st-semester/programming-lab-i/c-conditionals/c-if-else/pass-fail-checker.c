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
    printf("AVALIADOR DE MÉDIA FINAL\n");

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

    // Lógica condicional para o resultado
    printf("\nSua média final foi: %.1f\n", average);

    if (average >= 6.0) {
        printf("Situação: APROVADO!\n");
    } else {
        printf("Situação: REPROVADO.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia quatro notas de um aluno, calcule e mostre a sua média e diga
    se o aluno foi aprovado ou reprovado na disciplina. Obs: Para ser
    aprovado, o aluno deve obter média maior ou igual a 6.0.
*/
