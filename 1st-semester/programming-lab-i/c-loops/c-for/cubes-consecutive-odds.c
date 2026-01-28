// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int limitM, n, i, oddNumber = 1;

    // Título
    printf("SOMA DE ÍMPARES CONSECUTIVOS\n\n");

    // Entrada de dados
    printf("Digite o valor limite M: ");
    scanf("%d", &limitM);
    printf("\n");

    // Loop externo
    for (n = 1; n <= limitM; n++) {
        printf("%d^3 = ", n);

        // Loop interno
        for (i = 1; i <= n; i++) {
            printf("%d", oddNumber);

            if (i < n) {
                printf(" + ");
            }

            oddNumber += 2;
        }

        // Exibe o resultado da soma
        printf(" = %d\n", n * n * n);
    }

    // Executado com sucesso
    return 0;
}

/*
    Sabe-se que um número da forma n^3 é igual a soma de n ímpares
    consecutivos. Exemplo: 1^3 = 1; 2^3 = 3 + 5; 3^3 = 7 + 9 + 11;
    4^3 = 13 + 15 + 17 + 19... Faça um programa que, dado M, determina
    e mostra os ímpares consecutivos cuja soma é igual a n^3 para n
    assumindo valores de 1 a M.
*/
