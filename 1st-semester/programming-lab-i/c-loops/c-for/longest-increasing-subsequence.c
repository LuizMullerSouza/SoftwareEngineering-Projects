// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int nTerms, i, current, previous, currentLength = 1, maxLength = 1;

    // Título
    printf("ANALISADOR DE SEGMENTO CRESCENTE MÁXIMO\n\n");

    // Entrada da quantidade de termos
    printf("Informe quantos termos a sequência terá: ");
    scanf("%d", &nTerms);

    // Validação lógica
    if (nTerms <= 0) {
        printf("\nA sequência precisa ter pelo menos 1 termo.\n");
        return 0;
    }

    // Leitura do primeiro termo
    printf("\nDigite o 1º número: ");
    scanf("%d", &previous);

    // Leitura dos demais termos
    for (i = 2; i <= nTerms; i++) {

        printf("Digite o %dº número: ", i);
        scanf("%d", &current);

        // Lógica de comparação
        if (current > previous) {
            currentLength++;

            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        } else {
            currentLength = 1;
        }

        previous = current;
    }

    // Exibição do resultado
    printf("\nO comprimento do segmento crescente máximo é: %d\n", maxLength);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que, dados um inteiro positivo N e uma sequência de N
    números inteiros, determina e mostra o comprimento de um segmento crescente
    de comprimento máximo. Exemplos:
    - Na sequência 5, 10, 3, 2, 4, 7, 9, 8, 5 o comprimento do segmento crescente
    máximo é 4.
    - Na sequência 10, 8, 7, 5, 2 o comprimento de um segmento crescente máximo é 1.
*/
