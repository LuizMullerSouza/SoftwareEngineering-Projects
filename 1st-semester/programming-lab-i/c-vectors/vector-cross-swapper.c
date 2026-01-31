// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    char vectorA[20], vectorB[20], tempChar;
    int i;

    // Título
    printf("TROCADOR E INVERSOR DE VETORES DISTINTOS\n\n");

    // Entrada de dados do Vetor A
    printf("Preenchendo o Vetor A...\n\n");

    for (i = 0; i < 20; i++) {
        printf("Informe o %dº caractere: ", i + 1);
        scanf(" %c", &vectorA[i]);
    }

    // Entrada de dados do Vetor B
    printf("\nPreenchendo o Vetor B...\n\n");

    for (i = 0; i < 20; i++) {
        printf("Informe o %dº caractere: ", i + 1);
        scanf(" %c", &vectorB[i]);
    }

    // Exibição dos dados antes da troca
    printf("\nVetor A - Antes da Troca\n");

    for (i = 0; i < 20; i++) {
        printf("|%c|", vectorA[i]);
    }

    printf("\n\nVetor B - Antes da Troca\n");

    for (i = 0; i < 20; i++) {
        printf("|%c|", vectorB[i]);
    }

    // Lógica condicional para a troca cruzada dos vetores
    for (i = 0; i < 20; i++) {

        tempChar = vectorA[i];
        vectorA[i] = vectorB[19 - i];
        vectorB[19 - i] = tempChar;
    }

    // Exibição do resultado
    printf("\n\nVetor A - Depois da Troca\n");

    for (i = 0; i < 20; i++) {
        printf("|%c|", vectorA[i]);
    }

    printf("\n\nVetor B - Depois da Troca\n");

    for (i = 0; i < 20; i++) {
        printf("|%c|", vectorB[i]);
    }

    printf("\n");

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que preencha dois vetores, A e B, com vinte caracteres cada.
    A seguir, troque o 1º elemento de A com o 20º de B, o 2º de A com o 19º de B,
    e assim por diante, até trocar o 20º de A com o 1º de B. Mostre os vetores
    antes e depois da troca. Por exemplo:
    Vetor A – Antes da troca
    |A|G|Y|W|5|V|S|8|6|J|G|A|W|2|M|C|H|Q|6|L|
    Vetor B – Antes da troca
    |S|D|4|5|H|G|R|U|8|9|K|S|A|1|2|V|4|D|5|M|
    Vetor A – Depois da troca
    |M|5|D|4|V|2|1|A|S|K|9|8|U|R|G|H|5|4|D|S|
    Vetor B – Depois da troca
    |L|6|Q|H|C|M|2|W|A|G|J|6|8|S|V|5|W|Y|G|A|
*/
