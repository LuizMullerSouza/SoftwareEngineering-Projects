// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int number, result;

    // T�tulo
    printf("DOBRADOR DE N�MEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme um valor: ");
    scanf("%d", &number);

    // A l�gica � multiplicar o n�mero por dois
    result = number * 2;

    // Resultado
    printf("\nO dobro de %d �: %d\n", number, result);

    // Executado com sucesso
    return 0;
}

/*
    Leia um n�mero inteiro e calcule e mostre o seu dobro.
*/
