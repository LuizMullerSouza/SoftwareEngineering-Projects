// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float billAmount, tipAmount, totalAmount;

    // Título
    printf("CALCULADORA DE CONTA DE RESTAURANTE\n");

    // Entrada e leitura de dados
    printf("\nInforme o valor da conta do restaurante: R$");
    scanf("%f", &billAmount);

    // Cálculo
    tipAmount = billAmount * 0.10;
    totalAmount = billAmount + tipAmount;

    // Resultado
    printf("\nValor da conta: R$%.2f\n", billAmount);
    printf("Taxa do garçom (10%%): R$%.2f\n", tipAmount);
    printf("Valor total a pagar: R$%.2f\n", totalAmount);

    // Executado com sucesso
    return 0;
}

/*
    Leia um valor de conta de um restaurante representando o gasto realizado pelo
    cliente. O programa deve calcular e mostrar o valor total a ser pago, considerando
    que o restaurante cobra 10% para o garçom.
*/
