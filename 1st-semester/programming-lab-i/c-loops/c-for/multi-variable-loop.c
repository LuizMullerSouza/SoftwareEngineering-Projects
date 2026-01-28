// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i, j;

    // Título
    printf("LOOP FOR COM DUAS VARIÁVEIS DE CONTROLE\n\n");
    printf("I - Sobe de 1 em 1 | J - Desce de 2 em 2 | Produto - I * J\n");
    printf("----------------------------------------------------------\n\n");

    // Estrutura de repetição para calcular e exibir os resultados
    for (i = 1, j = 100; i <= 10; i++, j -= 2) {
        printf("I = %d | J = %d - I * J = %d\n", i, j, i * j);
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que exiba o produto da multiplicação entre dois
    valores, i e j, repetindo o processo 10 vezes.
    - A variável i deve iniciar em 1 e aumentar de 1 em 1.
    - A variável j deve iniciar em 100 e diminuir de 2 em 2.
    Utilize um único laço for com múltiplas inicializações e incrementos.
*/
