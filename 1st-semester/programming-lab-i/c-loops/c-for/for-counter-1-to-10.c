// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i;

    // Título
    printf("CONTAGEM DE 1 A 10 COM LOOP FOR\n\n");

    // Estrutura de repetição For para exibir a contagem
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n");

    // Executado com sucesso
    return 0;
}

/*
    Usando o loop for, faça um programa que
    imprime todos os números entre 1 e 10.
*/
