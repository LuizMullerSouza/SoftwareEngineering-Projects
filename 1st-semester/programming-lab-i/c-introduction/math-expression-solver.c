// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int a, b, c, r, s;
    float d;

    // T�tulo
    printf("C�LCULO DE EXPRESS�O\n");

    // Entrada e leitura de dados
    printf("\nInforme o valor de A: ");
    scanf("%d", &a);

    printf("\nInforme o valor de B: ");
    scanf("%d", &b);

    printf("\nInforme o valor de C: ");
    scanf("%d", &c);

    // C�lculo da express�o
    r = (a+b) * (a+b);
    s = (b+c) * (b+c);
    d = (r+s)/2;

    // Resultado
    printf("\nO resultado da express�o �: %g\n", d);

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia tr�s n�meros inteiros e positivos (A, B, C) e calcule a
    seguinte express�o: D = R + S / 2, onde R = (A+B)^2 e S = (B+C)^2.
*/
