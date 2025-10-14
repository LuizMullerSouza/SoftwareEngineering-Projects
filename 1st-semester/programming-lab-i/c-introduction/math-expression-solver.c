// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int a, b, c, r, s;
    float d;

    // Título
    printf("CÁLCULO DE EXPRESSÃO\n");

    // Entrada e leitura de dados
    printf("\nInforme o valor de A: ");
    scanf("%d", &a);

    printf("\nInforme o valor de B: ");
    scanf("%d", &b);

    printf("\nInforme o valor de C: ");
    scanf("%d", &c);

    // Cálculo da expressão
    r = (a+b) * (a+b);
    s = (b+c) * (b+c);
    d = (r+s)/2;

    // Resultado
    printf("\nO resultado da expressão é: %g\n", d);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia três números inteiros e positivos (A, B, C) e calcule a
    seguinte expressão: D = R + S / 2, onde R = (A+B)^2 e S = (B+C)^2.
*/
