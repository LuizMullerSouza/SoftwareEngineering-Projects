// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int currentStock, minStock, maxStock;
    float averageStock;

    // Título
    printf("GERENCIADOR DE COMPRA DE ESTOQUE\n");

    // Entrada e leitura de dados
    printf("\nInforme a quantidade atual em estoque: ");
    scanf("%d", &currentStock);

    printf("Informe a quantidade mínima em estoque: ");
    scanf("%d", &minStock);

    printf("Informe a quantidade máxima em estoque: ");
    scanf("%d", &maxStock);

    // Cálculo
    averageStock = (float)(minStock + maxStock) / 2.0;

    // Lógica condicional para o resultado
    printf("\n----- Avaliação do Estoque -----\n");
    printf("Estoque Atual: %d\n", currentStock);
    printf("Estoque Médio: %.1f\n", averageStock);

    if (currentStock >= averageStock) {
        printf("Decisão: NÃO EFETUAR COMPRA\n");
    } else {
        printf("Decisão: EFETUAR COMPRA\n");
    }
    printf("--------------------------------\n");


    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia a quantidade atual em estoque, quantidade
    máxima em estoque e quantidade mínima em estoque de um produto. O
    programa deve calcular e mostrar a quantidade média ((quantidade
    média = quantidade máxima + quantidade mínima)/2). Se a quantidade
    em estoque for maior ou igual à quantidade média, escrever a mensagem
    "Não efetuar compra"; senão, escrever a mensagem "Efetuar compra".
*/
