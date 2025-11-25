// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateSquare(int number);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    int inputNumber;

    // Título
    cout << "CALCULADOR DE SEGUNDA POTÊNCIA" << endl << endl;

    // Entrada e leitura de dados
    cout << "Informe um valor inteiro para calcular a segunda potência: ";
    cin >> inputNumber;

    // Chamada da função
    calculateSquare(inputNumber);

    // Executado com sucesso
    return 0;
}

// Função que calcula e exibe o quadrado do número
void calculateSquare(int number) {

    // Variável local
    int result;

    // Cálculo
    result = number * number;

    // Resultado
    cout << endl << number << " elevado à segunda potência é: " << result << endl;
}

/*
    Faça um programa contendo uma função, onde passado um número inteiro n como
    parâmetro, calcula e mostra o valor de n elevado a segunda potência (n²). O
    valor n deverá ser informado pelo usuário na função principal.
*/
