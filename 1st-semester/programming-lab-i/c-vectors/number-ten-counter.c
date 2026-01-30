// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int arrayA[15], countTen = 0, i;

    // Título
    printf("CONTADOR DE APARIÇÕES NUMÉRICAS\n\n");

    printf("Preencha o Vetor com 15 números inteiros\n\n");

    // Loop para leitura e contagem
    for (i = 0; i < 15; i++) {

        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &arrayA[i]);

        // Lógica condicional para o acumulador
        if (arrayA[i] == 10) {
            countTen++;
        }
    }

    // Lógica condicional para exibição do resultado
    if (countTen == 0) {
        printf("\nO número 10 não foi digitado nenhuma vez\n");
    } else if (countTen == 1) {
        printf("\nO número 10 foi digitado apenas uma vez\n");
    } else {
        printf("\nO número 10 foi digitado %d vezes\n", countTen);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia um conjunto A com 15 inteiros e escreva quantas vezes
    apareceu o número 10 neste conjunto.
*/
