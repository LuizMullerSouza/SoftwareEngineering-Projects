// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int year, remainder;

    // Título
    printf("VERIFICADOR DE ANO BISSEXTO\n");

    // Entrada e leitura de dados
    printf("\nInforme o ano (formato xxxx): ");
    scanf("%d", &year);

    // Cálculo
    remainder = year % 4;

    // Lógica condicional para resultado
    if (remainder == 0) {
        printf("\nO ano %d É BISSEXTO.\n", year);
    } else {
        printf("\nO ano %d NÃO é bissexto.\n", year);
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia um ano, verifique e mostre se o ano informado é bissexto.
    Lembre-se que um ano é bissexto se ele é múltiplo de 4.
*/
