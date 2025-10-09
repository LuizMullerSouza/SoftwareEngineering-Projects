// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float salario, financiamento;

    cout << "CALCULADOR DE FINANCIAMENTOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor do seu salário: R$";
    cin >> salario;
    cout << "Informe o valor do financiamento pretendido: R$";
    cin >> financiamento;

    // Condição para verificar financiamento
    if (financiamento <= salario * 0.3) {
        cout << "\nFinanciamento Concedido" << endl;
    } else {
        cout << "\nFinanciamento Negado" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia o valor do salário de uma pessoa e o valor de
    um financiamento pretendido. Caso o valor do financiamento seja inferior
    ou igual a 30% do valor do salário da pessoa, o programa deverá escrever
    “Financiamento Concedido”, caso contrário ele deverá escrever “Financiamento
    Negado”.
*/
