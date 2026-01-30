// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int age, maxAge = 0, counter = 1;

    // Título
    printf("BUSCADOR DE MAIOR IDADE\n\n");

    printf("Digite as idades ou digite 0 para encerrar e ver o resultado\n\n");

    // Loop para leitura das idades
    do {

        printf("Digite a %dª idade: ", counter);
        scanf("%d", &age);

        // Verificação lógica
        if (age != 0) {
            if (counter == 1) {
                maxAge = age;
            } else {
                if (age > maxAge) {
                    maxAge = age;
                }
            }
            counter++;
        }

    } while (age != 0);

    // Exibição do resultado
    if (counter == 1) {
        printf("\nNenhuma idade válida foi digitada\n");
    } else {
        printf("\nA maior idade digitada foi %d anos\n", maxAge);
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia a idade de várias pessoas e calcule e
    mostre no final a maior idade. O programa deve encerrar quando
    for informado uma idade igual zero.
*/
