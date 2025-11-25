// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateSeries(int number);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    int inputNumber;

    // Título
    cout << "CALCULADOR FRACIONAL" << endl
         << "\nCálculo: Resultado = n/1 + (n-1)/2 + (n-2)/3 + ... + 1/n\n" << endl;

    // Entrada e leitura de dados
    do {
        cout << "Informe um número inteiro e positivo: ";
        cin >> inputNumber;

        if (inputNumber <= 0) {
            cout << "Erro: Por favor, informe um número positivo maior que zero.\n" << endl;
        }

    } while (inputNumber <= 0);

    // Chamada da função
    calculateSeries(inputNumber);

    // Executado com sucesso
    return 0;
}

// Função que calcula e exibe o resultado da série
void calculateSeries(int number) {

    // Variáveis locais
    float numerator = number, result = 0;

    // Cálculo
    for(int i = 1; i <= number; i++) {
        result += numerator / i;
        numerator--;
    }

    // Resultado
    cout << endl << "Resultado: " << fixed << setprecision(2) << result << endl;
}

/*
    Faça um programa contendo uma função para receber, por parâmetro, um valor inteiro
    e positivo n. Em seguida, a função deverá calcular e mostrar o valor de S, obtido
    pelo seguinte cálculo: S = n/1 + (n-1)/2 + (n-2)/3 + ... + 1/n
*/
