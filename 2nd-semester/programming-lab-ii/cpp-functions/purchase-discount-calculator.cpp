// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Constante
#define MAX 100

using namespace std;

// Protótipos das funções
void displayResults(const float &originalValue, const int &discountRate, const float &discountAmount, const float &finalValue);
void calculateDiscount(float originalValue, int discountRate, float &discountAmount, float &finalValue);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int discountRate;
    float originalValue, discountAmount, finalValue;

    // Título
    cout << "CÁLCULO DE DESCONTO EM COMPRAS\n" << endl;

    // Leitura do valor original da compra com validação
    do {

        cout << "Digite o valor total da compra: R$";
        cin >> originalValue;

        if (originalValue < 0) {
            cout << "Erro: o valor total da compra não pode ser negativo. Tente novamente.\n" << endl;
        }

    } while (originalValue < 0);

    // Leitura da taxa de desconto com validação
    do {

        cout << "Digite a taxa de desconto (%): ";
        cin >> discountRate;

        if (discountRate < 0 || discountRate > 100) {
            cout << "Erro: a taxa de desconto deve estar dentro do intervalo válido (0 a " << MAX << "%). Tente novamente.\n" << endl;
        }

    } while (discountRate < 0 || discountRate > 100);

    // Chamada da função que calcula o desconto
    calculateDiscount(originalValue, discountRate, discountAmount, finalValue);

    // Chamada da função para exibir os resultados
    displayResults(originalValue, discountRate, discountAmount, finalValue);

    cout << endl;

    // Executado com sucesso
    return 0;
}

// Função para exibir os valores originais, de desconto e final
void displayResults(const float &originalValue, const int &discountRate, const float &discountAmount, const float &finalValue) {

    cout << "\nValor Original: R$" << fixed << setprecision(2) << originalValue;
    cout << "\nDesconto (" << discountRate << "%): R$" << fixed << setprecision(2) << discountAmount;
    cout << "\nValor Final: R$" << fixed << setprecision(2) << finalValue;

}

// Função para calcular o valor de desconto
void calculateDiscount(float originalValue, int discountRate, float &discountAmount, float &finalValue) {

    discountAmount = originalValue * discountRate / MAX;
    finalValue = originalValue - discountAmount;

}

/*
    Desenvolva um programa em C++ para auxiliar em cálculos de desconto em compras. Utilize funções e faça
    uso da passagem de parâmetros por referência para realizar as operações necessárias. A seguir, são
    apresentadas as especificações do programa:
    1. Funções Principais:
    1.1 Implemente uma função para calcular o desconto em uma compra, com base no valor total e na taxa de
    desconto fornecidos como parâmetros.
    1.2 Desenvolva uma função para exibir o valor original da compra, o desconto aplicado e o valor final
    após o desconto.
    2. Passagem de Parâmetros por Referência:
    2.1 Utilize a passagem de parâmetros por referência para modificar diretamente os valores do desconto, do
    valor original e do valor final dentro das funções.
    3. Validações:
    3.1 Ao calcular o desconto, verifique se o valor total é não negativo e se a taxa de desconto está dentro
    do intervalo válido (0 a 100%).
    4. Interface do Usuário:
    4.1 Solicite ao usuário que informe o valor total da compra e a taxa de desconto desejada.
    4.2 Utilize as funções implementadas para calcular e exibir os resultados.
    5. Exemplo:
    5.1 Uma possível execução do programa poderia ser:
        Cálculo de Desconto em Compras
        Digite o valor total da compra: 120.00
        Digite a taxa de desconto (%): 15
        Valor Original: R$ 120.00
        Desconto (15%): R$ 18.00
        Valor Final: R$ 102.00
    6. Observações:
    6.1 Organize o código de forma modular, utilizando funções para realizar tarefas específicas.
    6.2 Faça uso da passagem de parâmetros por referência para garantir que as alterações feitas nas funções afetem
    diretamente as variáveis na função principal.
    6.3 Inclua mensagens informativas para orientar o usuário durante a execução do programa.
*/
