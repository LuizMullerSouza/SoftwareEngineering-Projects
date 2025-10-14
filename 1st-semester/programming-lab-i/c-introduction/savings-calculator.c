// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float depositValue, newBalance;

    // T�tulo
    printf("POUPAN�A DE 6%%\n");

    // Entrada e leitura de dados
    printf("\nInforme um valor real que ficar� na poupan�a: ");
    scanf("%f", &depositValue);

    // C�lculo
    newBalance = (depositValue * 6 / 100) + depositValue;

    // Resultado
    printf("\nO seu novo saldo depois de 1 m�s � de: R$%.2f\n", newBalance);

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler um valor real representando um dep�sito banc�rio em
    uma poupan�a e, em seguida, calcular e mostrar o valor corrigido ap�s o primeiro
    m�s com uma taxa de juros de 6% ao m�s.
*/
