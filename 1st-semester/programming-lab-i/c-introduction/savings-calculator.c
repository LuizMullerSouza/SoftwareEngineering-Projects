// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float depositValue, newBalance;

    // Título
    printf("POUPANÇA DE 6%%\n");

    // Entrada e leitura de dados
    printf("\nInforme um valor real que ficará na poupança: ");
    scanf("%f", &depositValue);

    // Cálculo
    newBalance = (depositValue * 6 / 100) + depositValue;

    // Resultado
    printf("\nO seu novo saldo depois de 1 mês é de: R$%.2f\n", newBalance);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um valor real representando um depósito bancário em
    uma poupança e, em seguida, calcular e mostrar o valor corrigido após o primeiro
    mês com uma taxa de juros de 6% ao mês.
*/
