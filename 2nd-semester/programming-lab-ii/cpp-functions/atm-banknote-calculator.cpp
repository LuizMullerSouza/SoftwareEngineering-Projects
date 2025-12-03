// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateBanknotes(int amount);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    int amount;

    // Título
    cout << "CONTADOR DE NOTAS EM BIT (B$)\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor em Bit: B$";
    cin >> amount;

    // Chamada da função
    calculateBanknotes(amount);

    // Executado com sucesso
    return 0;
}

// Função que calcula a quantidade de notas
void calculateBanknotes(int amount) {

    // Variáveis locais
    int note50, note10, note5, note1;

    // Notas de 50
    note50 = amount / 50;
    amount = amount % 50;

    // Notas de 10
    note10 = amount / 10;
    amount = amount % 10;

    // Notas de 5
    note5 = amount / 5;
    amount = amount % 5;

    // Notas de 1
    note1 = amount;

    // Resultado
    cout << "\n--- Notas Recebidas ---" << endl
         << "Nota de 50: " << note50 << endl
         << "Nota de 10: " << note10 << endl
         << "Nota de 5:  " << note5  << endl
         << "Nota de 1:  " << note1  << endl;
}

/*

    Nas ilhas Weblands, a moeda oficial é o Bit, havendo
    notas de B$50,00, B$10,00, B$5,00 e B$1,00. Faça um
    programa contendo uma função para controlar um caixa
    automático: dado o valor desejado pelo cliente, a função
    deverá determinar o número de cada uma das notas, de modo
    a totalizar esse valor, minimizando a quantidade de cédulas
    entregues. Por exemplo, se o valor desejado for B$ 50,00,
    basta uma nota de B$50,00; se o valor desejado for B$72,00
    é necessário entregar uma nota de B$50,00, duas de B$10,00
    e duas de B$1,00. A função deverá receber por parâmetro o valor
    desejado pelo cliente e mostrar a quantidade de cada nota
    (50, 10, 5 e 1) que deverá ser entregue ao cliente.
*/
