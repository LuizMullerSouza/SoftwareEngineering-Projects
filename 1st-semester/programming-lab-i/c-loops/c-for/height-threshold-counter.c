// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float height;
    int countAboveLimit = 0, i;

    // Título
    printf("ANALISADOR DE ESTATÍSTICA DE ALTURA\n\n");

    // Loop para leitura de 10 alturas
    for (i = 1; i <= 10; i++) {

        printf("Informe a altura da %dª pessoa (m): ", i);
        scanf("%f", &height);

        // Verificação Lógica
        if (height > 1.80) {
            countAboveLimit++;
        }
    }

    // Exibição do resultado
    printf("\n---------------------------------------------");

    if (countAboveLimit == 0) {
        printf("\nNenhuma pessoa possui altura maior que 1.80m\n");
    } else if (countAboveLimit == 1) {
        printf("\nApenas 1 pessoa possui altura maior que 1.80m\n");
    } else {
        printf("\n%d pessoas possuem altura maior que 1.80m\n", countAboveLimit);
    }

    printf("---------------------------------------------\n");

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia a altura de 10 pessoas e calcule e
    mostre quantas destas pessoas possuem altura maior que 1.80m.
*/
