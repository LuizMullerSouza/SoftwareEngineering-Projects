// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int age;

    // T�tulo
    printf("VERIFICADOR DE MAIORIDADE\n");

    // Entrada e leitura de dados
    printf("\nInforme a sua idade: ");
    scanf("%d", &age);

    // L�gica condicional para o resultado
    if (age >= 18) {
        printf("\nVoc� � MAIOR de idade.\n");
    } else {
        printf("\nVoc� � MENOR de idade.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia a idade de uma pessoa e determine e mostre se
    a pessoa � maior ou menor de idade.
*/
