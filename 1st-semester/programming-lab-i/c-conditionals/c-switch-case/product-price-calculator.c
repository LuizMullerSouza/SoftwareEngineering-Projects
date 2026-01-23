// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int productCode, quantity;
    float totalPrice;

    // Título
    printf("\nSISTEMA DE VENDAS POR CÓDIGO\n\n");

    // Exibição do Menu
    printf("=== TABELA DE PRODUTOS ===\n");
    printf("CÓD 1001 - R$ 12.32\n");
    printf("CÓD 1324 - R$ 16.45\n");
    printf("CÓD 6548 - R$ 22.37\n");
    printf("CÓD 5987 - R$ 25.32\n");
    printf("CÓD 7623 - R$ 36.45\n\n");

    // Entrada de dados
    printf("Informe o CÓD de apenas UM produto que irá comprar: CÓD - ");
    scanf("%d", &productCode);

    printf("Quantas unidades você irá comprar: ");
    scanf("%d", &quantity);

    // Estrutura de decisão para calcular o preço total
    switch (productCode) {
        case 1001:
            totalPrice = quantity * 12.32;
            printf("\nO seu pedido é: %d unidades do CÓD - %d e o valor a ser pago é R$%.2f\n\n", quantity, productCode, totalPrice);
        break;

        case 1324:
            totalPrice = quantity * 16.45;
            printf("\nO seu pedido é: %d unidades do CÓD - %d e o valor a ser pago é R$%.2f\n\n", quantity, productCode, totalPrice);
        break;

        case 6548:
            totalPrice = quantity * 22.37;
            printf("\nO seu pedido é: %d unidades do CÓD - %d e o valor a ser pago é R$%.2f\n\n", quantity, productCode, totalPrice);
        break;

        case 5987:
            totalPrice = quantity * 25.32;
            printf("\nO seu pedido é: %d unidades do CÓD - %d e o valor a ser pago é R$%.2f\n\n", quantity, productCode, totalPrice);
        break;

        case 7623:
            totalPrice = quantity * 36.45;
            printf("\nO seu pedido é: %d unidades do CÓD - %d e o valor a ser pago é R$%.2f\n\n", quantity, productCode, totalPrice);
        break;

        default:
            printf("\nO código informado é inexistente!\n\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Um vendedor necessita de um programa que calcule o valor total devido por um cliente. O programa deve
    receber o código  de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo:
                                    Código do Produto - Preço unitário
                                                1001 - 12,32
                                                1324 - 16,45
                                                6548 - 22,37
                                                5987 - 25,32
                                                7623 - 36,45
*/
