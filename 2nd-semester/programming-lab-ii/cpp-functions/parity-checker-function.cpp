// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void checkParity(int number);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    int inputNumber;

    // Título
    cout << "VERIFICADOR DE PARIDADE" << endl << endl;

    // Entrada e leitura de dados
    cout << "Informe um número inteiro: ";
    cin >> inputNumber;

    // Chamada da função
    checkParity(inputNumber);

    // Executado com sucesso
    return 0;
}

// Função para verificar paridade
void checkParity(int number) {

    // Lógica condicional para resultado
    if (number % 2 == 0) {
        cout << endl << number << " é PAR." << endl;
    } else {
        cout << endl << number << " é ÍMPAR." << endl;
    }
}

/*
    Faça um programa contendo uma função que mostra se um
    número inteiro passado como parâmetro é par ou ímpar.
*/
