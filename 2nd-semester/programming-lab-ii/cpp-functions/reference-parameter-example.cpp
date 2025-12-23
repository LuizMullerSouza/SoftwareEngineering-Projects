// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void squareByReference(int &number);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    int number;

    // Título
    cout << "MULTIPLICADOR COM PASSAGEM DE PARÂMETRO POR REFERÊNCIA\n" << endl;

    // Entrada e leitura de dados
    cout << "Digite um valor inteiro: ";
    cin >> number;

    // Chamada da função
    squareByReference(number);

    // Exibição do resultado
    cout << "\nValor alterado por referência na main: " << number << endl;

    return 0;
}

// Função que recebe por referência, modifica o original e não retorna nada
void squareByReference(int &number) {

    number = number * number;
}

/*
    Faça um programa que demonstre a passagem de
    parâmetro por referência e explique seu funcionamento.
*/
