// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int productCode;
    float price, discountedPrice;

    // Título
    printf("\nCALCULADORA DE DESCONTOS DE ESTOQUE\n\n");

    // Exibição do Menu
    printf("=== CÓDIGOS PROMOCIONAIS ===\n");
    printf("CÓD 1001 (Desc: 22%%)\n");
    printf("CÓD 1254 (Desc: 30%%)\n");
    printf("CÓD 1548 (Desc: 32%%)\n");
    printf("CÓD 1687 (Desc: 37%%)\n");
    printf("CÓD 1923 (Desc: 40%%)\n\n");

    // Entrada de dados
    printf("Informe o CÓD do produto para calcular o desconto: CÓD - ");
    scanf("%d", &productCode);

    printf("Informe o preço original deste produto: R$");
    scanf("%f", &price);

    // Estrutura de decisão para aplicar o desconto correspondente
    switch (productCode) {
        case 1001:
            // 22% de desconto
            discountedPrice = price * 0.78;
            printf("\nO código do produto é %d e o valor com desconto é R$%.2f\n\n", productCode, discountedPrice);
        break;

        case 1254:
            // 30% de desconto
            discountedPrice = price * 0.7;
            printf("\nO código do produto é %d e o valor com desconto é R$%.2f\n\n", productCode, discountedPrice);
        break;

        case 1548:
            // 32% de desconto
            discountedPrice = price * 0.68;
            printf("\nO código do produto é %d e o valor com desconto é R$%.2f\n\n", productCode, discountedPrice);
        break;

        case 1687:
            // 37% de desconto
            discountedPrice = price * 0.63;
            printf("\nO código do produto é %d e o valor com desconto é R$%.2f\n\n", productCode, discountedPrice);
        break;

        case 1923:
            // 40% de desconto
            discountedPrice = price * 0.6;
            printf("\nO código do produto é %d e o valor com desconto é R$%.2f\n\n", productCode, discountedPrice);
        break;

        default:
            printf("\nO código informado é inexistente!\n\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Uma loja de materiais de construção pretende promover uma liquidação de seu estoque com descontos variáveis de
    acordo com o produto. Para isto, a loja necessita de um programa que leia o código e o valor do produto e calcule
    e mostre o valor do produto com o devido desconto conforme apresenta a tabela abaixo.
                                Código do Produto - Desconto (%)
                                        1001 - 22%
                                        1254 - 30%
                                        1548 - 32%
                                        1687 - 37%
                                        1923 - 40%
*/
