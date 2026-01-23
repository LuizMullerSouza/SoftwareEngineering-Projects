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
    printf("\nSISTEMA DE PEDIDOS DA LANCHONETE\n\n");

    // Exibição do Menu
    printf("=== CARDÁPIO DO DIA ===\n");
    printf("Cachorro Quente - CÓD 100 (R$ 22.50)\n");
    printf("Bauru           - CÓD 101 (R$ 20.50)\n");
    printf("Hambúrguer      - CÓD 102 (R$ 34.00)\n");
    printf("Cheeseburguer   - CÓD 103 (R$ 40.00)\n");
    printf("Refrigerante    - CÓD 104 (R$  7.50)\n\n");

    // Entrada de dados
    printf("Informe o CÓD de apenas UM produto desejado: CÓD ");
    scanf("%d", &productCode);

    printf("Quantas unidades sua fome deseja: ");
    scanf("%d", &quantity);

    // Estrutura de decisão para informar o pedido e o preço
    switch (productCode) {
        case 100:
            totalPrice = quantity * 22.50;
            printf("\nO seu pedido é: %d Cachorro(s) Quente(s)", quantity);
            printf("\nValor a ser pago: R$%.2f\n\n", totalPrice);
        break;

        case 101:
            totalPrice = quantity * 20.50;
            printf("\nO seu pedido é: %d Bauru(s)", quantity);
            printf("\nValor a ser pago: R$%.2f\n\n", totalPrice);
        break;

        case 102:
            totalPrice = quantity * 34.00;
            printf("\nO seu pedido é: %d Hambúrguer(es)", quantity);
            printf("\nValor a ser pago: R$%.2f\n\n", totalPrice);
        break;

        case 103:
            totalPrice = quantity * 40.00;
            printf("\nO seu pedido é: %d Cheeseburguer(s)", quantity);
            printf("\nValor a ser pago: R$%.2f\n\n", totalPrice);
        break;

        case 104:
            totalPrice = quantity * 7.50;
            printf("\nO seu pedido é: %d Refrigerante(s)", quantity);
            printf("\nValor a ser pago: R$%.2f\n\n", totalPrice);
        break;

        default:
            printf("\nO código informado é inexistente!\n\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    O cardápio de uma lancheria é o seguinte:
    ==== Especificação - Código - Preço ====
    Cachorro quente - 100 - 22,50
    Bauru - 101 - 20,50
    Hambúrger - 102 - 34,00
    Cheeseburguer - 103 - 40,00
    Refrigerante - 104 - 7,50
    Faça um programa que leia o código do item pedido, a quantidade e calcule
    o valor a ser pago por aquele lanche. Considere que a cada execução somente
    será calculado um item.
*/
