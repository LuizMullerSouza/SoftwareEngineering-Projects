// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number, sumDivisors = 0, counter = 1;

    // Título
    printf("VERIFICADOR DE NÚMERO PERFEITO\n\n");

    printf("Um número é perfeito se for igual à soma de seus divisores, excluindo ele mesmo\n\n");

    // Entrada de dados
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &number);

    // Estrutura de repetição para verificação do número
    while (counter < number) {
        if (number % counter == 0) {
            sumDivisors = sumDivisors + counter;
        }
        counter++;
    }

    // Lógica condicional para exibição do resultado
    if (number == sumDivisors) {
        printf("\nResultado: %d É um número perfeito!\n", number);
    } else {
        printf("\nResultado: %d NÃO É um número perfeito.\n", number);
        printf("A soma dos divisores foi: %d\n", sumDivisors);
    }

    // Executado com sucesso
    return 0;
}

/*
    Dado N inteiro positivo, dizemos que N é perfeito se for
    igual a soma de seus divisores positivos diferentes de N.
    Exemplo: 6 é perfeito, pois 1 + 2 + 3 = 6. Verificar se
    um dado número inteiro positivo é perfeito.
*/
