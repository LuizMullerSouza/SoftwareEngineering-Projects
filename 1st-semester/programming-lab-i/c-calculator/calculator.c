// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int option, num1, num2, counter;
    float result;

    // Loop principal
    do {

        printf("    CALCULADORA UNIGRAN :)\n");
        printf("=============================\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Potenciação\n");
        printf("0 - Sair\n");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &option);

        // Lógica de controle
        if (option == 0) {
            printf("\n>> Encerrando a Calculadora...\n");

        } else if (option >= 1 && option <= 5) {

            printf("\nInforme o 1º número: ");
            scanf("%d", &num1);
            printf("Informe o 2º número: ");
            scanf("%d", &num2);

            // Seletor de operação
            switch (option) {

                // Adição
                case 1:
                    result = num1 + num2;
                    printf("\n%d + %d = %g\n\n", num1, num2, result);
                    break;

                // Subtração
                case 2:
                    result = num1 - num2;
                    printf("\n%d - %d = %g\n\n", num1, num2, result);
                    break;

                // Multiplicação
                case 3:
                    result = num1 * num2;
                    printf("\n%d x %d = %g\n\n", num1, num2, result);
                    break;

                // Divisão
                case 4:
                    if (num2 == 0) {
                        printf("\nErro: não é possível dividir por zero\n\n");
                    } else {
                        result = (float)num1 / num2;
                        printf("\n%d / %d = %g\n\n", num1, num2, result);
                    }
                    break;

                // Potenciação
                case 5:
                    result = 1;
                    counter = 0;

                    while (counter < num2) {
                        result = result * num1;
                        counter++;
                    }
                    printf("\n%d ^ %d = %g\n\n", num1, num2, result);
                    break;
            }

        } else {
            printf("\n>> Erro: opção inválida! Tente novamente.\n\n");
        }

    } while (option != 0);

    printf("\nPrograma finalizado.\n");

    // Executado com sucesso
    return 0;
}

/*
    Descrição: Faça um programa, na linguagem C, que simule uma calculadora contendo as
    operações de adição, subtração, multiplicação, divisão e potenciação. Inicialmente o
    programa deverá apresentar uma tela com um menu de operações que poderão ser realizadas,
    sendo da seguinte forma: 0 – Sair 1 – Adição 2 – Subtração 3 – Multiplicação 4 – Divisão
    5 – Potenciação. A seguir, o programa deverá solicitar que o usuário informe a operação a
    ser realizada conforme apresentada no menu. Caso o usuário não informe a opção 0 (sair),
    os dois operandos deverão ser solicitados em seguida. Após os operandos serem informados, o
    programa deverá efetuar a devida operação, mostrar o resultado na tela e apresentar o menu
    novamente, até que o usuário informe a opção 0 (sair) para encerrar a execução do programa.
    Estruturas Utilizadas: O programa deverá ser construído dentro de uma estrutura de repetição
    do-while, para que o usuário possa efetuar mais de uma operação, ou seja, operações poderão
    ser realizadas até que a opção 0 (sair) seja informada. A estrutura Switch deverá ser utilizada
    para a implementação das operações (case 1: adição, case 2: subtração, ...). A operação de
    potenciação deverá ser implementada (no case 5:) utilizando a estrutura while.
*/
