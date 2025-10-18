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
    printf("CLASSIFICADOR DE CATEGORIA DE NATA��O POR IDADE\n");

    // Entrada e leitura de dados
    printf("\nInforme a sua idade: ");
    scanf("%d", &age);

    printf("\nSua categoria �: ");

    // L�gica condicional para classificar a categoria
    if (age >= 5 && age <= 7) {
        printf("INFANTIL A\n");
    } else if (age >= 8 && age <= 10) {
        printf("INFANTIL B\n");
    } else if (age >= 11 && age <= 13) {
        printf("JUVENIL A\n");
    } else if (age >= 14 && age <= 17) {
        printf("JUVENIL B\n");
    } else if (age > 17) {
        printf("ADULTO\n");
    } else {
        printf("Idade insuficiente para as categorias listadas.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que, dada a idade de um nadador, classifica-o
    em uma das seguintes categorias:
    - de 5 a 7 anos: "Infantil A"
    - de 8 a 10 anos: "Infantil B"
    - de 11 a 13 anos: "Juvenil A"
    - de 14 a 17 anos: "Juvenil B"
    - maiores de 17 anos: "Adulto"
*/
