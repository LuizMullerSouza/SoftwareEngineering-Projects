// Bibliotecas
#include <iostream>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float salario, financiamento;

    cout << "CALCULADOR DE FINANCIAMENTOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor do seu sal�rio: R$";
    cin >> salario;
    cout << "Informe o valor do financiamento pretendido: R$";
    cin >> financiamento;

    // Condi��o para verificar financiamento
    if (financiamento <= salario * 0.3) {
        cout << "\nFinanciamento Concedido" << endl;
    } else {
        cout << "\nFinanciamento Negado" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia o valor do sal�rio de uma pessoa e o valor de
    um financiamento pretendido. Caso o valor do financiamento seja inferior
    ou igual a 30% do valor do sal�rio da pessoa, o programa dever� escrever
    �Financiamento Concedido�, caso contr�rio ele dever� escrever �Financiamento
    Negado�.
*/
