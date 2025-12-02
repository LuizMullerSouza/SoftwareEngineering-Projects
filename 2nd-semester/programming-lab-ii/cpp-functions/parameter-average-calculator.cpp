// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateAverage(int number1, int number2);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number1, number2;

    // Título
    cout << "CALCULADOR DE MÉDIA ARITMÉTICA\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o primeiro número inteiro: ";
    cin >> number1;

    cout << "Informe o segundo número inteiro: ";
    cin >> number2;

    // Chamada da função
    calculateAverage(number1, number2);

    // Executado com sucesso
    return 0;
}

// Função que calcula e mostra a média
void calculateAverage(int number1, int number2) {

    // Variável local
    float result;

    // Cálculo da média
    result = (number1 + number2) / 2.0;

    // Resultado
    cout << "\nMédia entre " << number1 << " e " << number2 << ": " << fixed << setprecision(2) << result << endl;
}

/*
    Faça um programa contendo uma função para calcular e mostrar a média aritmética de dois números
    inteiros fornecidos por parâmetros. A leitura dos dados deverá ser feita na função principal.
*/
