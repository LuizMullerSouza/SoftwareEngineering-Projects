// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int age;

    // Título
    printf("VERIFICADOR DE MAIORIDADE\n");

    // Entrada e leitura de dados
    printf("\nInforme a sua idade: ");
    scanf("%d", &age);

    // Lógica condicional para o resultado
    if (age >= 18) {
        printf("\nVocê é MAIOR de idade.\n");
    } else {
        printf("\nVocê é MENOR de idade.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia a idade de uma pessoa e determine e mostre se
    a pessoa é maior ou menor de idade.
*/
