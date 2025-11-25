// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateAverage();

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Chamada da função
    calculateAverage();

    // Executado com sucesso
    return 0;
}

// Função para calcular a média
void calculateAverage() {

    // Variáveis locais
    float number1, number2, average;

    // Título
    cout << "CALCULADOR DE MÉDIA ARITMÉTICA" << endl << endl;

    // Entrada e leitura de dados
    cout << "Informe o primeiro valor: ";
    cin >> number1;

    cout << "Informe o segundo valor: ";
    cin >> number2;

    // Cálculo
    average = (number1 + number2) / 2;

    // Resultado
    cout << "\nA média entre " << number1 << " e " << number2 << " é: " << fixed << setprecision(2) << average << endl;
}

/*
    Faça um programa contendo uma função que calcula a média aritmética de dois números. A
    leitura dos números e a exibição do resultado deverão ser feitos dentro da função.
*/
