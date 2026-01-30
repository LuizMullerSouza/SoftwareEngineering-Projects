// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float grades[10], sum = 0, average;
    int i;

    // Título
    printf("CALCULADORA DE MÉDIA DE NOTAS\n\n");

    printf("Digite as notas dos 10 alunos\n\n");

    // Loop para leitura e soma das notas
    for (i = 0; i < 10; i++) {

        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &grades[i]);

        // Acumulador das notas
        sum += grades[i];
    }

    // Cálculo da média
    average = sum / 10;

    // Exibição do resultado
    printf("\nA média da turma é: %g\n", average);

    // Executado com sucesso
    return 0;
}

/*
    Utilizando vetores, crie um programa que leia 10 notas em
    uma variável nota[10], calcule e mostre a média da turma.
*/
