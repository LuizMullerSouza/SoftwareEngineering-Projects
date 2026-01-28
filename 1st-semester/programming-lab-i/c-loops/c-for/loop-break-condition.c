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
    printf("CONTANDO DE 0 A 5 SEM CONDIÇÃO DE PARADA\n\n");

    // Estrutura de repetição sem condição de parada
    for (i = 0; ; i++) {

        printf("%d ", i);

        // Condição dentro do próprio laço
        if (i == 5) {
            break;
        }
    }

    printf("\n");

    // Executado com sucesso
    return 0;
}

/*
    Usando o loop for, faça um programa que imprima todos os números entre
    0 e 5, porém o loop não possui condição de parada no cabeçalho, sendo
    necessário criá-la dentro do próprio laço (usando break).
*/
