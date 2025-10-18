// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int currentStock, minStock, maxStock;
    float averageStock;

    // T�tulo
    printf("GERENCIADOR DE COMPRA DE ESTOQUE\n");

    // Entrada e leitura de dados
    printf("\nInforme a quantidade atual em estoque: ");
    scanf("%d", &currentStock);

    printf("Informe a quantidade m�nima em estoque: ");
    scanf("%d", &minStock);

    printf("Informe a quantidade m�xima em estoque: ");
    scanf("%d", &maxStock);

    // C�lculo
    averageStock = (float)(minStock + maxStock) / 2.0;

    // L�gica condicional para o resultado
    printf("\n----- Avalia��o do Estoque -----\n");
    printf("Estoque Atual: %d\n", currentStock);
    printf("Estoque M�dio: %.1f\n", averageStock);

    if (currentStock >= averageStock) {
        printf("Decis�o: N�O EFETUAR COMPRA\n");
    } else {
        printf("Decis�o: EFETUAR COMPRA\n");
    }
    printf("--------------------------------\n");


    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia a quantidade atual em estoque, quantidade
    m�xima em estoque e quantidade m�nima em estoque de um produto. O
    programa deve calcular e mostrar a quantidade m�dia ((quantidade
    m�dia = quantidade m�xima + quantidade m�nima)/2). Se a quantidade
    em estoque for maior ou igual � quantidade m�dia, escrever a mensagem
    "N�o efetuar compra"; sen�o, escrever a mensagem "Efetuar compra".
*/
