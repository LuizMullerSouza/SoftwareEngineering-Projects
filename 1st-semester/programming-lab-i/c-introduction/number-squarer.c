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
    printf("DESCOBRINDO O QUADRADO DOS N�MEROS\n");

    // Entrada e leitura de dados
    printf("\nInforme um valor: ");
    scanf("%d", &number);

    // A l�gica � multiplicar o n�mero por ele mesmo apenas uma vez
    result = number * number;

    // Resultado
    printf("\nO quadrado de %d �: %d\n", number, result);

    // Executado com sucesso
    return 0;
}

/*
    Leia um n�mero inteiro e calcule e mostre o seu quadrado.
*/
